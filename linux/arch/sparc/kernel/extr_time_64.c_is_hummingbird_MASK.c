
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(void)
{
 unsigned long VAR_0, VAR_1, VAR_2;

 __asm__ __volatile__ ("rdpr %%ver, %0"
         : "=&r" (VAR_0));
 VAR_1 = ((VAR_0 >> 48) & 0xffff);
 VAR_2 = ((VAR_0 >> 32) & 0xffff);

 return (VAR_1 == 0x17 && VAR_2 == 0x13);
}
