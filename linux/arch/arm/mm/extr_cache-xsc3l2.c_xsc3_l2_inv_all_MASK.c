
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(void)
{
 unsigned long VAR_1, VAR_2;
 int VAR_3, VAR_4;

 __asm__("mrc p15, 1, %0, c0, c0, 1" : "=r" (VAR_1));

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_2 = (VAR_4 << 29) | (VAR_3 << 5);
   __asm__("mcr p15, 1, %0, c7, c11, 2" : : "r"(VAR_2));
  }
 }

 FUNC_1();
}
