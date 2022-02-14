
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct vmcs12 {int cpu_based_vm_exec_control; int vm_exit_intr_info; int vm_exit_intr_error_code; int idt_vectoring_info_field; int exit_qualification; int vm_exit_reason; scalar_t__ tsc_offset; } ;
struct TYPE_9__ {int nested_run_pending; int change_vmcs01_virtual_apic_mode; int need_vmcs12_to_shadow_sync; scalar_t__ hv_evmcs; int * pi_desc; int pi_desc_map; int virtual_apic_map; int * apic_access_page; int preemption_timer; } ;
struct TYPE_7__ {int nr; } ;
struct TYPE_6__ {int nr; } ;
struct TYPE_8__ {TYPE_2__ guest; TYPE_1__ host; } ;
struct vcpu_vmx {scalar_t__ fail; TYPE_4__ nested; TYPE_3__ msr_autoload; int vmcs01; } ;
struct TYPE_10__ {int mp_state; int tsc_offset; } ;
struct kvm_vcpu {TYPE_5__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vcpu_vmx*) ;
 scalar_t__ VAR_13 ;
 struct vmcs12* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ VAR_14 ;
 int FUNC_7 (int ,struct kvm_vcpu*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct kvm_vcpu*,int *,int) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_13 (struct vmcs12*,int ) ;
 int FUNC_14 (struct vmcs12*) ;
 scalar_t__ FUNC_15 (struct vmcs12*) ;
 int VAR_15 ;
 scalar_t__ FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_18 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*,struct vmcs12*,int,int,unsigned long) ;
 int FUNC_21 (struct kvm_vcpu*,struct vmcs12*) ;
 struct vcpu_vmx* FUNC_22 (struct kvm_vcpu*) ;
 int FUNC_23 (int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (struct kvm_vcpu*,int) ;
 int FUNC_28 (struct kvm_vcpu*) ;
 int FUNC_29 (struct kvm_vcpu*,int *) ;

void FUNC_30(struct kvm_vcpu *VAR_16, u32 VAR_17,
         u32 VAR_18, unsigned long VAR_19)
{
 struct vcpu_vmx *VAR_20 = FUNC_22(VAR_16);
 struct vmcs12 *VAR_21 = FUNC_3(VAR_16);


 FUNC_1(VAR_20->nested.nested_run_pending);

 FUNC_10(VAR_16);

 if (FUNC_15(VAR_21))
  FUNC_4(&FUNC_22(VAR_16)->nested.preemption_timer);

 if (VAR_21->cpu_based_vm_exec_control & VAR_0)
  VAR_16->arch.tsc_offset -= VAR_21->tsc_offset;

 if (FUNC_11(!VAR_20->fail)) {
  FUNC_21(VAR_16, VAR_21);

  if (VAR_17 != -1)
   FUNC_20(VAR_16, VAR_21, VAR_17, VAR_18,
           VAR_19);
  FUNC_17(VAR_16, VAR_21);
 } else {






  FUNC_1(FUNC_24(VAR_12) !=
        VAR_9);
  FUNC_1(VAR_15);
 }

 FUNC_29(VAR_16, &VAR_20->vmcs01);


 FUNC_25(VAR_11, VAR_20->msr_autoload.host.nr);
 FUNC_25(VAR_10, VAR_20->msr_autoload.guest.nr);
 FUNC_26(VAR_8, VAR_16->arch.tsc_offset);

 if (VAR_14)
  FUNC_2(VAR_20);

 if (VAR_20->nested.change_vmcs01_virtual_apic_mode) {
  VAR_20->nested.change_vmcs01_virtual_apic_mode = 0;
  FUNC_28(VAR_16);
 } else if (!FUNC_14(VAR_21) &&
     FUNC_13(VAR_21,
       VAR_7)) {
  FUNC_27(VAR_16, 1);
 }


 if (VAR_20->nested.apic_access_page) {
  FUNC_8(VAR_20->nested.apic_access_page);
  VAR_20->nested.apic_access_page = ((void*)0);
 }
 FUNC_9(VAR_16, &VAR_20->nested.virtual_apic_map, 1);
 FUNC_9(VAR_16, &VAR_20->nested.pi_desc_map, 1);
 VAR_20->nested.pi_desc = ((void*)0);





 FUNC_7(VAR_6, VAR_16);

 if ((VAR_17 != -1) && (VAR_13 || VAR_20->nested.hv_evmcs))
  VAR_20->nested.need_vmcs12_to_shadow_sync = 1;


 VAR_16->arch.mp_state = VAR_5;

 if (FUNC_11(!VAR_20->fail)) {
  if (FUNC_16(VAR_16) &&
      VAR_17 == VAR_1 &&
      FUNC_6(VAR_16)) {
   int VAR_22 = FUNC_5(VAR_16);
   FUNC_0(VAR_22 < 0);
   VAR_21->vm_exit_intr_info = VAR_22 |
    VAR_2 | VAR_3;
  }

  if (VAR_17 != -1)
   FUNC_23(VAR_21->vm_exit_reason,
             VAR_21->exit_qualification,
             VAR_21->idt_vectoring_info_field,
             VAR_21->vm_exit_intr_info,
             VAR_21->vm_exit_intr_error_code,
             VAR_4);

  FUNC_12(VAR_16, VAR_21);

  return;
 }
 (void)FUNC_18(VAR_16, VAR_9);







 FUNC_19(VAR_16);

 VAR_20->fail = 0;
}
