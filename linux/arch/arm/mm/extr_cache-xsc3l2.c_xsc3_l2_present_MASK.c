
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(void)
{
 unsigned long VAR_0;

 __asm__("mrc p15, 1, %0, c0, c0, 1" : "=r" (VAR_0));

 return !!(VAR_0 & 0xf8);
}
