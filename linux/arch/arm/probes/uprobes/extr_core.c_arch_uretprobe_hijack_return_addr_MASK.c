
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ARM_lr; } ;



unsigned long
FUNC_0(unsigned long VAR_0,
      struct pt_regs *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = VAR_1->ARM_lr;

 VAR_1->ARM_lr = VAR_0;
 return VAR_2;
}
