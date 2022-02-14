
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pt_regs* segv_regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stacktrace_ops {int (* address ) (void*,unsigned long,int) ;} ;
struct stack_frame {struct stack_frame* next_frame; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct task_struct*,struct pt_regs*) ;
 unsigned long* FUNC_2 (struct task_struct*,struct pt_regs*) ;
 int FUNC_3 (void*,unsigned long,int) ;

void FUNC_4(struct task_struct *VAR_1,
  const struct stacktrace_ops *VAR_2,
  void *VAR_3)
{
 int VAR_4 = 0;
 unsigned long *VAR_5, VAR_6, VAR_7;
 struct pt_regs *VAR_8 = VAR_1->thread.segv_regs;
 struct stack_frame *VAR_9;

 VAR_6 = FUNC_1(VAR_1, VAR_8);
 VAR_5 = FUNC_2(VAR_1, VAR_8);

 VAR_9 = (struct stack_frame *)VAR_6;
 while (((long) VAR_5 & (VAR_0-1)) != 0) {
  VAR_7 = *VAR_5;
  if (FUNC_0(VAR_7)) {
   VAR_4 = 0;
   if ((unsigned long) VAR_5 == VAR_6 + sizeof(long)) {
    VAR_9 = VAR_9 ? VAR_9->next_frame : ((void*)0);
    VAR_6 = (unsigned long)VAR_9;
    VAR_4 = 1;
   }
   VAR_2->address(VAR_3, VAR_7, VAR_4);
  }
  VAR_5++;
 }
}
