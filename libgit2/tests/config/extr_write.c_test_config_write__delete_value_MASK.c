
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int git_config ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int **,char*) ;
 int FUNC_6 (int *,char*,int) ;

void FUNC_7(void)
{
 git_config *VAR_1;
 int32_t VAR_2;

 FUNC_1(FUNC_5(&VAR_1, "config9"));
 FUNC_1(FUNC_6(VAR_1, "core.dummy", 5));
 FUNC_3(VAR_1);

 FUNC_1(FUNC_5(&VAR_1, "config9"));
 FUNC_1(FUNC_2(VAR_1, "core.dummy"));
 FUNC_3(VAR_1);

 FUNC_1(FUNC_5(&VAR_1, "config9"));
 FUNC_0(FUNC_4(&VAR_2, VAR_1, "core.dummy") == VAR_0);
 FUNC_1(FUNC_6(VAR_1, "core.dummy", 1));
 FUNC_3(VAR_1);
}
