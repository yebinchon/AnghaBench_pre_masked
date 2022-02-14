
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
struct pt_regs {TYPE_1__ psw; } ;
struct kprobe_ctlblk {scalar_t__ kprobe_status; } ;
struct kprobe {int (* post_handler ) (struct kprobe*,struct pt_regs*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct kprobe_ctlblk* FUNC_0 () ;
 struct kprobe* FUNC_1 () ;
 int FUNC_2 (struct kprobe_ctlblk*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct kprobe*,struct pt_regs*) ;
 int FUNC_5 (struct kprobe*,struct pt_regs*,int ) ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_3)
{
 struct kprobe_ctlblk *VAR_4 = FUNC_0();
 struct kprobe *VAR_5 = FUNC_1();

 if (!VAR_5)
  return 0;

 if (VAR_4->kprobe_status != VAR_1 && VAR_5->post_handler) {
  VAR_4->kprobe_status = VAR_0;
  VAR_5->post_handler(VAR_5, VAR_3, 0);
 }

 FUNC_4(VAR_5, VAR_3);
 FUNC_2(VAR_4);
 FUNC_3();






 if (VAR_3->psw.mask & VAR_2)
  return 0;

 return 1;
}
