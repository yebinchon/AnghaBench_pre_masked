
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct pt_regs {TYPE_2__ psw; } ;
struct kprobe_ctlblk {int kprobe_status; } ;
struct TYPE_3__ {scalar_t__ insn; } ;
struct kprobe {TYPE_1__ ainsn; scalar_t__ (* pre_handler ) (struct kprobe*,struct pt_regs*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kprobe_ctlblk*,struct pt_regs*,unsigned long) ;
 struct kprobe* FUNC_1 (void*) ;
 struct kprobe_ctlblk* FUNC_2 () ;
 int FUNC_3 (struct kprobe_ctlblk*,struct kprobe*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct kprobe_ctlblk*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct kprobe_ctlblk*,struct kprobe*) ;
 scalar_t__ FUNC_9 (struct kprobe*,struct pt_regs*) ;

__attribute__((used)) static int FUNC_10(struct pt_regs *VAR_3)
{
 struct kprobe_ctlblk *VAR_4;
 struct kprobe *VAR_5;






 FUNC_6();
 VAR_4 = FUNC_2();
 VAR_5 = FUNC_1((void *)(VAR_3->psw.addr - 2));

 if (VAR_5) {
  if (FUNC_4()) {
   FUNC_3(VAR_4, VAR_5);
   FUNC_8(VAR_4, VAR_5);
   VAR_4->kprobe_status = VAR_2;
  } else {







   FUNC_8(VAR_4, VAR_5);
   VAR_4->kprobe_status = VAR_0;
   if (VAR_5->pre_handler && VAR_5->pre_handler(VAR_5, VAR_3)) {
    FUNC_5(VAR_4);
    FUNC_7();
    return 1;
   }
   VAR_4->kprobe_status = VAR_1;
  }
  FUNC_0(VAR_4, VAR_3, (unsigned long) VAR_5->ainsn.insn);
  return 1;
 }





 FUNC_7();
 return 0;
}
