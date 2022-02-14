
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int *,char*,char*) ;

void FUNC_6(void)
{
 git_config *VAR_1;

 FUNC_2(FUNC_4(&VAR_1, "config9"));

 FUNC_1("config9.lock", "[core]\n");

 FUNC_0(FUNC_5(VAR_1, "core.dump", "boom"), VAR_0);

 FUNC_3(VAR_1);
}
