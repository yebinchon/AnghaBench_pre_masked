
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int **,char*,int ) ;
 int FUNC_14 (char*,int) ;

void FUNC_15(void)
{
 git_repository *VAR_0;
 git_index *VAR_1;

 FUNC_14("index_test", 0770);

 FUNC_3(FUNC_13(&VAR_0, "index_test", 0));
 FUNC_3(FUNC_12(&VAR_1, VAR_0));
 FUNC_0(FUNC_5(VAR_1) == 0);

 FUNC_2("index_test/hello", ((void*)0));
 FUNC_3(FUNC_4(VAR_1, "hello"));
 FUNC_3(FUNC_10(VAR_1));

 FUNC_3(FUNC_8(VAR_1, 1));
 FUNC_0(FUNC_5(VAR_1) == 1);
 FUNC_0(FUNC_7(VAR_1, "hello", 0) != ((void*)0));

 FUNC_3(FUNC_9(VAR_1, "hello", 0));
 FUNC_3(FUNC_10(VAR_1));

 FUNC_3(FUNC_8(VAR_1, 1));
 FUNC_0(FUNC_5(VAR_1) == 0);
 FUNC_0(FUNC_7(VAR_1, "hello", 0) == ((void*)0));

 FUNC_6(VAR_1);
 FUNC_11(VAR_0);
 FUNC_1("index_test");
}
