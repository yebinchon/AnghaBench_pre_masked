
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*,int) ;

git_repository *FUNC_6(void)
{
 git_repository *VAR_1 = FUNC_2("submodule_with_path");

 FUNC_0("testrepo.git");
 FUNC_5("submodule_with_path/lib", 0777);
 FUNC_5("submodule_with_path/lib/testrepo", 0777);

 FUNC_3(VAR_0, "testrepo.git");

 FUNC_1(FUNC_4(VAR_1, 1));

 return VAR_1;
}
