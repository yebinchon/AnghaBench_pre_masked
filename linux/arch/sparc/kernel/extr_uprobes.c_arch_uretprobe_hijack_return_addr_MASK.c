
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* u_regs; } ;


 size_t VAR_0 ;

unsigned long
FUNC_0(unsigned long VAR_1,
      struct pt_regs *VAR_2)
{
 unsigned long VAR_3 = VAR_2->u_regs[VAR_0];

 VAR_2->u_regs[VAR_0] = VAR_1-8;

 return VAR_3 + 8;
}
