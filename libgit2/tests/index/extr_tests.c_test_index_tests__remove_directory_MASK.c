
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *,char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int *) ;
 int FUNC_15 (int **,char*,int ) ;
 int FUNC_16 (char*,int) ;

void FUNC_17(void)
{
 git_repository *VAR_0;
 git_index *VAR_1;

 FUNC_16("index_test", 0770);

 FUNC_4(FUNC_15(&VAR_0, "index_test", 0));
 FUNC_4(FUNC_14(&VAR_1, VAR_0));
 FUNC_1(0, (int)FUNC_6(VAR_1));

 FUNC_16("index_test/a", 0770);
 FUNC_3("index_test/a/1.txt", ((void*)0));
 FUNC_3("index_test/a/2.txt", ((void*)0));
 FUNC_3("index_test/a/3.txt", ((void*)0));
 FUNC_3("index_test/b.txt", ((void*)0));

 FUNC_4(FUNC_5(VAR_1, "a/1.txt"));
 FUNC_4(FUNC_5(VAR_1, "a/2.txt"));
 FUNC_4(FUNC_5(VAR_1, "a/3.txt"));
 FUNC_4(FUNC_5(VAR_1, "b.txt"));
 FUNC_4(FUNC_12(VAR_1));

 FUNC_4(FUNC_9(VAR_1, 1));
 FUNC_1(4, (int)FUNC_6(VAR_1));
 FUNC_0(FUNC_8(VAR_1, "a/1.txt", 0) != ((void*)0));
 FUNC_0(FUNC_8(VAR_1, "a/2.txt", 0) != ((void*)0));
 FUNC_0(FUNC_8(VAR_1, "b.txt", 0) != ((void*)0));

 FUNC_4(FUNC_10(VAR_1, "a/1.txt", 0));
 FUNC_4(FUNC_12(VAR_1));

 FUNC_4(FUNC_9(VAR_1, 1));
 FUNC_1(3, (int)FUNC_6(VAR_1));
 FUNC_0(FUNC_8(VAR_1, "a/1.txt", 0) == ((void*)0));
 FUNC_0(FUNC_8(VAR_1, "a/2.txt", 0) != ((void*)0));
 FUNC_0(FUNC_8(VAR_1, "b.txt", 0) != ((void*)0));

 FUNC_4(FUNC_11(VAR_1, "a", 0));
 FUNC_4(FUNC_12(VAR_1));

 FUNC_4(FUNC_9(VAR_1, 1));
 FUNC_1(1, (int)FUNC_6(VAR_1));
 FUNC_0(FUNC_8(VAR_1, "a/1.txt", 0) == ((void*)0));
 FUNC_0(FUNC_8(VAR_1, "a/2.txt", 0) == ((void*)0));
 FUNC_0(FUNC_8(VAR_1, "b.txt", 0) != ((void*)0));

 FUNC_7(VAR_1);
 FUNC_13(VAR_0);
 FUNC_2("index_test");
}
