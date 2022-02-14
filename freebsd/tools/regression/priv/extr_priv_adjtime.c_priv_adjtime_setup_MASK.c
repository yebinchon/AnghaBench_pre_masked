
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

int
FUNC_2(int VAR_2, int VAR_3, struct test *VAR_4)
{

 if (VAR_0)
  return (0);
 if (FUNC_0(((void*)0), &VAR_1) < 0) {
  FUNC_1("priv_adjtime_setup: adjtime(NULL)");
  return (-1);
 }
 VAR_0 = 1;
 return (0);
}
