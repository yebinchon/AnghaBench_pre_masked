
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;

void FUNC_9(unsigned long VAR_4, unsigned long VAR_5)
{
 VAR_4 &= VAR_3;
 VAR_5 += VAR_2 - 1;
 VAR_5 &= VAR_3;
 {
 unsigned long VAR_6, VAR_7;

 FUNC_1(VAR_6);
 VAR_7 = FUNC_2() & VAR_0;
 while (VAR_4 < VAR_5) {
  int VAR_8;

  FUNC_8(VAR_4 | VAR_7);
  VAR_4 += 2*VAR_1;
  FUNC_7();
  VAR_8 = FUNC_3();
  if (VAR_8 >= 0)
   FUNC_6();
 }
 FUNC_4(VAR_7, VAR_7);
 FUNC_0(VAR_6);
 }

}
