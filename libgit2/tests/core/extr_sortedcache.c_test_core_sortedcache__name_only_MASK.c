
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_sortedcache ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,void*) ;
 int FUNC_3 (int,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (size_t*,int *,char*) ;
 int FUNC_11 (int **,int ,int *,int *,int ,int *) ;
 int FUNC_12 (void**,int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_1 ;

void FUNC_15(void)
{
 git_sortedcache *VAR_2;
 void *VAR_3;
 size_t VAR_4;

 FUNC_4(FUNC_11(
  &VAR_2, 0, ((void*)0), ((void*)0), VAR_1, ((void*)0)));

 FUNC_4(FUNC_13(VAR_2));
 FUNC_4(FUNC_12(&VAR_3, VAR_2, "aaa"));
 FUNC_4(FUNC_12(&VAR_3, VAR_2, "bbb"));
 FUNC_4(FUNC_12(&VAR_3, VAR_2, "zzz"));
 FUNC_4(FUNC_12(&VAR_3, VAR_2, "mmm"));
 FUNC_4(FUNC_12(&VAR_3, VAR_2, "iii"));
 FUNC_14(VAR_2);

 FUNC_3(5, FUNC_7(VAR_2));

 FUNC_0((VAR_3 = FUNC_9(VAR_2, "aaa")) != ((void*)0));
 FUNC_2("aaa", VAR_3);
 FUNC_0((VAR_3 = FUNC_9(VAR_2, "mmm")) != ((void*)0));
 FUNC_2("mmm", VAR_3);
 FUNC_0((VAR_3 = FUNC_9(VAR_2, "zzz")) != ((void*)0));
 FUNC_2("zzz", VAR_3);
 FUNC_0(FUNC_9(VAR_2, "qqq") == ((void*)0));

 FUNC_0((VAR_3 = FUNC_6(VAR_2, 0)) != ((void*)0));
 FUNC_2("aaa", VAR_3);
 FUNC_0((VAR_3 = FUNC_6(VAR_2, 1)) != ((void*)0));
 FUNC_2("bbb", VAR_3);
 FUNC_0((VAR_3 = FUNC_6(VAR_2, 2)) != ((void*)0));
 FUNC_2("iii", VAR_3);
 FUNC_0((VAR_3 = FUNC_6(VAR_2, 3)) != ((void*)0));
 FUNC_2("mmm", VAR_3);
 FUNC_0((VAR_3 = FUNC_6(VAR_2, 4)) != ((void*)0));
 FUNC_2("zzz", VAR_3);
 FUNC_0(FUNC_6(VAR_2, 5) == ((void*)0));

 FUNC_4(FUNC_10(&VAR_4, VAR_2, "aaa"));
 FUNC_3(0, VAR_4);
 FUNC_4(FUNC_10(&VAR_4, VAR_2, "iii"));
 FUNC_3(2, VAR_4);
 FUNC_4(FUNC_10(&VAR_4, VAR_2, "zzz"));
 FUNC_3(4, VAR_4);
 FUNC_1(
  VAR_0, FUNC_10(&VAR_4, VAR_2, "abc"));

 FUNC_5(VAR_2, 1);

 FUNC_3(0, FUNC_7(VAR_2));
 FUNC_0(FUNC_6(VAR_2, 0) == ((void*)0));
 FUNC_0(FUNC_9(VAR_2, "aaa") == ((void*)0));
 FUNC_0(FUNC_6(VAR_2, 0) == ((void*)0));

 FUNC_8(VAR_2);
}
