
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pfault_token; } ;
struct kvm_vcpu {int kvm; TYPE_2__* run; TYPE_1__ arch; } ;
struct TYPE_4__ {int kvm_valid_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;

int FUNC_5(struct kvm_vcpu *VAR_14)
{
 VAR_14->arch.pfault_token = VAR_0;
 FUNC_1(VAR_14);
 VAR_14->run->kvm_valid_regs = VAR_10 |
        VAR_7 |
        VAR_1 |
        VAR_4 |
        VAR_2 |
        VAR_9;
 FUNC_3(VAR_14, 0);
 if (FUNC_4(VAR_14->kvm, 64))
  VAR_14->run->kvm_valid_regs |= VAR_11;
 if (FUNC_4(VAR_14->kvm, 82))
  VAR_14->run->kvm_valid_regs |= VAR_3;
 if (FUNC_4(VAR_14->kvm, 133))
  VAR_14->run->kvm_valid_regs |= VAR_8;
 if (FUNC_4(VAR_14->kvm, 156))
  VAR_14->run->kvm_valid_regs |= VAR_5;



 if (VAR_13)
  VAR_14->run->kvm_valid_regs |= VAR_12;
 else
  VAR_14->run->kvm_valid_regs |= VAR_6;

 if (FUNC_2(VAR_14->kvm))
  return FUNC_0(VAR_14);

 return 0;
}
