
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ip; int flags; } ;
struct kprobe_ctlblk {scalar_t__ kprobe_status; int kprobe_old_flags; } ;
struct TYPE_2__ {scalar_t__ insn; } ;
struct kprobe {scalar_t__ (* fault_handler ) (struct kprobe*,struct pt_regs*,int) ;scalar_t__ addr; TYPE_1__ ainsn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 struct kprobe_ctlblk* FUNC_1 () ;
 struct kprobe* FUNC_2 () ;
 int FUNC_3 (struct kprobe*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct kprobe_ctlblk*) ;
 scalar_t__ FUNC_6 (struct kprobe*,struct pt_regs*,int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct pt_regs *VAR_5, int VAR_6)
{
 struct kprobe *VAR_7 = FUNC_2();
 struct kprobe_ctlblk *VAR_8 = FUNC_1();

 if (FUNC_7(VAR_5->ip == (unsigned long)VAR_7->ainsn.insn)) {

  FUNC_0(VAR_8->kprobe_status != VAR_1 &&
   VAR_8->kprobe_status != VAR_3);







  VAR_5->ip = (unsigned long)VAR_7->addr;





  VAR_5->flags &= ~VAR_4;





  VAR_5->flags |= VAR_8->kprobe_old_flags;

  if (VAR_8->kprobe_status == VAR_3)
   FUNC_5(VAR_8);
  else
   FUNC_4();
 } else if (VAR_8->kprobe_status == VAR_0 ||
     VAR_8->kprobe_status == VAR_2) {





  FUNC_3(VAR_7);
  if (VAR_7->fault_handler && VAR_7->fault_handler(VAR_7, VAR_5, VAR_6))
   return 1;
 }

 return 0;
}
