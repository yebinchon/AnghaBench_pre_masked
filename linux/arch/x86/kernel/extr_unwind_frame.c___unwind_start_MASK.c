
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct unwind_state {unsigned long* next_bp; unsigned long* bp; TYPE_1__ stack_info; int stack_mask; struct task_struct* task; struct pt_regs* got_irq; } ;
struct task_struct {int dummy; } ;
struct pt_regs {scalar_t__ ip; scalar_t__ sp; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (struct task_struct*,struct pt_regs*) ;
 int FUNC_1 (unsigned long*,struct task_struct*,TYPE_1__*,int *) ;
 int FUNC_2 (struct unwind_state*,int ,int) ;
 int FUNC_3 (TYPE_1__*,unsigned long*,int) ;
 int FUNC_4 (struct unwind_state*) ;
 int FUNC_5 (struct unwind_state*) ;
 int FUNC_6 (struct unwind_state*,unsigned long*) ;
 scalar_t__ FUNC_7 (struct pt_regs*) ;

void FUNC_8(struct unwind_state *VAR_1, struct task_struct *VAR_2,
      struct pt_regs *VAR_3, unsigned long *VAR_4)
{
 unsigned long *VAR_5;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->task = VAR_2;
 VAR_1->got_irq = (VAR_3);


 if (VAR_3 && FUNC_7(VAR_3)) {
  VAR_1->stack_info.type = VAR_0;
  return;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_3 && VAR_3->ip == 0 && (unsigned long *)VAR_3->sp >= VAR_4) {
  VAR_1->next_bp = VAR_5;
  VAR_5 = ((unsigned long *)VAR_3->sp) - 1;
 }


 FUNC_1(VAR_5, VAR_1->task, &VAR_1->stack_info,
         &VAR_1->stack_mask);
 FUNC_6(VAR_1, VAR_5);






 while (!FUNC_4(VAR_1) &&
        (!FUNC_3(&VAR_1->stack_info, VAR_4, sizeof(long)) ||
   (VAR_1->next_bp == ((void*)0) && VAR_1->bp < VAR_4)))
  FUNC_5(VAR_1);
}
