
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_0 ;

void FUNC_6(unsigned long VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_3();
 if (FUNC_0()) {
  VAR_2 = FUNC_1();
  do {

   VAR_3 = FUNC_1() - VAR_2;
   if (VAR_3 < 0)
    VAR_3 += 1000000000;
   FUNC_4();
  } while (VAR_3 < VAR_1);
 } else if (VAR_0) {





  FUNC_4();
 } else {
  VAR_2 = FUNC_2();
  while (FUNC_2() - VAR_2 < VAR_1)
   FUNC_4();
 }
 FUNC_5();
}
