
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void)
{
 const char *VAR_0 = (char *)0xff000000;


 asm volatile ("mcr p15, 0, ip, c15, c2, 2" : : : "cc");


 while (!*VAR_0);


 asm volatile ("mcr p15, 0, ip, c15, c1, 2" : : : "cc");
}
