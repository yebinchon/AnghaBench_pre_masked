
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_14__ {scalar_t__ nested_run_pending; scalar_t__ need_vmcs12_to_shadow_sync; } ;
struct vcpu_vmx {int ple_window_dirty; scalar_t__ host_pkru; int idt_vectoring_info; int exit_reason; TYPE_7__* loaded_vmcs; scalar_t__ fail; TYPE_6__ nested; scalar_t__ host_debugctlmsr; int spec_ctrl; int ple_window; scalar_t__ emulation_required; } ;
struct TYPE_12__ {int vp_index; } ;
struct TYPE_13__ {unsigned long* regs; scalar_t__ pkru; scalar_t__ cr2; int regs_avail; scalar_t__ regs_dirty; TYPE_4__ hyperv; TYPE_3__* apic; } ;
struct kvm_vcpu {int guest_debug; TYPE_5__ arch; } ;
struct TYPE_16__ {int hv_vp_id; int hv_clean_fields; } ;
struct TYPE_9__ {unsigned long cr3; unsigned long cr4; } ;
struct TYPE_15__ {int launched; TYPE_1__ host_state; int entry_time; scalar_t__ soft_vnmi_blocked; } ;
struct TYPE_10__ {scalar_t__ timer_advance_ns; } ;
struct TYPE_11__ {TYPE_2__ lapic_timer; } ;


 scalar_t__ VAR_0 ;
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
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned long FUNC_0 () ;
 scalar_t__ FUNC_1 (struct vcpu_vmx*,unsigned long*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct vcpu_vmx*) ;
 int FUNC_4 (struct vcpu_vmx*) ;
 unsigned long FUNC_5 () ;
 TYPE_8__* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 () ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*,int ) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int VAR_27 ;
 int FUNC_15 (struct kvm_vcpu*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (struct vcpu_vmx*) ;
 int FUNC_19 (struct vcpu_vmx*) ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (size_t,unsigned long*) ;
 struct vcpu_vmx* FUNC_25 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,unsigned long) ;
 int FUNC_31 (struct vcpu_vmx*) ;
 int FUNC_32 (struct kvm_vcpu*) ;
 int VAR_28 ;
 int FUNC_33 (struct vcpu_vmx*) ;
 int FUNC_34 (struct kvm_vcpu*,int ) ;
 int FUNC_35 (struct kvm_vcpu*) ;
 int FUNC_36 (scalar_t__) ;
 int FUNC_37 (int ,int ) ;
 int FUNC_38 (int ,int ) ;

__attribute__((used)) static void FUNC_39(struct kvm_vcpu *VAR_29)
{
 struct vcpu_vmx *VAR_30 = FUNC_25(VAR_29);
 unsigned long VAR_31, VAR_32;


 if (FUNC_26(!VAR_25 &&
       VAR_30->loaded_vmcs->soft_vnmi_blocked))
  VAR_30->loaded_vmcs->entry_time = FUNC_6();



 if (VAR_30->emulation_required)
  return;

 if (VAR_30->ple_window_dirty) {
  VAR_30->ple_window_dirty = 0;
  FUNC_29(VAR_9, VAR_30->ple_window);
 }

 if (VAR_30->nested.need_vmcs12_to_shadow_sync)
  FUNC_17(VAR_29);

 if (FUNC_24(VAR_15, (unsigned long *)&VAR_29->arch.regs_dirty))
  FUNC_30(VAR_2, VAR_29->arch.regs[VAR_15]);
 if (FUNC_24(VAR_14, (unsigned long *)&VAR_29->arch.regs_dirty))
  FUNC_30(VAR_1, VAR_29->arch.regs[VAR_14]);

 VAR_31 = FUNC_0();
 if (FUNC_26(VAR_31 != VAR_30->loaded_vmcs->host_state.cr3)) {
  FUNC_30(VAR_3, VAR_31);
  VAR_30->loaded_vmcs->host_state.cr3 = VAR_31;
 }

 VAR_32 = FUNC_5();
 if (FUNC_26(VAR_32 != VAR_30->loaded_vmcs->host_state.cr4)) {
  FUNC_30(VAR_4, VAR_32);
  VAR_30->loaded_vmcs->host_state.cr4 = VAR_32;
 }






 if (VAR_29->guest_debug & VAR_7)
  FUNC_34(VAR_29, 0);

 FUNC_7(VAR_29);

 if (FUNC_23(VAR_19) &&
     FUNC_10(VAR_29, VAR_18) &&
     VAR_29->arch.pkru != VAR_30->host_pkru)
  FUNC_2(VAR_29->arch.pkru);

 FUNC_18(VAR_30);

 FUNC_3(VAR_30);
 FUNC_4(VAR_30);

 if (VAR_24)
  FUNC_35(VAR_29);

 if (FUNC_12(VAR_29) &&
  VAR_29->arch.apic->lapic_timer.timer_advance_ns)
  FUNC_11(VAR_29);







 FUNC_38(VAR_30->spec_ctrl, 0);


 if (FUNC_22(&VAR_28))
  FUNC_32(VAR_29);
 else if (FUNC_22(&VAR_27))
  FUNC_14();

 if (VAR_29->arch.cr2 != FUNC_21())
  FUNC_36(VAR_29->arch.cr2);

 VAR_30->fail = FUNC_1(VAR_30, (unsigned long *)&VAR_29->arch.regs,
       VAR_30->loaded_vmcs->launched);

 VAR_29->arch.cr2 = FUNC_21();
 if (FUNC_26(!FUNC_15(VAR_29, VAR_8)))
  VAR_30->spec_ctrl = FUNC_16(VAR_8);

 FUNC_37(VAR_30->spec_ctrl, 0);


 if (FUNC_22(&VAR_23))
  VAR_21->hv_clean_fields |=
   VAR_5;

 if (FUNC_22(&VAR_23))
  VAR_21->hv_vp_id = VAR_29->arch.hyperv.vp_index;


 if (VAR_30->host_debugctlmsr)
  FUNC_27(VAR_30->host_debugctlmsr);
 FUNC_13(VAR_22, VAR_20);
 FUNC_13(VAR_26, VAR_20);


 VAR_29->arch.regs_avail = ~((1 << VAR_14) | (1 << VAR_15)
      | (1 << VAR_12)
      | (1 << VAR_11)
      | (1 << VAR_13)
      | (1 << VAR_10));
 VAR_29->arch.regs_dirty = 0;

 FUNC_19(VAR_30);






 if (FUNC_23(VAR_19) &&
     FUNC_10(VAR_29, VAR_18)) {
  VAR_29->arch.pkru = FUNC_20();
  if (VAR_29->arch.pkru != VAR_30->host_pkru)
   FUNC_2(VAR_30->host_pkru);
 }

 FUNC_9(VAR_29);

 VAR_30->nested.nested_run_pending = 0;
 VAR_30->idt_vectoring_info = 0;

 VAR_30->exit_reason = VAR_30->fail ? 0xdead : FUNC_28(VAR_17);
 if ((u16)VAR_30->exit_reason == VAR_0)
  FUNC_8();

 if (VAR_30->fail || (VAR_30->exit_reason & VAR_16))
  return;

 VAR_30->loaded_vmcs->launched = 1;
 VAR_30->idt_vectoring_info = FUNC_28(VAR_6);

 FUNC_33(VAR_30);
 FUNC_31(VAR_30);
}
