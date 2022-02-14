
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_1)
{

 for (;;) {
  __asm__ __volatile__("dsb\n\t" "wfi\n\t"
   : : : "memory");
  if (VAR_0 == FUNC_0(VAR_1)) {



   break;
  }
 }
}
