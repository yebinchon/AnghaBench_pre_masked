
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int flags; } ;
struct kprobe_ctlblk {int kprobe_saved_flags; scalar_t__ kprobe_status; } ;
struct kprobe {int (* post_handler ) (struct kprobe*,struct pt_regs*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct kprobe_ctlblk* FUNC_0 () ;
 struct kprobe* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct kprobe_ctlblk*) ;
 int FUNC_4 (struct kprobe*,struct pt_regs*,struct kprobe_ctlblk*) ;
 int FUNC_5 (struct kprobe*,struct pt_regs*,int ) ;

int FUNC_6(struct pt_regs *VAR_3)
{
 struct kprobe *VAR_4 = FUNC_1();
 struct kprobe_ctlblk *VAR_5 = FUNC_0();

 if (!VAR_4)
  return 0;

 FUNC_4(VAR_4, VAR_3, VAR_5);
 VAR_3->flags |= VAR_5->kprobe_saved_flags;

 if ((VAR_5->kprobe_status != VAR_1) && VAR_4->post_handler) {
  VAR_5->kprobe_status = VAR_0;
  VAR_4->post_handler(VAR_4, VAR_3, 0);
 }


 if (VAR_5->kprobe_status == VAR_1) {
  FUNC_3(VAR_5);
  goto out;
 }
 FUNC_2();
out:





 if (VAR_3->flags & VAR_2)
  return 0;

 return 1;
}
