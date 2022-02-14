
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_info {void* type; } ;
struct unwind_state {unsigned long stack_mask; int error; unsigned long sp; unsigned long ip; int reliable; int reuse_sp; int graph_idx; struct task_struct* task; struct pt_regs* regs; struct stack_info stack_info; } ;
struct task_struct {int dummy; } ;
struct stack_frame {int * gprs; } ;
struct TYPE_2__ {int addr; } ;
struct pt_regs {TYPE_1__ psw; } ;


 unsigned long FUNC_0 (int ) ;
 void* VAR_0 ;
 unsigned long FUNC_1 (struct task_struct*,int *,unsigned long,int *) ;
 scalar_t__ FUNC_2 (unsigned long,struct task_struct*,struct stack_info*,unsigned long*) ;
 int FUNC_3 (struct unwind_state*,int ,int) ;
 int FUNC_4 (struct stack_info*,unsigned long,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

void FUNC_6(struct unwind_state *VAR_2, struct task_struct *VAR_3,
      struct pt_regs *VAR_4, unsigned long VAR_5)
{
 struct stack_info *VAR_6 = &VAR_2->stack_info;
 unsigned long *VAR_7 = &VAR_2->stack_mask;
 bool VAR_8, VAR_9;
 struct stack_frame *VAR_10;
 unsigned long VAR_11;

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->task = VAR_3;
 VAR_2->regs = VAR_4;


 if (VAR_4 && FUNC_5(VAR_4)) {
  VAR_6->type = VAR_0;
  return;
 }


 if (FUNC_2(VAR_5, VAR_3, VAR_6, VAR_7) != 0 ||
     !FUNC_4(VAR_6, VAR_5, sizeof(struct stack_frame))) {

  VAR_6->type = VAR_0;
  VAR_2->error = 1;
  return;
 }


 if (VAR_4) {
  VAR_11 = FUNC_0(VAR_4->psw.addr);
  VAR_8 = 1;
  VAR_9 = 1;
 } else {
  VAR_10 = (struct stack_frame *) VAR_5;
  VAR_11 = FUNC_0(VAR_10->gprs[8]);
  VAR_8 = 0;
  VAR_9 = 0;
 }
 VAR_2->sp = VAR_5;
 VAR_2->ip = VAR_11;
 VAR_2->reliable = VAR_8;
 VAR_2->reuse_sp = VAR_9;
}
