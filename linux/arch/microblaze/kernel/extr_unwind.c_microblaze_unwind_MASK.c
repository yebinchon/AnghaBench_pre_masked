
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_context {unsigned long r1; int r15; } ;
struct thread_info {struct cpu_context cpu_context; } ;
struct task_struct {scalar_t__ stack; } ;
struct stack_trace {int dummy; } ;
struct pt_regs {unsigned long pc; unsigned long r1; int r15; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (struct task_struct*,unsigned long,unsigned long,int ,struct stack_trace*) ;
 struct pt_regs* FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_2, struct stack_trace *VAR_3)
{
 if (VAR_2) {
  if (VAR_2 == VAR_1) {
   const struct pt_regs *VAR_4 = FUNC_1(VAR_2);
   FUNC_0(VAR_2, VAR_4->pc, VAR_4->r1,
      VAR_4->r15, VAR_3);
  } else {
   struct thread_info *VAR_5 =
    (struct thread_info *)(VAR_2->stack);
   const struct cpu_context *VAR_6 =
    &VAR_5->cpu_context;

   FUNC_0(VAR_2,
      (unsigned long) &VAR_0,
      VAR_6->r1,
      VAR_6->r15, VAR_3);
  }
 } else {
  unsigned long VAR_7, VAR_8;

  __asm__ __volatile__ ("or %0, r1, r0" : "=r" (VAR_8));

  __asm__ __volatile__ (
   "brlid %0, 0f;"
   "nop;"
   "0:"
   : "=r" (VAR_7)
  );


  FUNC_0(VAR_1, VAR_7, VAR_8, 0, VAR_3);
 }
}
