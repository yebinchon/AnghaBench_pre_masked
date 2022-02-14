
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 git_submodule *VAR_1;

 FUNC_2("submod2/.gitmodules",
      "[submodule \"Test_App\"]\n"
      "    path = Test_App\n"
      "    url = ../Test_App\n"
      "[submodule \"Test_App2\"]\n"
      "    path = Test_App2\n"
      "    url = ../Test_App\n");

 FUNC_1(FUNC_4(&VAR_1, VAR_0, "Test_App"));
 FUNC_0("Test_App", FUNC_5(VAR_1));

 FUNC_3(VAR_1);

 FUNC_1(FUNC_4(&VAR_1, VAR_0, "Test_App2"));
 FUNC_0("Test_App2", FUNC_5(VAR_1));

 FUNC_3(VAR_1);
}
