
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int halt_wakeup; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_1__ stat; } ;
struct TYPE_5__ {int rtas_tokens; int enabled_hcalls; } ;
struct TYPE_6__ {int srcu; TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*,int,int ) ;
 int FUNC_15 (struct kvm_vcpu*,int) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (unsigned long,int ) ;

int FUNC_21(struct kvm_vcpu *VAR_5, unsigned long VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 <= VAR_3 &&
     !FUNC_20(VAR_6/4, VAR_5->kvm->arch.enabled_hcalls))
  return VAR_1;

 switch (VAR_6) {
 case 141:
  return FUNC_4(VAR_5);
 case 132:
  return FUNC_10(VAR_5);
 case 135:
  return FUNC_7(VAR_5);
 case 144:
  return FUNC_3(VAR_5);
 case 134:
  return FUNC_8(VAR_5);
 case 133:
  return FUNC_9(VAR_5);
 case 130:
  return FUNC_11(VAR_5);
 case 143:
  FUNC_15(VAR_5, FUNC_2(VAR_5) | VAR_4);
  FUNC_1(VAR_5);
  FUNC_0(VAR_2, VAR_5);
  VAR_5->stat.halt_wakeup++;
  return VAR_0;
 case 137:
  return FUNC_5(VAR_5);
 case 136:
  return FUNC_6(VAR_5);
 case 129:
 case 142:
 case 140:
 case 139:
 case 138:
 case 128:
  if (FUNC_16(VAR_5))
   return FUNC_12(VAR_5, VAR_6);
  break;
 case 131:
  if (FUNC_17(&VAR_5->kvm->arch.rtas_tokens))
   break;
  VAR_8 = FUNC_18(&VAR_5->kvm->srcu);
  VAR_7 = FUNC_13(VAR_5);
  FUNC_19(&VAR_5->kvm->srcu, VAR_8);
  if (VAR_7)
   break;
  FUNC_14(VAR_5, 3, 0);
  return VAR_0;
 }

 return VAR_1;
}
