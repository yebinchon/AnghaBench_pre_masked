
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int msr; scalar_t__ nip; } ;
struct kprobe_ctlblk {scalar_t__ kprobe_status; int kprobe_saved_msr; } ;
struct TYPE_2__ {unsigned int* insn; scalar_t__ boostable; } ;
struct kprobe {int (* post_handler ) (struct kprobe*,struct pt_regs*,int ) ;TYPE_1__ ainsn; scalar_t__ (* pre_handler ) (struct kprobe*,struct pt_regs*) ;} ;
typedef unsigned int kprobe_opcode_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct kprobe* FUNC_0 (unsigned int*) ;
 struct kprobe_ctlblk* FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct kprobe*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct kprobe*,struct pt_regs*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct kprobe_ctlblk*) ;
 int FUNC_10 (struct kprobe_ctlblk*) ;
 int FUNC_11 (struct kprobe*,struct pt_regs*,struct kprobe_ctlblk*) ;
 scalar_t__ FUNC_12 (struct kprobe*,struct pt_regs*) ;
 int FUNC_13 (struct kprobe*,struct pt_regs*,int ) ;
 int FUNC_14 (struct kprobe*,struct pt_regs*) ;
 scalar_t__ FUNC_15 (struct pt_regs*) ;

int FUNC_16(struct pt_regs *VAR_6)
{
 struct kprobe *VAR_7;
 int VAR_8 = 0;
 unsigned int *VAR_9 = (unsigned int *)VAR_6->nip;
 struct kprobe_ctlblk *VAR_10;

 if (FUNC_15(VAR_6))
  return 0;





 FUNC_5();
 VAR_10 = FUNC_1();


 if (FUNC_3()) {
  VAR_7 = FUNC_0(VAR_9);
  if (VAR_7) {
   kprobe_opcode_t VAR_11 = *VAR_7->ainsn.insn;
   if (VAR_10->kprobe_status == VAR_2 &&
     FUNC_2(VAR_11)) {

    VAR_6->msr &= ~VAR_5;
    VAR_6->msr |= VAR_10->kprobe_saved_msr;
    goto no_kprobe;
   }






   FUNC_10(VAR_10);
   FUNC_11(VAR_7, VAR_6, VAR_10);
   FUNC_4(VAR_7);
   VAR_10->kprobe_status = VAR_4;
   if (VAR_7->ainsn.boostable >= 0) {
    VAR_8 = FUNC_14(VAR_7, VAR_6);

    if (VAR_8 > 0) {
     FUNC_9(VAR_10);
     FUNC_6();
     return 1;
    }
   }
   FUNC_7(VAR_7, VAR_6);
   return 1;
  } else if (*VAR_9 != VAR_0) {

   kprobe_opcode_t VAR_12 = *VAR_9;

   if (FUNC_2(VAR_12))
    goto no_kprobe;




   VAR_8 = 1;
  }
  goto no_kprobe;
 }

 VAR_7 = FUNC_0(VAR_9);
 if (!VAR_7) {
  if (*VAR_9 != VAR_0) {





   kprobe_opcode_t VAR_13 = *VAR_9;
   if (FUNC_2(VAR_13))
    goto no_kprobe;







   VAR_8 = 1;
  }

  goto no_kprobe;
 }

 VAR_10->kprobe_status = VAR_1;
 FUNC_11(VAR_7, VAR_6, VAR_10);
 if (VAR_7->pre_handler && VAR_7->pre_handler(VAR_7, VAR_6)) {

  FUNC_8();
  FUNC_6();
  return 1;
 }

 if (VAR_7->ainsn.boostable >= 0) {
  VAR_8 = FUNC_14(VAR_7, VAR_6);

  if (VAR_8 > 0) {
   if (VAR_7->post_handler)
    VAR_7->post_handler(VAR_7, VAR_6, 0);

   VAR_10->kprobe_status = VAR_3;
   FUNC_8();
   FUNC_6();
   return 1;
  }
 }
 FUNC_7(VAR_7, VAR_6);
 VAR_10->kprobe_status = VAR_2;
 return 1;

no_kprobe:
 FUNC_6();
 return VAR_8;
}
