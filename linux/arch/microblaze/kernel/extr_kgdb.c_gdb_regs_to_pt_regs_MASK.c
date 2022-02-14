
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;



void FUNC_0(unsigned long *VAR_0, struct pt_regs *VAR_1)
{
 unsigned int VAR_2;
 unsigned long *VAR_3 = (unsigned long *)VAR_1;




 for (VAR_2 = 1; VAR_2 < (sizeof(struct pt_regs) / 4) - 1; VAR_2++)
  VAR_3[VAR_2] = VAR_0[VAR_2];
}
