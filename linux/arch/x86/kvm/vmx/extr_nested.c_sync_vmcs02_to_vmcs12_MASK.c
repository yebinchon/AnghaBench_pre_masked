
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs12 {int vm_exit_controls; int vm_entry_controls; int guest_ia32_efer; int guest_dr7; int guest_intr_status; void* guest_linear_address; void* guest_pdptr3; void* guest_pdptr2; void* guest_pdptr1; void* guest_pdptr0; void* guest_cr3; int vmx_preemption_timer_value; int guest_activity_state; void* guest_interruptibility_info; void* guest_sysenter_eip; void* guest_sysenter_esp; void* guest_sysenter_cs; void* guest_ss_ar_bytes; void* guest_cs_ar_bytes; void* guest_rflags; int guest_rip; int guest_rsp; int guest_cr4; int guest_cr0; } ;
struct TYPE_3__ {int need_sync_vmcs02_to_vmcs12_rare; scalar_t__ hv_evmcs; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct TYPE_4__ {scalar_t__ mp_state; int efer; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int,unsigned long*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct vmcs12*) ;
 scalar_t__ FUNC_5 (struct vmcs12*) ;
 scalar_t__ FUNC_6 (struct vmcs12*) ;
 int FUNC_7 (struct kvm_vcpu*,struct vmcs12*) ;
 struct vcpu_vmx* FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct vcpu_vmx*) ;
 int FUNC_10 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_11 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 void* FUNC_14 (int ) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_17(struct kvm_vcpu *VAR_22, struct vmcs12 *VAR_23)
{
 struct vcpu_vmx *VAR_24 = FUNC_8(VAR_22);

 if (VAR_24->nested.hv_evmcs)
  FUNC_7(VAR_22, VAR_23);

 VAR_24->nested.need_sync_vmcs02_to_vmcs12_rare = !VAR_24->nested.hv_evmcs;

 VAR_23->guest_cr0 = FUNC_10(VAR_22, VAR_23);
 VAR_23->guest_cr4 = FUNC_11(VAR_22, VAR_23);

 VAR_23->guest_rsp = FUNC_3(VAR_22);
 VAR_23->guest_rip = FUNC_2(VAR_22);
 VAR_23->guest_rflags = FUNC_15(VAR_11);

 VAR_23->guest_cs_ar_bytes = FUNC_13(VAR_3);
 VAR_23->guest_ss_ar_bytes = FUNC_13(VAR_12);

 VAR_23->guest_sysenter_cs = FUNC_13(VAR_13);
 VAR_23->guest_sysenter_esp = FUNC_15(VAR_15);
 VAR_23->guest_sysenter_eip = FUNC_15(VAR_14);

 VAR_23->guest_interruptibility_info =
  FUNC_13(VAR_4);

 if (VAR_22->arch.mp_state == VAR_16)
  VAR_23->guest_activity_state = VAR_1;
 else
  VAR_23->guest_activity_state = VAR_0;

 if (FUNC_5(VAR_23) &&
     VAR_23->vm_exit_controls & VAR_20)
   VAR_23->vmx_preemption_timer_value =
    FUNC_16(VAR_22);
 if (VAR_21) {
  VAR_23->guest_cr3 = FUNC_15(VAR_2);
  if (FUNC_4(VAR_23) && FUNC_0(VAR_22)) {
   VAR_23->guest_pdptr0 = FUNC_14(VAR_7);
   VAR_23->guest_pdptr1 = FUNC_14(VAR_8);
   VAR_23->guest_pdptr2 = FUNC_14(VAR_9);
   VAR_23->guest_pdptr3 = FUNC_14(VAR_10);
  }
 }

 VAR_23->guest_linear_address = FUNC_15(VAR_6);

 if (FUNC_6(VAR_23))
  VAR_23->guest_intr_status = FUNC_12(VAR_5);

 VAR_23->vm_entry_controls =
  (VAR_23->vm_entry_controls & ~VAR_17) |
  (FUNC_9(FUNC_8(VAR_22)) & VAR_17);

 if (VAR_23->vm_exit_controls & VAR_18)
  FUNC_1(VAR_22, 7, (unsigned long *)&VAR_23->guest_dr7);

 if (VAR_23->vm_exit_controls & VAR_19)
  VAR_23->guest_ia32_efer = VAR_22->arch.efer;
}
