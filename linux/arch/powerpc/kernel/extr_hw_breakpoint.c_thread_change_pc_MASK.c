
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * last_hit_ubp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int msr; } ;
struct arch_hw_breakpoint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct arch_hw_breakpoint*) ;
 struct arch_hw_breakpoint* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct task_struct *VAR_1, struct pt_regs *VAR_2)
{
 struct arch_hw_breakpoint *VAR_3;

 if (FUNC_2(!VAR_1->thread.last_hit_ubp))
  return;

 VAR_3 = FUNC_1(VAR_1->thread.last_hit_ubp);
 VAR_2->msr &= ~VAR_0;
 FUNC_0(VAR_3);
 VAR_1->thread.last_hit_ubp = ((void*)0);
}
