
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vmcs12 {int pin_based_vm_exec_control; int cpu_based_vm_exec_control; int tpr_threshold; int secondary_vm_exec_control; int guest_cr4; int vm_entry_controls; int vm_entry_intr_info_field; int vm_entry_exception_error_code; int vm_entry_instruction_len; int guest_interruptibility_info; int guest_intr_status; int posted_intr_nv; } ;
struct TYPE_3__ {int pi_pending; scalar_t__ nested_run_pending; int posted_intr_nv; scalar_t__ hv_evmcs; scalar_t__ dirty_vmcs12; } ;
struct vcpu_vmx {int secondary_exec_control; TYPE_2__* loaded_vmcs; TYPE_1__ nested; } ;
struct TYPE_4__ {int nmi_known_unmasked; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct vcpu_vmx*) ;
 int FUNC_4 (struct vcpu_vmx*,int) ;
 int VAR_35 ;
 scalar_t__ FUNC_5 (struct vmcs12*,int ) ;
 scalar_t__ FUNC_6 (struct vmcs12*) ;
 int FUNC_7 (struct vcpu_vmx*,struct vmcs12*) ;
 int FUNC_8 (struct vcpu_vmx*,int) ;
 int FUNC_9 (struct vcpu_vmx*,struct vmcs12*) ;
 int FUNC_10 (struct vcpu_vmx*,int) ;
 int FUNC_11 (struct vcpu_vmx*,int) ;
 int FUNC_12 (struct vcpu_vmx*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct vcpu_vmx*) ;
 int FUNC_16 (struct vcpu_vmx*) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;

__attribute__((used)) static void FUNC_20(struct vcpu_vmx *VAR_36, struct vmcs12 *VAR_37)
{
 u32 VAR_38, VAR_39;
 u64 VAR_40 = FUNC_7(VAR_36, VAR_37);

 if (VAR_36->nested.dirty_vmcs12 || VAR_36->nested.hv_evmcs)
  FUNC_9(VAR_36, VAR_37);




 VAR_38 = FUNC_16(VAR_36);
 VAR_38 |= (VAR_37->pin_based_vm_exec_control &
    ~VAR_14);


 if (FUNC_6(VAR_37)) {
  VAR_36->nested.posted_intr_nv = VAR_37->posted_intr_nv;
  VAR_36->nested.pi_pending = 0;
 } else {
  VAR_38 &= ~VAR_13;
 }
 FUNC_8(VAR_36, VAR_38);




 VAR_38 = FUNC_15(VAR_36);
 VAR_38 &= ~VAR_7;
 VAR_38 &= ~VAR_8;
 VAR_38 &= ~VAR_3;
 VAR_38 |= VAR_37->cpu_based_vm_exec_control;

 if (VAR_38 & VAR_3)
  FUNC_14(VAR_26, VAR_37->tpr_threshold);
 VAR_38 |= VAR_4;
 VAR_38 &= ~VAR_5;







 VAR_38 &= ~VAR_6;
 VAR_38 |= FUNC_3(VAR_36) & VAR_6;

 FUNC_4(VAR_36, VAR_38);




 if (FUNC_2()) {
  VAR_38 = VAR_36->secondary_exec_control;


  VAR_38 &= ~(VAR_23 |
      VAR_17 |
      VAR_21 |
      VAR_25 |
      VAR_19 |
      VAR_24 |
      VAR_15 |
      VAR_20);
  if (FUNC_5(VAR_37,
       VAR_0)) {
   VAR_39 = VAR_37->secondary_vm_exec_control &
    ~VAR_18;
   VAR_38 |= VAR_39;
  }


  VAR_38 &= ~VAR_22;





  if (!FUNC_0(VAR_34) && FUNC_17() &&
      (VAR_37->guest_cr4 & VAR_33))
   VAR_38 |= VAR_16;

  if (VAR_38 & VAR_24)
   FUNC_13(VAR_12,
    VAR_37->guest_intr_status);

  FUNC_10(VAR_36, VAR_38);
 }
 VAR_38 = (VAR_37->vm_entry_controls | FUNC_18()) &
   ~VAR_28 & ~VAR_31;
 if (FUNC_1()) {
  if (VAR_40 & VAR_9)
   VAR_38 |= VAR_28;
  if (VAR_40 != VAR_35)
   VAR_38 |= VAR_31;
 }
 FUNC_11(VAR_36, VAR_38);
 VAR_38 = FUNC_19();
 if (FUNC_1() && VAR_40 != VAR_35)
  VAR_38 |= VAR_32;
 FUNC_12(VAR_36, VAR_38);




 if (VAR_36->nested.nested_run_pending) {
  FUNC_14(VAR_30,
        VAR_37->vm_entry_intr_info_field);
  FUNC_14(VAR_27,
        VAR_37->vm_entry_exception_error_code);
  FUNC_14(VAR_29,
        VAR_37->vm_entry_instruction_len);
  FUNC_14(VAR_10,
        VAR_37->guest_interruptibility_info);
  VAR_36->loaded_vmcs->nmi_known_unmasked =
   !(VAR_37->guest_interruptibility_info & VAR_11);
 } else {
  FUNC_14(VAR_30, 0);
 }
}
