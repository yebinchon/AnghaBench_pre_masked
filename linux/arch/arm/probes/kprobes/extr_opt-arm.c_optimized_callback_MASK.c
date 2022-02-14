
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ARM_pc; unsigned long ARM_ORIG_r0; } ;
struct TYPE_2__ {int (* insn_singlestep ) (int ,TYPE_1__*,struct pt_regs*) ;int kprobe_direct_exec; } ;
struct kprobe {TYPE_1__ ainsn; int opcode; scalar_t__ addr; } ;
struct optimized_kprobe {struct kprobe kp; } ;
struct kprobe_ctlblk {int kprobe_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kprobe*) ;
 int VAR_1 ;
 struct kprobe_ctlblk* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct kprobe*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct kprobe*,struct pt_regs*) ;
 int FUNC_7 (int ,TYPE_1__*,struct pt_regs*) ;

__attribute__((used)) static void
FUNC_8(struct optimized_kprobe *VAR_2, struct pt_regs *VAR_3)
{
 unsigned long VAR_4;
 struct kprobe *VAR_5 = &VAR_2->kp;
 struct kprobe_ctlblk *VAR_6;


 VAR_3->ARM_pc = (unsigned long)VAR_2->kp.addr;
 VAR_3->ARM_ORIG_r0 = ~0UL;

 FUNC_5(VAR_4);
 VAR_6 = FUNC_1();

 if (FUNC_2()) {
  FUNC_3(&VAR_2->kp);
 } else {
  FUNC_0(VAR_1, &VAR_2->kp);
  VAR_6->kprobe_status = VAR_0;
  FUNC_6(&VAR_2->kp, VAR_3);
  FUNC_0(VAR_1, ((void*)0));
 }





 if (!VAR_5->ainsn.kprobe_direct_exec)
  VAR_2->kp.ainsn.insn_singlestep(VAR_5->opcode, &VAR_5->ainsn, VAR_3);

 FUNC_4(VAR_4);
}
