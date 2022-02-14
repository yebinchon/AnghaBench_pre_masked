
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {unsigned long ksp; struct task_struct* task; } ;
struct task_struct {int dummy; } ;
struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; scalar_t__ skip; unsigned long* entries; } ;
struct sparc_stackf {unsigned long callers_pc; scalar_t__ fp; } ;
struct pt_regs {int tstate; unsigned long tpc; unsigned long* u_regs; } ;
struct ftrace_ret_stack {unsigned long ret; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct thread_info* FUNC_0 () ;
 struct ftrace_ret_stack* FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct thread_info*,struct pt_regs*) ;
 int FUNC_4 (struct thread_info*,unsigned long) ;
 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct thread_info *VAR_4,
          struct stack_trace *VAR_5,
          bool VAR_6)
{
 unsigned long VAR_7, VAR_8;





 if (VAR_4 == FUNC_0()) {
  FUNC_5();
  __asm__ __volatile__("mov %%fp, %0" : "=r" (VAR_7));
 } else {
  VAR_7 = VAR_4->ksp;
 }

 VAR_8 = VAR_7 + VAR_0;



 do {
  struct sparc_stackf *VAR_9;
  struct pt_regs *VAR_10;
  unsigned long VAR_11;

  if (!FUNC_4(VAR_4, VAR_8))
   break;

  VAR_9 = (struct sparc_stackf *) VAR_8;
  VAR_10 = (struct pt_regs *) (VAR_9 + 1);

  if (FUNC_3(VAR_4, VAR_10)) {
   if (!(VAR_10->tstate & VAR_1))
    break;
   VAR_11 = VAR_10->tpc;
   VAR_8 = VAR_10->u_regs[VAR_2] + VAR_0;
  } else {
   VAR_11 = VAR_9->callers_pc;
   VAR_8 = (unsigned long)VAR_9->fp + VAR_0;
  }

  if (VAR_5->skip > 0)
   VAR_5->skip--;
  else if (!VAR_6 || !FUNC_2(VAR_11)) {
   VAR_5->entries[VAR_5->nr_entries++] = VAR_11;
  }
 } while (VAR_5->nr_entries < VAR_5->max_entries);
}
