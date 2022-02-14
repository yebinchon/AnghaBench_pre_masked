
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long nip; int msr; } ;
struct kprobe_ctlblk {scalar_t__ kprobe_status; int kprobe_saved_msr; } ;
struct TYPE_2__ {scalar_t__ insn; } ;
struct kprobe {scalar_t__ addr; int (* post_handler ) (struct kprobe*,struct pt_regs*,int ) ;TYPE_1__ ainsn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct kprobe_ctlblk* FUNC_0 () ;
 struct kprobe* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kprobe_ctlblk*) ;
 int FUNC_5 (struct kprobe*,struct pt_regs*,int ) ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;

int FUNC_7(struct pt_regs *VAR_3)
{
 struct kprobe *VAR_4 = FUNC_1();
 struct kprobe_ctlblk *VAR_5 = FUNC_0();

 if (!VAR_4 || FUNC_6(VAR_3))
  return 0;


 if (((unsigned long)VAR_4->ainsn.insn + 4) != VAR_3->nip)
  return 0;

 if ((VAR_5->kprobe_status != VAR_1) && VAR_4->post_handler) {
  VAR_5->kprobe_status = VAR_0;
  VAR_4->post_handler(VAR_4, VAR_3, 0);
 }


 VAR_3->nip = (unsigned long)VAR_4->addr + 4;
 VAR_3->msr |= VAR_5->kprobe_saved_msr;


 if (VAR_5->kprobe_status == VAR_1) {
  FUNC_4(VAR_5);
  goto out;
 }
 FUNC_3();
out:
 FUNC_2();






 if (VAR_3->msr & VAR_2)
  return 0;

 return 1;
}
