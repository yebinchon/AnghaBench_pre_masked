
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct vmcs12 {int vm_entry_controls; scalar_t__ virtual_processor_id; int guest_rip; int guest_rsp; int guest_pdptr3; int guest_pdptr2; int guest_pdptr1; int guest_pdptr0; int guest_cr3; int guest_cr4; int guest_cr0; int guest_ia32_pat; int cr0_guest_host_mask; int guest_rflags; int guest_ia32_debugctl; int guest_dr7; } ;
struct TYPE_9__ {int dirty_vmcs12; scalar_t__ last_vpid; scalar_t__ nested_run_pending; int vmcs01_guest_bndcfgs; int vmcs01_debugctl; struct hv_enlightened_vmcs* hv_evmcs; } ;
struct TYPE_7__ {int pat; } ;
struct TYPE_8__ {TYPE_1__ arch; } ;
struct vcpu_vmx {scalar_t__ emulation_required; TYPE_3__ nested; TYPE_2__ vcpu; } ;
struct TYPE_11__ {TYPE_4__* walk_mmu; int efer; int tsc_offset; int pat; int cr0_guest_owned_bits; int dr7; } ;
struct kvm_vcpu {TYPE_5__ arch; } ;
struct hv_enlightened_vmcs {int hv_clean_fields; } ;
struct TYPE_12__ {int vmentry_ctrl; } ;
struct TYPE_10__ {int inject_page_fault; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int) ;
 int FUNC_1 (struct vcpu_vmx*) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int,int ) ;
 scalar_t__ FUNC_8 (struct vmcs12*,int ) ;
 scalar_t__ FUNC_9 (struct vmcs12*) ;
 scalar_t__ FUNC_10 (struct vmcs12*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct vmcs12*) ;
 int FUNC_15 (struct vmcs12*) ;
 int FUNC_16 (struct vcpu_vmx*,struct vmcs12*) ;
 scalar_t__ FUNC_17 (struct kvm_vcpu*,int ,scalar_t__,int *) ;
 int FUNC_18 (struct vcpu_vmx*,struct vmcs12*) ;
 struct vcpu_vmx* FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*) ;
 TYPE_6__ VAR_22 ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct kvm_vcpu*,int) ;
 int VAR_23 ;
 int FUNC_24 (struct kvm_vcpu*,int ) ;
 int FUNC_25 (struct kvm_vcpu*,int ) ;
 int FUNC_26 (struct kvm_vcpu*,int ) ;
 int FUNC_27 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_28(struct kvm_vcpu *VAR_24, struct vmcs12 *VAR_25,
     u32 *VAR_26)
{
 struct vcpu_vmx *VAR_27 = FUNC_19(VAR_24);
 struct hv_enlightened_vmcs *VAR_28 = VAR_27->nested.hv_evmcs;
 bool VAR_29 = 0;

 if (VAR_27->nested.dirty_vmcs12 || VAR_28) {
  FUNC_18(VAR_27, VAR_25);
  VAR_27->nested.dirty_vmcs12 = 0;

  VAR_29 = !VAR_28 ||
   !(VAR_28->hv_clean_fields &
     VAR_12);
 }

 if (VAR_27->nested.nested_run_pending &&
     (VAR_25->vm_entry_controls & VAR_17)) {
  FUNC_7(VAR_24, 7, VAR_25->guest_dr7);
  FUNC_21(VAR_6, VAR_25->guest_ia32_debugctl);
 } else {
  FUNC_7(VAR_24, 7, VAR_24->arch.dr7);
  FUNC_21(VAR_6, VAR_27->nested.vmcs01_debugctl);
 }
 if (FUNC_4() && (!VAR_27->nested.nested_run_pending ||
     !(VAR_25->vm_entry_controls & VAR_16)))
  FUNC_21(VAR_5, VAR_27->nested.vmcs01_guest_bndcfgs);
 FUNC_27(VAR_24, VAR_25->guest_rflags);





 FUNC_20(VAR_24);
 VAR_24->arch.cr0_guest_owned_bits &= ~VAR_25->cr0_guest_host_mask;
 FUNC_22(VAR_0, ~VAR_24->arch.cr0_guest_owned_bits);

 if (VAR_27->nested.nested_run_pending &&
     (VAR_25->vm_entry_controls & VAR_18)) {
  FUNC_21(VAR_7, VAR_25->guest_ia32_pat);
  VAR_24->arch.pat = VAR_25->guest_ia32_pat;
 } else if (VAR_22.vmentry_ctrl & VAR_18) {
  FUNC_21(VAR_7, VAR_27->vcpu.arch.pat);
 }

 FUNC_21(VAR_15, VAR_24->arch.tsc_offset);

 if (VAR_21)
  FUNC_1(VAR_27);

 if (VAR_20) {
  if (FUNC_10(VAR_25) && FUNC_13(VAR_24)) {
   if (VAR_25->virtual_processor_id != VAR_27->nested.last_vpid) {
    VAR_27->nested.last_vpid = VAR_25->virtual_processor_id;
    FUNC_0(VAR_24, FUNC_12(VAR_24), 0);
   }
  } else {
   FUNC_3(VAR_13, VAR_24);
  }
 }

 if (FUNC_9(VAR_25))
  FUNC_11(VAR_24);
 else if (FUNC_8(VAR_25,
     VAR_14))
  FUNC_23(VAR_24, 1);
 FUNC_24(VAR_24, VAR_25->guest_cr0);
 FUNC_22(VAR_1, FUNC_14(VAR_25));

 FUNC_25(VAR_24, VAR_25->guest_cr4);
 FUNC_22(VAR_2, FUNC_15(VAR_25));

 VAR_24->arch.efer = FUNC_16(VAR_27, VAR_25);

 FUNC_26(VAR_24, VAR_24->arch.efer);






 if (VAR_27->emulation_required) {
  *VAR_26 = VAR_4;
  return -VAR_3;
 }


 if (FUNC_17(VAR_24, VAR_25->guest_cr3, FUNC_9(VAR_25),
    VAR_26))
  return -VAR_3;


 if (VAR_29 && FUNC_9(VAR_25) &&
     FUNC_2(VAR_24)) {
  FUNC_21(VAR_8, VAR_25->guest_pdptr0);
  FUNC_21(VAR_9, VAR_25->guest_pdptr1);
  FUNC_21(VAR_10, VAR_25->guest_pdptr2);
  FUNC_21(VAR_11, VAR_25->guest_pdptr3);
 }

 if (!VAR_19)
  VAR_24->arch.walk_mmu->inject_page_fault = VAR_23;

 FUNC_6(VAR_24, VAR_25->guest_rsp);
 FUNC_5(VAR_24, VAR_25->guest_rip);
 return 0;
}
