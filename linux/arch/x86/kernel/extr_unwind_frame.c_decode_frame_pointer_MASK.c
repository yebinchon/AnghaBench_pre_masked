
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;



__attribute__((used)) static struct pt_regs *FUNC_0(unsigned long *VAR_0)
{
 unsigned long VAR_1 = (unsigned long)VAR_0;

 if (VAR_1 & 0x80000000)
  return ((void*)0);

 return (struct pt_regs *)(VAR_1 | 0x80000000);
}
