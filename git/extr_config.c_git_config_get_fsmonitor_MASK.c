
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int **) ;

int FUNC_2(void)
{
 if (FUNC_1("core.fsmonitor", &VAR_0))
  VAR_0 = FUNC_0("GIT_TEST_FSMONITOR");

 if (VAR_0 && !*VAR_0)
  VAR_0 = ((void*)0);

 if (VAR_0)
  return 1;

 return 0;
}
