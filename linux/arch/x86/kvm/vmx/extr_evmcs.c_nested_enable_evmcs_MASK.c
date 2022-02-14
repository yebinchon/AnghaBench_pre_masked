
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int vmfunc_controls; int secondary_ctls_high; int exit_ctls_high; int entry_ctls_high; int pinbased_ctls_high; } ;
struct TYPE_4__ {int enlightened_vmcs_enabled; TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_5,
   uint16_t *VAR_6)
{
 struct vcpu_vmx *VAR_7 = FUNC_1(VAR_5);
 bool VAR_8 = VAR_7->nested.enlightened_vmcs_enabled;

 VAR_7->nested.enlightened_vmcs_enabled = 1;

 if (VAR_6)
  *VAR_6 = FUNC_0(VAR_5);


 if (VAR_8)
  return 0;

 VAR_7->nested.msrs.pinbased_ctls_high &= ~VAR_1;
 VAR_7->nested.msrs.entry_ctls_high &= ~VAR_2;
 VAR_7->nested.msrs.exit_ctls_high &= ~VAR_3;
 VAR_7->nested.msrs.secondary_ctls_high &= ~VAR_0;
 VAR_7->nested.msrs.vmfunc_controls &= ~VAR_4;

 return 0;
}
