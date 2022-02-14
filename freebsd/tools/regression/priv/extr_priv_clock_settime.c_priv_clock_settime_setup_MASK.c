
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

int
FUNC_2(int VAR_2, int VAR_3, struct test *VAR_4)
{

 if (FUNC_0(VAR_0, &VAR_1) < 0) {
  FUNC_1("priv_clock_settime_setup: "
      "clock_gettime(CLOCK_REALTIME)");
  return (-1);
 }
 return (0);
}
