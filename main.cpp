#include<stdlib.h>
#include<stdio.h>
#include<list>
#include<iostream>
#include<string>


using namespace std;

int main()
{

	std::list<const char*> eki
	{ "Tokyo" ,"Yurakucho","Shimbaahi","Hamamatsucho",
		"Tamachi","Shinagawa","Osaki","Gotanda","Meguro",
		"Ebisu","Shibuya","Harajuku","Yoyogi","Shinjuku",
		"Shin-Okubo","Takadanobaba","Mejiro","Ikebukuro","Otsuka",
		"Sugamo","Komagome","Tabata","Nippori","Uguisudani","Ueno",
		"Okachimachi","Akihabara","Kanda"
	};

	printf("-------1970”N-------\n");
	for (auto itr = eki.begin(); itr != eki.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	printf("-------2019”N-------\n");
	for (auto itr = eki.begin(); itr != eki.end(); ++itr)
	{
		if (strcmp(*itr, "Nippori") == 0)
		{
			eki.insert(itr, "Nishinippori");
			break;
		}
	}

	for (auto itr = eki.begin(); itr != eki.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	printf("-------2022”N-------\n");


	for (auto itr = eki.begin(); itr != eki.end(); ++itr)
	{
		if (strcmp(*itr, "Shinagawa") == 0)
		{
			eki.insert(itr, "TakanawaGateway");
			break;
		}
	}

	for (auto itr = eki.begin(); itr != eki.end(); ++itr)
	{
		printf("%s\n", *itr);
	}


	return 0;
}