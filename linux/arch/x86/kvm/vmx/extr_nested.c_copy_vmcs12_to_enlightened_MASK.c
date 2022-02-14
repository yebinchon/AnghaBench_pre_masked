
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {int guest_bndcfgs; int guest_rip; int vm_entry_instruction_len; int vm_entry_exception_error_code; int vm_entry_intr_info_field; int vm_entry_controls; int cpu_based_vm_exec_control; int guest_interruptibility_info; int guest_rflags; int guest_rsp; int guest_linear_address; int exit_qualification; int vmx_instruction_info; int vm_exit_instruction_len; int idt_vectoring_error_code; int idt_vectoring_info_field; int vm_exit_intr_error_code; int vm_exit_intr_info; int vm_exit_reason; int vm_instruction_error; int guest_physical_address; int guest_dr7; int guest_cr4; int guest_cr3; int guest_cr0; int guest_sysenter_cs; int guest_activity_state; int guest_sysenter_eip; int guest_sysenter_esp; int guest_pending_dbg_exceptions; int guest_pdptr3; int guest_pdptr2; int guest_pdptr1; int guest_pdptr0; int guest_ia32_efer; int guest_ia32_pat; int guest_idtr_base; int guest_gdtr_base; int guest_tr_base; int guest_ldtr_base; int guest_gs_base; int guest_fs_base; int guest_ds_base; int guest_ss_base; int guest_cs_base; int guest_es_base; int guest_tr_ar_bytes; int guest_ldtr_ar_bytes; int guest_gs_ar_bytes; int guest_fs_ar_bytes; int guest_ds_ar_bytes; int guest_ss_ar_bytes; int guest_cs_ar_bytes; int guest_es_ar_bytes; int guest_idtr_limit; int guest_gdtr_limit; int guest_tr_limit; int guest_ldtr_limit; int guest_gs_limit; int guest_fs_limit; int guest_ds_limit; int guest_ss_limit; int guest_cs_limit; int guest_es_limit; int guest_tr_selector; int guest_ldtr_selector; int guest_gs_selector; int guest_fs_selector; int guest_ds_selector; int guest_ss_selector; int guest_cs_selector; int guest_es_selector; } ;
struct TYPE_2__ {struct hv_enlightened_vmcs* hv_evmcs; struct vmcs12* cached_vmcs12; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct hv_enlightened_vmcs {int guest_bndcfgs; int guest_rip; int vm_entry_instruction_len; int vm_entry_exception_error_code; int vm_entry_intr_info_field; int vm_entry_controls; int cpu_based_vm_exec_control; int guest_interruptibility_info; int guest_rflags; int guest_rsp; int guest_linear_address; int exit_qualification; int vmx_instruction_info; int vm_exit_instruction_len; int idt_vectoring_error_code; int idt_vectoring_info_field; int vm_exit_intr_error_code; int vm_exit_intr_info; int vm_exit_reason; int vm_instruction_error; int guest_physical_address; int guest_dr7; int guest_cr4; int guest_cr3; int guest_cr0; int guest_sysenter_cs; int guest_activity_state; int guest_sysenter_eip; int guest_sysenter_esp; int guest_pending_dbg_exceptions; int guest_pdptr3; int guest_pdptr2; int guest_pdptr1; int guest_pdptr0; int guest_ia32_efer; int guest_ia32_pat; int guest_idtr_base; int guest_gdtr_base; int guest_tr_base; int guest_ldtr_base; int guest_gs_base; int guest_fs_base; int guest_ds_base; int guest_ss_base; int guest_cs_base; int guest_es_base; int guest_tr_ar_bytes; int guest_ldtr_ar_bytes; int guest_gs_ar_bytes; int guest_fs_ar_bytes; int guest_ds_ar_bytes; int guest_ss_ar_bytes; int guest_cs_ar_bytes; int guest_es_ar_bytes; int guest_idtr_limit; int guest_gdtr_limit; int guest_tr_limit; int guest_ldtr_limit; int guest_gs_limit; int guest_fs_limit; int guest_ds_limit; int guest_ss_limit; int guest_cs_limit; int guest_es_limit; int guest_tr_selector; int guest_ldtr_selector; int guest_gs_selector; int guest_fs_selector; int guest_ds_selector; int guest_ss_selector; int guest_cs_selector; int guest_es_selector; } ;



__attribute__((used)) static int FUNC_0(struct vcpu_vmx *VAR_0)
{
 struct vmcs12 *VAR_1 = VAR_0->nested.cached_vmcs12;
 struct hv_enlightened_vmcs *VAR_2 = VAR_0->nested.hv_evmcs;
 VAR_2->guest_es_selector = VAR_1->guest_es_selector;
 VAR_2->guest_cs_selector = VAR_1->guest_cs_selector;
 VAR_2->guest_ss_selector = VAR_1->guest_ss_selector;
 VAR_2->guest_ds_selector = VAR_1->guest_ds_selector;
 VAR_2->guest_fs_selector = VAR_1->guest_fs_selector;
 VAR_2->guest_gs_selector = VAR_1->guest_gs_selector;
 VAR_2->guest_ldtr_selector = VAR_1->guest_ldtr_selector;
 VAR_2->guest_tr_selector = VAR_1->guest_tr_selector;

 VAR_2->guest_es_limit = VAR_1->guest_es_limit;
 VAR_2->guest_cs_limit = VAR_1->guest_cs_limit;
 VAR_2->guest_ss_limit = VAR_1->guest_ss_limit;
 VAR_2->guest_ds_limit = VAR_1->guest_ds_limit;
 VAR_2->guest_fs_limit = VAR_1->guest_fs_limit;
 VAR_2->guest_gs_limit = VAR_1->guest_gs_limit;
 VAR_2->guest_ldtr_limit = VAR_1->guest_ldtr_limit;
 VAR_2->guest_tr_limit = VAR_1->guest_tr_limit;
 VAR_2->guest_gdtr_limit = VAR_1->guest_gdtr_limit;
 VAR_2->guest_idtr_limit = VAR_1->guest_idtr_limit;

 VAR_2->guest_es_ar_bytes = VAR_1->guest_es_ar_bytes;
 VAR_2->guest_cs_ar_bytes = VAR_1->guest_cs_ar_bytes;
 VAR_2->guest_ss_ar_bytes = VAR_1->guest_ss_ar_bytes;
 VAR_2->guest_ds_ar_bytes = VAR_1->guest_ds_ar_bytes;
 VAR_2->guest_fs_ar_bytes = VAR_1->guest_fs_ar_bytes;
 VAR_2->guest_gs_ar_bytes = VAR_1->guest_gs_ar_bytes;
 VAR_2->guest_ldtr_ar_bytes = VAR_1->guest_ldtr_ar_bytes;
 VAR_2->guest_tr_ar_bytes = VAR_1->guest_tr_ar_bytes;

 VAR_2->guest_es_base = VAR_1->guest_es_base;
 VAR_2->guest_cs_base = VAR_1->guest_cs_base;
 VAR_2->guest_ss_base = VAR_1->guest_ss_base;
 VAR_2->guest_ds_base = VAR_1->guest_ds_base;
 VAR_2->guest_fs_base = VAR_1->guest_fs_base;
 VAR_2->guest_gs_base = VAR_1->guest_gs_base;
 VAR_2->guest_ldtr_base = VAR_1->guest_ldtr_base;
 VAR_2->guest_tr_base = VAR_1->guest_tr_base;
 VAR_2->guest_gdtr_base = VAR_1->guest_gdtr_base;
 VAR_2->guest_idtr_base = VAR_1->guest_idtr_base;

 VAR_2->guest_ia32_pat = VAR_1->guest_ia32_pat;
 VAR_2->guest_ia32_efer = VAR_1->guest_ia32_efer;

 VAR_2->guest_pdptr0 = VAR_1->guest_pdptr0;
 VAR_2->guest_pdptr1 = VAR_1->guest_pdptr1;
 VAR_2->guest_pdptr2 = VAR_1->guest_pdptr2;
 VAR_2->guest_pdptr3 = VAR_1->guest_pdptr3;

 VAR_2->guest_pending_dbg_exceptions =
  VAR_1->guest_pending_dbg_exceptions;
 VAR_2->guest_sysenter_esp = VAR_1->guest_sysenter_esp;
 VAR_2->guest_sysenter_eip = VAR_1->guest_sysenter_eip;

 VAR_2->guest_activity_state = VAR_1->guest_activity_state;
 VAR_2->guest_sysenter_cs = VAR_1->guest_sysenter_cs;

 VAR_2->guest_cr0 = VAR_1->guest_cr0;
 VAR_2->guest_cr3 = VAR_1->guest_cr3;
 VAR_2->guest_cr4 = VAR_1->guest_cr4;
 VAR_2->guest_dr7 = VAR_1->guest_dr7;

 VAR_2->guest_physical_address = VAR_1->guest_physical_address;

 VAR_2->vm_instruction_error = VAR_1->vm_instruction_error;
 VAR_2->vm_exit_reason = VAR_1->vm_exit_reason;
 VAR_2->vm_exit_intr_info = VAR_1->vm_exit_intr_info;
 VAR_2->vm_exit_intr_error_code = VAR_1->vm_exit_intr_error_code;
 VAR_2->idt_vectoring_info_field = VAR_1->idt_vectoring_info_field;
 VAR_2->idt_vectoring_error_code = VAR_1->idt_vectoring_error_code;
 VAR_2->vm_exit_instruction_len = VAR_1->vm_exit_instruction_len;
 VAR_2->vmx_instruction_info = VAR_1->vmx_instruction_info;

 VAR_2->exit_qualification = VAR_1->exit_qualification;

 VAR_2->guest_linear_address = VAR_1->guest_linear_address;
 VAR_2->guest_rsp = VAR_1->guest_rsp;
 VAR_2->guest_rflags = VAR_1->guest_rflags;

 VAR_2->guest_interruptibility_info =
  VAR_1->guest_interruptibility_info;
 VAR_2->cpu_based_vm_exec_control = VAR_1->cpu_based_vm_exec_control;
 VAR_2->vm_entry_controls = VAR_1->vm_entry_controls;
 VAR_2->vm_entry_intr_info_field = VAR_1->vm_entry_intr_info_field;
 VAR_2->vm_entry_exception_error_code =
  VAR_1->vm_entry_exception_error_code;
 VAR_2->vm_entry_instruction_len = VAR_1->vm_entry_instruction_len;

 VAR_2->guest_rip = VAR_1->guest_rip;

 VAR_2->guest_bndcfgs = VAR_1->guest_bndcfgs;

 return 0;
}
