
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ip; int flags; } ;
struct kprobe_ctlblk {int kprobe_status; } ;
struct TYPE_2__ {scalar_t__ insn; scalar_t__ boostable; } ;
struct kprobe {scalar_t__ opcode; TYPE_1__ ainsn; scalar_t__ addr; int post_handler; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct kprobe_ctlblk*) ;
 int FUNC_3 (struct kprobe*,struct pt_regs*,struct kprobe_ctlblk*) ;
 scalar_t__ FUNC_4 (struct kprobe*,struct pt_regs*,int) ;

__attribute__((used)) static void FUNC_5(struct kprobe *VAR_5, struct pt_regs *VAR_6,
        struct kprobe_ctlblk *VAR_7, int VAR_8)
{
 if (FUNC_4(VAR_5, VAR_6, VAR_8))
  return;


 if (VAR_5->ainsn.boostable && !VAR_5->post_handler) {

  if (!VAR_8)
   FUNC_1();





  VAR_6->ip = (unsigned long)VAR_5->ainsn.insn;
  return;
 }

 if (VAR_8) {
  FUNC_2(VAR_7);
  FUNC_3(VAR_5, VAR_6, VAR_7);
  VAR_7->kprobe_status = VAR_2;
 } else
  VAR_7->kprobe_status = VAR_1;

 FUNC_0();
 VAR_6->flags |= VAR_4;
 VAR_6->flags &= ~VAR_3;

 if (VAR_5->opcode == VAR_0)
  VAR_6->ip = (unsigned long)VAR_5->addr;
 else
  VAR_6->ip = (unsigned long)VAR_5->ainsn.insn;
}
