
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_info {int type; } ;
struct unwind_state {int reuse_sp; unsigned long sp; unsigned long ip; int reliable; int error; struct stack_info stack_info; struct pt_regs* regs; int graph_idx; int task; } ;
struct stack_frame {int * gprs; int back_chain; } ;
struct TYPE_2__ {int addr; int mask; } ;
struct pt_regs {TYPE_1__ psw; int * gprs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ,int *,unsigned long,void*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (struct stack_info*,unsigned long,int) ;
 struct pt_regs* FUNC_4 (struct unwind_state*,unsigned long) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (struct unwind_state*,unsigned long) ;

bool FUNC_7(struct unwind_state *VAR_4)
{
 struct stack_info *VAR_5 = &VAR_4->stack_info;
 struct stack_frame *VAR_6;
 struct pt_regs *VAR_7;
 unsigned long VAR_8, VAR_9;
 bool VAR_10;

 VAR_7 = VAR_4->regs;
 if (FUNC_5(VAR_7)) {
  if (VAR_4->reuse_sp) {
   VAR_8 = VAR_4->sp;
   VAR_4->reuse_sp = 0;
  } else {
   VAR_8 = FUNC_0(VAR_7->gprs[15]);
   if (FUNC_5(FUNC_4(VAR_4, VAR_8))) {
    if (!FUNC_6(VAR_4, VAR_8))
     goto out_err;
   }
  }
  VAR_6 = (struct stack_frame *) VAR_8;
  VAR_9 = FUNC_0(VAR_6->gprs[8]);
  VAR_10 = 0;
  VAR_7 = ((void*)0);
 } else {
  VAR_6 = (struct stack_frame *) VAR_4->sp;
  VAR_8 = FUNC_0(VAR_6->back_chain);
  if (FUNC_2(VAR_8)) {

   if (FUNC_5(FUNC_4(VAR_4, VAR_8))) {
    if (!FUNC_6(VAR_4, VAR_8))
     goto out_err;
   }
   VAR_6 = (struct stack_frame *) VAR_8;
   VAR_9 = FUNC_0(VAR_6->gprs[8]);
   VAR_10 = 1;
  } else {

   VAR_8 = VAR_4->sp + VAR_1;
   if (!FUNC_3(VAR_5, VAR_8, sizeof(struct pt_regs)))
    goto out_stop;
   VAR_7 = (struct pt_regs *) VAR_8;
   if (FUNC_0(VAR_7->psw.mask) & VAR_0)
    goto out_stop;
   VAR_9 = FUNC_0(VAR_7->psw.addr);
   VAR_10 = 1;
  }
 }
 VAR_4->sp = VAR_8;
 VAR_4->ip = VAR_9;
 VAR_4->regs = VAR_7;
 VAR_4->reliable = VAR_10;
 return 1;

out_err:
 VAR_4->error = 1;
out_stop:
 VAR_4->stack_info.type = VAR_2;
 return 0;
}
