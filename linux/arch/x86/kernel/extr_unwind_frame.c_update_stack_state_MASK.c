
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {int type; int next_sp; } ;
struct unwind_state {unsigned long* bp; int got_irq; unsigned long* orig_sp; int graph_idx; int task; int ip; struct pt_regs* regs; struct stack_info stack_info; int stack_mask; } ;
struct pt_regs {int dummy; } ;
typedef enum stack_type { ____Placeholder_stack_type } stack_type ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 struct pt_regs* FUNC_1 (unsigned long*) ;
 int FUNC_2 (int ,int *,unsigned long,unsigned long*) ;
 scalar_t__ FUNC_3 (int ,int ,struct stack_info*,int *) ;
 int FUNC_4 (struct stack_info*,unsigned long*,size_t) ;
 unsigned long* FUNC_5 (struct unwind_state*) ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;

__attribute__((used)) static bool FUNC_7(struct unwind_state *VAR_1,
          unsigned long *VAR_2)
{
 struct stack_info *VAR_3 = &VAR_1->stack_info;
 enum stack_type VAR_4 = VAR_3->type;
 struct pt_regs *VAR_5;
 unsigned long *VAR_6, *VAR_7, *VAR_8, VAR_9;
 size_t VAR_10;

 if (VAR_1->regs)
  VAR_7 = (void *)VAR_1->regs + sizeof(*VAR_1->regs);
 else
  VAR_7 = (void *)VAR_1->bp + VAR_0;


 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5) {
  VAR_6 = (unsigned long *)VAR_5;
  VAR_10 = sizeof(*VAR_5);
  VAR_1->got_irq = 1;
 } else {
  VAR_6 = VAR_2;
  VAR_10 = VAR_0;
 }
 while (!FUNC_4(VAR_3, VAR_6, VAR_10))
  if (FUNC_3(VAR_3->next_sp, VAR_1->task, VAR_3,
       &VAR_1->stack_mask))
   return 0;


 if (VAR_1->orig_sp && VAR_1->stack_info.type == VAR_4 &&
     VAR_6 < VAR_7)
  return 0;


 if (VAR_5) {
  VAR_1->regs = VAR_5;
  VAR_1->bp = ((void*)0);
 } else {
  VAR_1->bp = VAR_2;
  VAR_1->regs = ((void*)0);
 }


 if (VAR_1->regs && FUNC_6(VAR_1->regs))
  VAR_1->ip = 0;
 else {
  VAR_8 = FUNC_5(VAR_1);
  VAR_9 = FUNC_0(VAR_1->task, *VAR_8);
  VAR_1->ip = FUNC_2(VAR_1->task, &VAR_1->graph_idx,
        VAR_9, VAR_8);
 }


 if (!VAR_1->orig_sp)
  VAR_1->orig_sp = VAR_6;

 return 1;
}
