
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *) ;

void FUNC_3(void)
{
 FUNC_1("submod2/.gitmodules",
      "[submodule \"sm1\"]\n"
      "    path = duplicated-path\n"
      "    url = sm1\n"
      "[submodule \"sm2\"]\n"
      "    path = duplicated-path\n"
      "    url = sm2\n");

 FUNC_0(FUNC_2(VAR_1, VAR_0, ((void*)0)));
}
