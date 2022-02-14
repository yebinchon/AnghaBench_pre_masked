
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct unwind_state {unsigned long sp; int full_regs; int signal; TYPE_2__ stack_info; int stack_mask; struct task_struct* task; void* ip; void* bp; struct pt_regs* regs; } ;
struct TYPE_4__ {unsigned long sp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {unsigned long sp; void* bp; void* ip; } ;
struct inactive_task_frame {int ret_addr; int bp; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_2 (void*,struct task_struct*,TYPE_2__*,int *) ;
 int FUNC_3 (struct unwind_state*,int ,int) ;
 int FUNC_4 (TYPE_2__*,unsigned long*,int) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct unwind_state*) ;
 int FUNC_7 (struct unwind_state*) ;
 scalar_t__ FUNC_8 (struct pt_regs*) ;

void FUNC_9(struct unwind_state *VAR_2, struct task_struct *VAR_3,
      struct pt_regs *VAR_4, unsigned long *VAR_5)
{
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->task = VAR_3;






 if (FUNC_5(VAR_3))
  goto done;

 if (VAR_4) {
  if (FUNC_8(VAR_4))
   goto done;

  VAR_2->ip = VAR_4->ip;
  VAR_2->sp = VAR_4->sp;
  VAR_2->bp = VAR_4->bp;
  VAR_2->regs = VAR_4;
  VAR_2->full_regs = 1;
  VAR_2->signal = 1;

 } else if (VAR_3 == VAR_1) {
  asm volatile("lea (%%rip), %0\n\t"
        "mov %%rsp, %1\n\t"
        "mov %%rbp, %2\n\t"
        : "=r" (VAR_2->ip), "=r" (VAR_2->sp),
          "=r" (VAR_2->bp));

 } else {
  struct inactive_task_frame *VAR_6 = (void *)VAR_3->thread.sp;

  VAR_2->sp = VAR_3->thread.sp;
  VAR_2->bp = FUNC_1(VAR_6->bp);
  VAR_2->ip = FUNC_1(VAR_6->ret_addr);
 }

 if (FUNC_2((unsigned long *)VAR_2->sp, VAR_2->task,
      &VAR_2->stack_info, &VAR_2->stack_mask)) {






  void *VAR_7 = (void *)FUNC_0((unsigned long)VAR_2->sp);
  if (FUNC_2(VAR_7, VAR_2->task, &VAR_2->stack_info,
       &VAR_2->stack_mask))
   return;
 }
 if (VAR_4) {
  FUNC_7(VAR_2);
  return;
 }


 while (!FUNC_6(VAR_2) &&
        (!FUNC_4(&VAR_2->stack_info, VAR_5, sizeof(long)) ||
   VAR_2->sp <= (unsigned long)VAR_5))
  FUNC_7(VAR_2);

 return;

done:
 VAR_2->stack_info.type = VAR_0;
 return;
}
