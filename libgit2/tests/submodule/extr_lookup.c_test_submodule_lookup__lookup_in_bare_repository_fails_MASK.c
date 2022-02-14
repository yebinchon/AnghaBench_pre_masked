
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int **,int ,char*) ;

void FUNC_4(void)
{
 git_submodule *VAR_1;

 FUNC_1();
 VAR_0 = FUNC_2("submodules.git");

 FUNC_0(FUNC_3(&VAR_1, VAR_0, "nonexisting"));
}
