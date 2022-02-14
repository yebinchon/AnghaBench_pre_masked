
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long,int ,int) ;
 unsigned long FUNC_1 (unsigned long,int ) ;

void FUNC_2(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6;

 while (VAR_3 < VAR_4) {
  if (VAR_0) {

   VAR_6 = 1UL << 20;
   VAR_5 = (VAR_3 + VAR_6) & ~(VAR_6 - 1);
   if (VAR_5 <= VAR_4) {
    do {
     VAR_3 = FUNC_1(VAR_3, VAR_1);
    } while (VAR_3 < VAR_5);
    continue;
   }
  }
  FUNC_0(VAR_3, VAR_1, 1);
  VAR_3 += VAR_2;
 }
}
