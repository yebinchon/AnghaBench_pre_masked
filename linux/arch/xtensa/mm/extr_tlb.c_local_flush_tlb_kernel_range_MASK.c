
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;

void FUNC_3(unsigned long VAR_6, unsigned long VAR_7)
{
 if (VAR_7 > VAR_6 && VAR_6 >= VAR_4 && VAR_7 <= VAR_1 &&
     VAR_7 - VAR_6 < VAR_5 << VAR_2) {
  VAR_6 &= VAR_0;
  while (VAR_6 < VAR_7) {
   FUNC_1(VAR_6);
   FUNC_0(VAR_6);
   VAR_6 += VAR_3;
  }
 } else {
  FUNC_2();
 }
}
