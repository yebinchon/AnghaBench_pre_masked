
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int int_code; scalar_t__ int_parm; int * gprs; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 unsigned long FUNC_1 (struct pt_regs*) ;
 unsigned long FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

unsigned long FUNC_4(struct pt_regs *VAR_3)
{




 if (VAR_3->int_code == 0x1407 && VAR_3->int_parm == VAR_0)
  if (!VAR_3->gprs[15])
   return FUNC_1(VAR_3);

 if (FUNC_0(VAR_3))
  return FUNC_2(VAR_3);

 return FUNC_3(VAR_3) ? VAR_2
          : VAR_1;
}
