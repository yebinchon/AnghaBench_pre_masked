
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ callee_reg; } ;
struct task_struct {TYPE_1__ thread; } ;
struct callee_regs {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (unsigned long*,int ,struct callee_regs*) ;

void FUNC_2(unsigned long *VAR_0,
     struct task_struct *VAR_1)
{
 if (VAR_1)
  FUNC_1(VAR_0, FUNC_0(VAR_1),
   (struct callee_regs *) VAR_1->thread.callee_reg);
}
