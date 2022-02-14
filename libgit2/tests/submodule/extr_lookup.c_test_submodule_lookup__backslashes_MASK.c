
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_repository ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int *,int ,char const*) ;
 int FUNC_11 (int *) ;

void FUNC_12(void)
{
 git_config *VAR_2;
 git_submodule *VAR_3;
 git_repository *VAR_4;
 git_buf VAR_5 = VAR_0;
 const char *VAR_6 = "..\\submod2_target";

 FUNC_1(FUNC_4(&VAR_2, "submod2/.gitmodules"));
 FUNC_1(FUNC_5(VAR_2, "submodule.sm_unchanged.url", VAR_6));
 FUNC_3(VAR_2);

 FUNC_1(FUNC_8(&VAR_3, VAR_1, "sm_unchanged"));
 FUNC_0(VAR_6, FUNC_11(VAR_3));
 FUNC_1(FUNC_9(&VAR_4, VAR_3));

 FUNC_1(FUNC_10(&VAR_5, VAR_1, VAR_6));

 FUNC_2(&VAR_5);
 FUNC_7(VAR_3);
 FUNC_6(VAR_4);
}
