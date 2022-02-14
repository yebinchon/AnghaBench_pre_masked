
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static inline void FUNC_5(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;






 FUNC_0((VAR_1 ^ VAR_2) >> VAR_0);

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = VAR_3 + (VAR_2 - VAR_1);
 FUNC_4(VAR_5);
 __asm__("mcr p15, 1, %0, c15, c9, 4\n\t"
  "mcr p15, 1, %1, c15, c9, 5"
  : : "r" (VAR_3), "r" (VAR_4));
 FUNC_3(VAR_5);
 FUNC_2(VAR_3);
}
