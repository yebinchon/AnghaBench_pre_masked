
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(unsigned long VAR_0)
{
 long VAR_1;





 __asm ("cntlzw %0, %1" : "=r" (VAR_1) : "r" (VAR_0));
 return (31 - VAR_1);

}
