
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct reg_window {scalar_t__* ins; } ;
struct pt_regs {int tstate; scalar_t__* u_regs; int tnpc; int tpc; } ;
struct global_reg_snapshot {int tstate; struct thread_info* thread; scalar_t__ rpc; scalar_t__ i7; scalar_t__ o7; int tnpc; int tpc; } ;
struct TYPE_2__ {struct global_reg_snapshot reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (struct thread_info*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct thread_info *VAR_5, struct pt_regs *VAR_6,
         int VAR_7)
{
 struct global_reg_snapshot *VAR_8;

 FUNC_0();

 VAR_8 = &VAR_4[VAR_7].reg;

 VAR_8->tstate = VAR_6->tstate;
 VAR_8->tpc = VAR_6->tpc;
 VAR_8->tnpc = VAR_6->tnpc;
 VAR_8->o7 = VAR_6->u_regs[VAR_3];

 if (VAR_6->tstate & VAR_1) {
  struct reg_window *VAR_9;

  VAR_9 = (struct reg_window *)
   (VAR_6->u_regs[VAR_2] + VAR_0);
  if (FUNC_1(VAR_5, (unsigned long) VAR_9)) {
   VAR_8->i7 = VAR_9->ins[7];
   VAR_9 = (struct reg_window *)
    (VAR_9->ins[6] + VAR_0);
   if (FUNC_1(VAR_5, (unsigned long) VAR_9))
    VAR_8->rpc = VAR_9->ins[7];
  }
 } else {
  VAR_8->i7 = 0;
  VAR_8->rpc = 0;
 }
 VAR_8->thread = VAR_5;
}
