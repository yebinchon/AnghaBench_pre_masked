
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_enable_cap {int cap; scalar_t__ flags; } ;
struct TYPE_5__ {int fac_list; int fac_mask; } ;
struct TYPE_8__ {int use_irqchip; int user_sigp; int user_stsi; int user_instr0; int use_pfmfi; int use_skf; int use_cmma; TYPE_1__ model; } ;
struct kvm {TYPE_4__ arch; int lock; TYPE_3__* mm; int created_vcpus; } ;
struct TYPE_6__ {int allow_gmap_hpage_1m; } ;
struct TYPE_7__ {int mmap_sem; TYPE_2__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm*,int,char*,char*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct kvm *VAR_4, struct kvm_enable_cap *VAR_5)
{
 int VAR_6;

 if (VAR_5->flags)
  return -VAR_1;

 switch (VAR_5->cap) {
 case 133:
  FUNC_0(VAR_4, 3, "%s", "ENABLE: CAP_S390_IRQCHIP");
  VAR_4->arch.use_irqchip = 1;
  VAR_6 = 0;
  break;
 case 130:
  FUNC_0(VAR_4, 3, "%s", "ENABLE: CAP_S390_USER_SIGP");
  VAR_4->arch.user_sigp = 1;
  VAR_6 = 0;
  break;
 case 128:
  FUNC_4(&VAR_4->lock);
  if (VAR_4->created_vcpus) {
   VAR_6 = -VAR_0;
  } else if (VAR_2) {
   FUNC_6(VAR_4->arch.model.fac_mask, 129);
   FUNC_6(VAR_4->arch.model.fac_list, 129);
   if (FUNC_7(134)) {
    FUNC_6(VAR_4->arch.model.fac_mask, 134);
    FUNC_6(VAR_4->arch.model.fac_list, 134);
   }
   if (FUNC_7(135)) {
    FUNC_6(VAR_4->arch.model.fac_mask, 135);
    FUNC_6(VAR_4->arch.model.fac_list, 135);
   }
   if (FUNC_7(148)) {
    FUNC_6(VAR_4->arch.model.fac_mask, 148);
    FUNC_6(VAR_4->arch.model.fac_list, 148);
   }
   if (FUNC_7(152)) {
    FUNC_6(VAR_4->arch.model.fac_mask, 152);
    FUNC_6(VAR_4->arch.model.fac_list, 152);
   }
   VAR_6 = 0;
  } else
   VAR_6 = -VAR_1;
  FUNC_5(&VAR_4->lock);
  FUNC_0(VAR_4, 3, "ENABLE: CAP_S390_VECTOR_REGISTERS %s",
    VAR_6 ? "(not available)" : "(success)");
  break;
 case 132:
  VAR_6 = -VAR_1;
  FUNC_4(&VAR_4->lock);
  if (VAR_4->created_vcpus) {
   VAR_6 = -VAR_0;
  } else if (FUNC_7(64)) {
   FUNC_6(VAR_4->arch.model.fac_mask, 64);
   FUNC_6(VAR_4->arch.model.fac_list, 64);
   VAR_6 = 0;
  }
  FUNC_5(&VAR_4->lock);
  FUNC_0(VAR_4, 3, "ENABLE: CAP_S390_RI %s",
    VAR_6 ? "(not available)" : "(success)");
  break;
 case 136:
  FUNC_4(&VAR_4->lock);
  if (VAR_4->created_vcpus) {
   VAR_6 = -VAR_0;
  } else {
   FUNC_6(VAR_4->arch.model.fac_mask, 72);
   FUNC_6(VAR_4->arch.model.fac_list, 72);
   VAR_6 = 0;
  }
  FUNC_5(&VAR_4->lock);
  FUNC_0(VAR_4, 3, "ENABLE: AIS %s",
    VAR_6 ? "(not available)" : "(success)");
  break;
 case 135:
  VAR_6 = -VAR_1;
  FUNC_4(&VAR_4->lock);
  if (VAR_4->created_vcpus) {
   VAR_6 = -VAR_0;
  } else if (FUNC_7(133)) {
   FUNC_6(VAR_4->arch.model.fac_mask, 133);
   FUNC_6(VAR_4->arch.model.fac_list, 133);
   VAR_6 = 0;
  }
  FUNC_5(&VAR_4->lock);
  FUNC_0(VAR_4, 3, "ENABLE: CAP_S390_GS %s",
    VAR_6 ? "(not available)" : "(success)");
  break;
 case 134:
  FUNC_4(&VAR_4->lock);
  if (VAR_4->created_vcpus)
   VAR_6 = -VAR_0;
  else if (!VAR_3 || VAR_4->arch.use_cmma || FUNC_3(VAR_4))
   VAR_6 = -VAR_1;
  else {
   VAR_6 = 0;
   FUNC_1(&VAR_4->mm->mmap_sem);
   VAR_4->mm->context.allow_gmap_hpage_1m = 1;
   FUNC_8(&VAR_4->mm->mmap_sem);





   VAR_4->arch.use_skf = 0;
   VAR_4->arch.use_pfmfi = 0;
  }
  FUNC_5(&VAR_4->lock);
  FUNC_0(VAR_4, 3, "ENABLE: CAP_S390_HPAGE %s",
    VAR_6 ? "(not available)" : "(success)");
  break;
 case 129:
  FUNC_0(VAR_4, 3, "%s", "ENABLE: CAP_S390_USER_STSI");
  VAR_4->arch.user_stsi = 1;
  VAR_6 = 0;
  break;
 case 131:
  FUNC_0(VAR_4, 3, "%s", "ENABLE: CAP_S390_USER_INSTR0");
  VAR_4->arch.user_instr0 = 1;
  FUNC_2(VAR_4);
  VAR_6 = 0;
  break;
 default:
  VAR_6 = -VAR_1;
  break;
 }
 return VAR_6;
}
