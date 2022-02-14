
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;

void FUNC_6(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;



 if (FUNC_4((VAR_3 - VAR_2) >= VAR_1 * 32)) {
  FUNC_0();
  return;
 }

 VAR_2 &= VAR_0;

 FUNC_2(VAR_4);
 while (VAR_2 < VAR_3) {
  FUNC_3(VAR_2);
  VAR_2 += VAR_1;
 }

 FUNC_5();

 FUNC_1(VAR_4);
}
