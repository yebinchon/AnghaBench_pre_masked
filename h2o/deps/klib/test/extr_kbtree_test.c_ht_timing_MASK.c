
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;


 double VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,double) ;
 void FUNC_2 () ;

void FUNC_3(void (*VAR_1)(void))
{
 clock_t VAR_2 = FUNC_0();
 (*VAR_1)();
 FUNC_1("[ht_timing] %.3lf sec\n", (double)(FUNC_0() - VAR_2) / VAR_0);
}
