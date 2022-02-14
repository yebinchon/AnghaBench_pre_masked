
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {int guest_sysenter_cs; int guest_activity_state; int guest_bndcfgs; int guest_sysenter_eip; int guest_sysenter_esp; int guest_pending_dbg_exceptions; int guest_pdptr3; int guest_pdptr2; int guest_pdptr1; int guest_pdptr0; int guest_ia32_efer; int guest_ia32_pat; int guest_ia32_debugctl; int vmcs_link_pointer; int virtual_processor_id; int ept_pointer; int host_rsp; int host_idtr_base; int host_gdtr_base; int host_tr_base; int host_gs_base; int host_fs_base; int guest_dr7; int guest_cr4; int guest_cr3; int guest_cr0; int cr4_read_shadow; int cr0_read_shadow; int cr4_guest_host_mask; int cr0_guest_host_mask; int xss_exit_bitmap; int virtual_apic_page_addr; int tsc_offset; int guest_tr_selector; int guest_ldtr_selector; int guest_gs_selector; int guest_fs_selector; int guest_ds_selector; int guest_ss_selector; int guest_cs_selector; int guest_es_selector; int guest_tr_ar_bytes; int guest_ldtr_ar_bytes; int guest_gs_ar_bytes; int guest_fs_ar_bytes; int guest_ds_ar_bytes; int guest_ss_ar_bytes; int guest_cs_ar_bytes; int guest_es_ar_bytes; int guest_idtr_limit; int guest_gdtr_limit; int guest_tr_limit; int guest_ldtr_limit; int guest_gs_limit; int guest_fs_limit; int guest_ds_limit; int guest_ss_limit; int guest_cs_limit; int guest_es_limit; int guest_idtr_base; int guest_gdtr_base; int guest_tr_base; int guest_ldtr_base; int guest_gs_base; int guest_fs_base; int guest_ds_base; int guest_ss_base; int guest_cs_base; int guest_es_base; int msr_bitmap; int io_bitmap_b; int io_bitmap_a; int secondary_vm_exec_control; int vm_exit_controls; int pin_based_vm_exec_control; int host_tr_selector; int host_gs_selector; int host_fs_selector; int host_ds_selector; int host_ss_selector; int host_cs_selector; int host_es_selector; int host_ia32_sysenter_cs; int host_rip; int host_ia32_sysenter_eip; int host_ia32_sysenter_esp; int host_cr4; int host_cr3; int host_cr0; int host_ia32_efer; int host_ia32_pat; int vm_entry_instruction_len; int vm_entry_exception_error_code; int vm_entry_intr_info_field; int vm_entry_controls; int exception_bitmap; int cpu_based_vm_exec_control; int guest_interruptibility_info; int guest_rflags; int guest_rsp; int guest_rip; int tpr_threshold; } ;
struct TYPE_2__ {struct hv_enlightened_vmcs* hv_evmcs; struct vmcs12* cached_vmcs12; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct hv_enlightened_vmcs {int hv_clean_fields; int guest_sysenter_cs; int guest_activity_state; int guest_bndcfgs; int guest_sysenter_eip; int guest_sysenter_esp; int guest_pending_dbg_exceptions; int guest_pdptr3; int guest_pdptr2; int guest_pdptr1; int guest_pdptr0; int guest_ia32_efer; int guest_ia32_pat; int guest_ia32_debugctl; int vmcs_link_pointer; int virtual_processor_id; int ept_pointer; int host_rsp; int host_idtr_base; int host_gdtr_base; int host_tr_base; int host_gs_base; int host_fs_base; int guest_dr7; int guest_cr4; int guest_cr3; int guest_cr0; int cr4_read_shadow; int cr0_read_shadow; int cr4_guest_host_mask; int cr0_guest_host_mask; int xss_exit_bitmap; int virtual_apic_page_addr; int tsc_offset; int guest_tr_selector; int guest_ldtr_selector; int guest_gs_selector; int guest_fs_selector; int guest_ds_selector; int guest_ss_selector; int guest_cs_selector; int guest_es_selector; int guest_tr_ar_bytes; int guest_ldtr_ar_bytes; int guest_gs_ar_bytes; int guest_fs_ar_bytes; int guest_ds_ar_bytes; int guest_ss_ar_bytes; int guest_cs_ar_bytes; int guest_es_ar_bytes; int guest_idtr_limit; int guest_gdtr_limit; int guest_tr_limit; int guest_ldtr_limit; int guest_gs_limit; int guest_fs_limit; int guest_ds_limit; int guest_ss_limit; int guest_cs_limit; int guest_es_limit; int guest_idtr_base; int guest_gdtr_base; int guest_tr_base; int guest_ldtr_base; int guest_gs_base; int guest_fs_base; int guest_ds_base; int guest_ss_base; int guest_cs_base; int guest_es_base; int msr_bitmap; int io_bitmap_b; int io_bitmap_a; int secondary_vm_exec_control; int vm_exit_controls; int pin_based_vm_exec_control; int host_tr_selector; int host_gs_selector; int host_fs_selector; int host_ds_selector; int host_ss_selector; int host_cs_selector; int host_es_selector; int host_ia32_sysenter_cs; int host_rip; int host_ia32_sysenter_eip; int host_ia32_sysenter_esp; int host_cr4; int host_cr3; int host_cr0; int host_ia32_efer; int host_ia32_pat; int vm_entry_instruction_len; int vm_entry_exception_error_code; int vm_entry_intr_info_field; int vm_entry_controls; int exception_bitmap; int cpu_based_vm_exec_control; int guest_interruptibility_info; int guest_rflags; int guest_rsp; int guest_rip; int tpr_threshold; } ;


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
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct vcpu_vmx *VAR_15)
{
 struct vmcs12 *VAR_16 = VAR_15->nested.cached_vmcs12;
 struct hv_enlightened_vmcs *VAR_17 = VAR_15->nested.hv_evmcs;


 VAR_16->tpr_threshold = VAR_17->tpr_threshold;
 VAR_16->guest_rip = VAR_17->guest_rip;

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_8))) {
  VAR_16->guest_rsp = VAR_17->guest_rsp;
  VAR_16->guest_rflags = VAR_17->guest_rflags;
  VAR_16->guest_interruptibility_info =
   VAR_17->guest_interruptibility_info;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_5))) {
  VAR_16->cpu_based_vm_exec_control =
   VAR_17->cpu_based_vm_exec_control;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_2))) {
  VAR_16->exception_bitmap = VAR_17->exception_bitmap;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_0))) {
  VAR_16->vm_entry_controls = VAR_17->vm_entry_controls;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_1))) {
  VAR_16->vm_entry_intr_info_field =
   VAR_17->vm_entry_intr_info_field;
  VAR_16->vm_entry_exception_error_code =
   VAR_17->vm_entry_exception_error_code;
  VAR_16->vm_entry_instruction_len =
   VAR_17->vm_entry_instruction_len;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_11))) {
  VAR_16->host_ia32_pat = VAR_17->host_ia32_pat;
  VAR_16->host_ia32_efer = VAR_17->host_ia32_efer;
  VAR_16->host_cr0 = VAR_17->host_cr0;
  VAR_16->host_cr3 = VAR_17->host_cr3;
  VAR_16->host_cr4 = VAR_17->host_cr4;
  VAR_16->host_ia32_sysenter_esp = VAR_17->host_ia32_sysenter_esp;
  VAR_16->host_ia32_sysenter_eip = VAR_17->host_ia32_sysenter_eip;
  VAR_16->host_rip = VAR_17->host_rip;
  VAR_16->host_ia32_sysenter_cs = VAR_17->host_ia32_sysenter_cs;
  VAR_16->host_es_selector = VAR_17->host_es_selector;
  VAR_16->host_cs_selector = VAR_17->host_cs_selector;
  VAR_16->host_ss_selector = VAR_17->host_ss_selector;
  VAR_16->host_ds_selector = VAR_17->host_ds_selector;
  VAR_16->host_fs_selector = VAR_17->host_fs_selector;
  VAR_16->host_gs_selector = VAR_17->host_gs_selector;
  VAR_16->host_tr_selector = VAR_17->host_tr_selector;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_3))) {
  VAR_16->pin_based_vm_exec_control =
   VAR_17->pin_based_vm_exec_control;
  VAR_16->vm_exit_controls = VAR_17->vm_exit_controls;
  VAR_16->secondary_vm_exec_control =
   VAR_17->secondary_vm_exec_control;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_13))) {
  VAR_16->io_bitmap_a = VAR_17->io_bitmap_a;
  VAR_16->io_bitmap_b = VAR_17->io_bitmap_b;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_14))) {
  VAR_16->msr_bitmap = VAR_17->msr_bitmap;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_10))) {
  VAR_16->guest_es_base = VAR_17->guest_es_base;
  VAR_16->guest_cs_base = VAR_17->guest_cs_base;
  VAR_16->guest_ss_base = VAR_17->guest_ss_base;
  VAR_16->guest_ds_base = VAR_17->guest_ds_base;
  VAR_16->guest_fs_base = VAR_17->guest_fs_base;
  VAR_16->guest_gs_base = VAR_17->guest_gs_base;
  VAR_16->guest_ldtr_base = VAR_17->guest_ldtr_base;
  VAR_16->guest_tr_base = VAR_17->guest_tr_base;
  VAR_16->guest_gdtr_base = VAR_17->guest_gdtr_base;
  VAR_16->guest_idtr_base = VAR_17->guest_idtr_base;
  VAR_16->guest_es_limit = VAR_17->guest_es_limit;
  VAR_16->guest_cs_limit = VAR_17->guest_cs_limit;
  VAR_16->guest_ss_limit = VAR_17->guest_ss_limit;
  VAR_16->guest_ds_limit = VAR_17->guest_ds_limit;
  VAR_16->guest_fs_limit = VAR_17->guest_fs_limit;
  VAR_16->guest_gs_limit = VAR_17->guest_gs_limit;
  VAR_16->guest_ldtr_limit = VAR_17->guest_ldtr_limit;
  VAR_16->guest_tr_limit = VAR_17->guest_tr_limit;
  VAR_16->guest_gdtr_limit = VAR_17->guest_gdtr_limit;
  VAR_16->guest_idtr_limit = VAR_17->guest_idtr_limit;
  VAR_16->guest_es_ar_bytes = VAR_17->guest_es_ar_bytes;
  VAR_16->guest_cs_ar_bytes = VAR_17->guest_cs_ar_bytes;
  VAR_16->guest_ss_ar_bytes = VAR_17->guest_ss_ar_bytes;
  VAR_16->guest_ds_ar_bytes = VAR_17->guest_ds_ar_bytes;
  VAR_16->guest_fs_ar_bytes = VAR_17->guest_fs_ar_bytes;
  VAR_16->guest_gs_ar_bytes = VAR_17->guest_gs_ar_bytes;
  VAR_16->guest_ldtr_ar_bytes = VAR_17->guest_ldtr_ar_bytes;
  VAR_16->guest_tr_ar_bytes = VAR_17->guest_tr_ar_bytes;
  VAR_16->guest_es_selector = VAR_17->guest_es_selector;
  VAR_16->guest_cs_selector = VAR_17->guest_cs_selector;
  VAR_16->guest_ss_selector = VAR_17->guest_ss_selector;
  VAR_16->guest_ds_selector = VAR_17->guest_ds_selector;
  VAR_16->guest_fs_selector = VAR_17->guest_fs_selector;
  VAR_16->guest_gs_selector = VAR_17->guest_gs_selector;
  VAR_16->guest_ldtr_selector = VAR_17->guest_ldtr_selector;
  VAR_16->guest_tr_selector = VAR_17->guest_tr_selector;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_4))) {
  VAR_16->tsc_offset = VAR_17->tsc_offset;
  VAR_16->virtual_apic_page_addr = VAR_17->virtual_apic_page_addr;
  VAR_16->xss_exit_bitmap = VAR_17->xss_exit_bitmap;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_7))) {
  VAR_16->cr0_guest_host_mask = VAR_17->cr0_guest_host_mask;
  VAR_16->cr4_guest_host_mask = VAR_17->cr4_guest_host_mask;
  VAR_16->cr0_read_shadow = VAR_17->cr0_read_shadow;
  VAR_16->cr4_read_shadow = VAR_17->cr4_read_shadow;
  VAR_16->guest_cr0 = VAR_17->guest_cr0;
  VAR_16->guest_cr3 = VAR_17->guest_cr3;
  VAR_16->guest_cr4 = VAR_17->guest_cr4;
  VAR_16->guest_dr7 = VAR_17->guest_dr7;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_12))) {
  VAR_16->host_fs_base = VAR_17->host_fs_base;
  VAR_16->host_gs_base = VAR_17->host_gs_base;
  VAR_16->host_tr_base = VAR_17->host_tr_base;
  VAR_16->host_gdtr_base = VAR_17->host_gdtr_base;
  VAR_16->host_idtr_base = VAR_17->host_idtr_base;
  VAR_16->host_rsp = VAR_17->host_rsp;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_6))) {
  VAR_16->ept_pointer = VAR_17->ept_pointer;
  VAR_16->virtual_processor_id = VAR_17->virtual_processor_id;
 }

 if (FUNC_0(!(VAR_17->hv_clean_fields &
         VAR_9))) {
  VAR_16->vmcs_link_pointer = VAR_17->vmcs_link_pointer;
  VAR_16->guest_ia32_debugctl = VAR_17->guest_ia32_debugctl;
  VAR_16->guest_ia32_pat = VAR_17->guest_ia32_pat;
  VAR_16->guest_ia32_efer = VAR_17->guest_ia32_efer;
  VAR_16->guest_pdptr0 = VAR_17->guest_pdptr0;
  VAR_16->guest_pdptr1 = VAR_17->guest_pdptr1;
  VAR_16->guest_pdptr2 = VAR_17->guest_pdptr2;
  VAR_16->guest_pdptr3 = VAR_17->guest_pdptr3;
  VAR_16->guest_pending_dbg_exceptions =
   VAR_17->guest_pending_dbg_exceptions;
  VAR_16->guest_sysenter_esp = VAR_17->guest_sysenter_esp;
  VAR_16->guest_sysenter_eip = VAR_17->guest_sysenter_eip;
  VAR_16->guest_bndcfgs = VAR_17->guest_bndcfgs;
  VAR_16->guest_activity_state = VAR_17->guest_activity_state;
  VAR_16->guest_sysenter_cs = VAR_17->guest_sysenter_cs;
 }
 return 0;
}
