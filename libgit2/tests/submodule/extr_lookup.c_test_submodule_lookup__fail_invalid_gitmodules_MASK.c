
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sm_lookup_data ;
typedef int git_submodule ;
typedef int data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_1 ;

void FUNC_5(void)
{
 git_submodule *VAR_2;
 sm_lookup_data VAR_3;
 FUNC_4(&VAR_3, 0, sizeof(VAR_3));

 FUNC_1("submod2/.gitmodules",
      "[submodule \"Test_App\"\n"
      "    path = Test_App\n"
      "    url = ../Test_App\n");

 FUNC_0(FUNC_3(&VAR_2, VAR_0, "Test_App"));

 FUNC_0(FUNC_2(VAR_0, VAR_1, &VAR_3));
}
