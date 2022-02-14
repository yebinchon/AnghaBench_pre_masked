
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int **,int *,int ,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*,int) ;
 int FUNC_13 (int *) ;

void FUNC_14(void)
{
 git_repository *VAR_2;
 git_remote *VAR_3;
 git_config *VAR_4;
 git_repository *VAR_5 = FUNC_3("testrepo.git");
 const char *VAR_6 = FUNC_2(FUNC_13(VAR_5));

 FUNC_4(&VAR_1, "foo");
 FUNC_1(FUNC_12(&VAR_2, "foo", 1));

 FUNC_1(FUNC_10(&VAR_4, VAR_2));
 FUNC_1(FUNC_6(VAR_4, "fetch.prune", 1));

 FUNC_1(FUNC_7(&VAR_3, VAR_2, VAR_0, VAR_6));
 FUNC_0(1, FUNC_9(VAR_3));

 FUNC_5(VAR_4);
 FUNC_8(VAR_3);
 FUNC_11(VAR_2);
}
