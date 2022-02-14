
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct pt_regs*,unsigned long) ;

unsigned long FUNC_2(struct pt_regs *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1) + VAR_0;
 unsigned long *VAR_4 = (unsigned long *)VAR_3;
 VAR_4 += VAR_2;
 if (FUNC_1(VAR_1, (unsigned long)VAR_4))
  return *VAR_4;
 else
  return 0;
}
