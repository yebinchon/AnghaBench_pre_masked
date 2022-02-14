
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct callee_regs {int dummy; } ;
struct TYPE_3__ {scalar_t__ callee_reg; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (unsigned long*,struct pt_regs*,struct callee_regs*) ;

void FUNC_1(unsigned long *VAR_1, struct pt_regs *VAR_2)
{
 FUNC_0(VAR_1, VAR_2, (struct callee_regs *)
  VAR_0->thread.callee_reg);
}
