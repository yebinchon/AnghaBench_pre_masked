
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs12 {scalar_t__ cr3_target_count; int vm_function_control; int eptp_list_address; int ept_pointer; int virtual_processor_id; int secondary_vm_exec_control; int cpu_based_vm_exec_control; int pin_based_vm_exec_control; } ;
struct TYPE_3__ {int vmfunc_controls; int secondary_ctls_high; int secondary_ctls_low; int procbased_ctls_high; int procbased_ctls_low; int pinbased_ctls_high; int pinbased_ctls_low; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vmcs12*,int ) ;
 scalar_t__ FUNC_2 (struct vmcs12*) ;
 scalar_t__ FUNC_3 (struct vmcs12*) ;
 int FUNC_4 (struct vmcs12*) ;
 scalar_t__ FUNC_5 (struct vmcs12*) ;
 scalar_t__ FUNC_6 (struct vmcs12*) ;
 scalar_t__ FUNC_7 (struct vmcs12*) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_11 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_12 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_13 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_14 (struct vmcs12*) ;
 scalar_t__ FUNC_15 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_16 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_17 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_18 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_19 (struct kvm_vcpu*,int ) ;
 struct vcpu_vmx* FUNC_20 (struct kvm_vcpu*) ;
 int FUNC_21 (struct kvm_vcpu*,int ) ;
 int FUNC_22 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_23(struct kvm_vcpu *VAR_2,
                                              struct vmcs12 *VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_20(VAR_2);

 if (FUNC_0(!FUNC_22(VAR_3->pin_based_vm_exec_control,
       VAR_4->nested.msrs.pinbased_ctls_low,
       VAR_4->nested.msrs.pinbased_ctls_high)) ||
     FUNC_0(!FUNC_22(VAR_3->cpu_based_vm_exec_control,
       VAR_4->nested.msrs.procbased_ctls_low,
       VAR_4->nested.msrs.procbased_ctls_high)))
  return -VAR_1;

 if (FUNC_1(VAR_3, VAR_0) &&
     FUNC_0(!FUNC_22(VAR_3->secondary_vm_exec_control,
       VAR_4->nested.msrs.secondary_ctls_low,
       VAR_4->nested.msrs.secondary_ctls_high)))
  return -VAR_1;

 if (FUNC_0(VAR_3->cr3_target_count > FUNC_8(VAR_2)) ||
     FUNC_11(VAR_2, VAR_3) ||
     FUNC_13(VAR_2, VAR_3) ||
     FUNC_17(VAR_2, VAR_3) ||
     FUNC_9(VAR_2, VAR_3) ||
     FUNC_10(VAR_2, VAR_3) ||
     FUNC_14(VAR_3) ||
     FUNC_15(VAR_2, VAR_3) ||
     FUNC_18(VAR_2, VAR_3) ||
     FUNC_12(VAR_2, VAR_3) ||
     FUNC_16(VAR_2, VAR_3) ||
     FUNC_0(FUNC_7(VAR_3) && !VAR_3->virtual_processor_id))
  return -VAR_1;

 if (!FUNC_4(VAR_3) &&
     FUNC_5(VAR_3))
  return -VAR_1;

 if (FUNC_2(VAR_3) &&
     FUNC_0(!FUNC_21(VAR_2, VAR_3->ept_pointer)))
  return -VAR_1;

 if (FUNC_6(VAR_3)) {
  if (FUNC_0(VAR_3->vm_function_control &
         ~VAR_4->nested.msrs.vmfunc_controls))
   return -VAR_1;

  if (FUNC_3(VAR_3)) {
   if (FUNC_0(!FUNC_2(VAR_3)) ||
       FUNC_0(!FUNC_19(VAR_2, VAR_3->eptp_list_address)))
    return -VAR_1;
  }
 }

 return 0;
}
