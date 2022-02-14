
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ip; } ;
struct kprobe_ctlblk {int kprobe_status; } ;
struct kprobe {int (* pre_handler ) (struct kprobe*,struct pt_regs*) ;} ;
typedef scalar_t__ kprobe_opcode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct kprobe* FUNC_0 (scalar_t__*) ;
 struct kprobe_ctlblk* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct kprobe*,struct pt_regs*,struct kprobe_ctlblk*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct kprobe*,struct pt_regs*,struct kprobe_ctlblk*) ;
 int FUNC_6 (struct kprobe*,struct pt_regs*,struct kprobe_ctlblk*,int ) ;
 int FUNC_7 (struct kprobe*,struct pt_regs*) ;
 scalar_t__ FUNC_8 (struct pt_regs*) ;

int FUNC_9(struct pt_regs *VAR_2)
{
 kprobe_opcode_t *VAR_3;
 struct kprobe *VAR_4;
 struct kprobe_ctlblk *VAR_5;

 if (FUNC_8(VAR_2))
  return 0;

 VAR_3 = (kprobe_opcode_t *)(VAR_2->ip - sizeof(kprobe_opcode_t));






 VAR_5 = FUNC_1();
 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4) {
  if (FUNC_2()) {
   if (FUNC_3(VAR_4, VAR_2, VAR_5))
    return 1;
  } else {
   FUNC_5(VAR_4, VAR_2, VAR_5);
   VAR_5->kprobe_status = VAR_1;
   if (!VAR_4->pre_handler || !VAR_4->pre_handler(VAR_4, VAR_2))
    FUNC_6(VAR_4, VAR_2, VAR_5, 0);
   else
    FUNC_4();
   return 1;
  }
 } else if (*VAR_3 != VAR_0) {
  VAR_2->ip = (unsigned long)VAR_3;
  return 1;
 }

 return 0;
}
