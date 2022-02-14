
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct vcpu_vmx* guest_fpu; struct vcpu_vmx* user_fpu; } ;
struct TYPE_3__ {TYPE_2__ arch; } ;
struct vcpu_vmx {TYPE_1__ vcpu; int guest_msrs; int loaded_vmcs; int vpid; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct vcpu_vmx*) ;
 int VAR_1 ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct vcpu_vmx*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_6(VAR_3);

 if (VAR_0)
  FUNC_7(VAR_4);
 FUNC_1(VAR_4->vpid);
 FUNC_5(VAR_3);
 FUNC_0(VAR_4->loaded_vmcs);
 FUNC_2(VAR_4->guest_msrs);
 FUNC_4(VAR_3);
 FUNC_3(VAR_2, VAR_4->vcpu.arch.user_fpu);
 FUNC_3(VAR_2, VAR_4->vcpu.arch.guest_fpu);
 FUNC_3(VAR_1, VAR_4);
}
