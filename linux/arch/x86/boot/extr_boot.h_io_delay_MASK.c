
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline void FUNC_0(void)
{
 const u16 VAR_0 = 0x80;
 asm volatile("outb %%al,%0" : : "dN" (VAR_0));
}
