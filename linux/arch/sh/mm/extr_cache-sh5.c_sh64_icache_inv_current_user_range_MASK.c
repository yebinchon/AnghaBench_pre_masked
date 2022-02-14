
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1, unsigned long VAR_2)
{




 unsigned long long VAR_3;
 unsigned long long VAR_4;
 unsigned long long VAR_5;

 VAR_4 = VAR_2;







 VAR_3 = FUNC_0(VAR_1);
 VAR_5 = VAR_3;
 while (VAR_5 < VAR_4) {
  __asm__ __volatile__ ("icbi %0, 0" : : "r" (VAR_5));
  __asm__ __volatile__ ("nop");
  __asm__ __volatile__ ("nop");
  VAR_5 += VAR_0;
 }
}
