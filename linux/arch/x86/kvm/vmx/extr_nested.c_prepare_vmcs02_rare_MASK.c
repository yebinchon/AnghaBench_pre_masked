
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmcs12 {int vm_entry_controls; int eoi_exit_bitmap3; int eoi_exit_bitmap2; int eoi_exit_bitmap1; int eoi_exit_bitmap0; int page_fault_error_code_match; int page_fault_error_code_mask; int xss_exit_bitmap; int guest_bndcfgs; int guest_pdptr3; int guest_pdptr2; int guest_pdptr1; int guest_pdptr0; int guest_sysenter_eip; int guest_sysenter_esp; int guest_pending_dbg_exceptions; int guest_sysenter_cs; int guest_idtr_base; int guest_gdtr_base; int guest_tr_base; int guest_ldtr_base; int guest_gs_base; int guest_fs_base; int guest_ds_base; int guest_ss_base; int guest_cs_base; int guest_es_base; int guest_tr_ar_bytes; int guest_ldtr_ar_bytes; int guest_gs_ar_bytes; int guest_fs_ar_bytes; int guest_ds_ar_bytes; int guest_es_ar_bytes; int guest_ss_ar_bytes; int guest_cs_ar_bytes; int guest_idtr_limit; int guest_gdtr_limit; int guest_tr_limit; int guest_ldtr_limit; int guest_gs_limit; int guest_fs_limit; int guest_ds_limit; int guest_ss_limit; int guest_cs_limit; int guest_es_limit; int guest_tr_selector; int guest_ldtr_selector; int guest_gs_selector; int guest_fs_selector; int guest_ds_selector; int guest_ss_selector; int guest_cs_selector; int guest_es_selector; } ;
struct TYPE_7__ {int nr; } ;
struct TYPE_6__ {int nr; } ;
struct TYPE_8__ {TYPE_3__ guest; TYPE_2__ host; } ;
struct TYPE_5__ {scalar_t__ nested_run_pending; struct hv_enlightened_vmcs* hv_evmcs; } ;
struct vcpu_vmx {TYPE_4__ msr_autoload; TYPE_1__ nested; } ;
struct hv_enlightened_vmcs {int hv_clean_fields; } ;


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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_57 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct vmcs12*) ;
 int FUNC_3 (struct vcpu_vmx*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct vcpu_vmx *VAR_58, struct vmcs12 *VAR_59)
{
 struct hv_enlightened_vmcs *VAR_60 = VAR_58->nested.hv_evmcs;

 if (!VAR_60 || !(VAR_60->hv_clean_fields &
      VAR_50)) {
  FUNC_4(VAR_16, VAR_59->guest_es_selector);
  FUNC_4(VAR_8, VAR_59->guest_cs_selector);
  FUNC_4(VAR_41, VAR_59->guest_ss_selector);
  FUNC_4(VAR_12, VAR_59->guest_ds_selector);
  FUNC_4(VAR_20, VAR_59->guest_fs_selector);
  FUNC_4(VAR_26, VAR_59->guest_gs_selector);
  FUNC_4(VAR_32, VAR_59->guest_ldtr_selector);
  FUNC_4(VAR_48, VAR_59->guest_tr_selector);
  FUNC_5(VAR_15, VAR_59->guest_es_limit);
  FUNC_5(VAR_7, VAR_59->guest_cs_limit);
  FUNC_5(VAR_40, VAR_59->guest_ss_limit);
  FUNC_5(VAR_11, VAR_59->guest_ds_limit);
  FUNC_5(VAR_19, VAR_59->guest_fs_limit);
  FUNC_5(VAR_25, VAR_59->guest_gs_limit);
  FUNC_5(VAR_31, VAR_59->guest_ldtr_limit);
  FUNC_5(VAR_47, VAR_59->guest_tr_limit);
  FUNC_5(VAR_22, VAR_59->guest_gdtr_limit);
  FUNC_5(VAR_28, VAR_59->guest_idtr_limit);
  FUNC_5(VAR_5, VAR_59->guest_cs_ar_bytes);
  FUNC_5(VAR_38, VAR_59->guest_ss_ar_bytes);
  FUNC_5(VAR_13, VAR_59->guest_es_ar_bytes);
  FUNC_5(VAR_9, VAR_59->guest_ds_ar_bytes);
  FUNC_5(VAR_17, VAR_59->guest_fs_ar_bytes);
  FUNC_5(VAR_23, VAR_59->guest_gs_ar_bytes);
  FUNC_5(VAR_29, VAR_59->guest_ldtr_ar_bytes);
  FUNC_5(VAR_45, VAR_59->guest_tr_ar_bytes);
  FUNC_7(VAR_14, VAR_59->guest_es_base);
  FUNC_7(VAR_6, VAR_59->guest_cs_base);
  FUNC_7(VAR_39, VAR_59->guest_ss_base);
  FUNC_7(VAR_10, VAR_59->guest_ds_base);
  FUNC_7(VAR_18, VAR_59->guest_fs_base);
  FUNC_7(VAR_24, VAR_59->guest_gs_base);
  FUNC_7(VAR_30, VAR_59->guest_ldtr_base);
  FUNC_7(VAR_46, VAR_59->guest_tr_base);
  FUNC_7(VAR_21, VAR_59->guest_gdtr_base);
  FUNC_7(VAR_27, VAR_59->guest_idtr_base);
 }

 if (!VAR_60 || !(VAR_60->hv_clean_fields &
      VAR_49)) {
  FUNC_5(VAR_42, VAR_59->guest_sysenter_cs);
  FUNC_7(VAR_37,
       VAR_59->guest_pending_dbg_exceptions);
  FUNC_7(VAR_44, VAR_59->guest_sysenter_esp);
  FUNC_7(VAR_43, VAR_59->guest_sysenter_eip);





  if (VAR_57) {
   FUNC_6(VAR_33, VAR_59->guest_pdptr0);
   FUNC_6(VAR_34, VAR_59->guest_pdptr1);
   FUNC_6(VAR_35, VAR_59->guest_pdptr2);
   FUNC_6(VAR_36, VAR_59->guest_pdptr3);
  }

  if (FUNC_1() && VAR_58->nested.nested_run_pending &&
      (VAR_59->vm_entry_controls & VAR_53))
   FUNC_6(VAR_4, VAR_59->guest_bndcfgs);
 }

 if (FUNC_2(VAR_59))
  FUNC_6(VAR_56, VAR_59->xss_exit_bitmap);
 FUNC_5(VAR_51,
  VAR_57 ? VAR_59->page_fault_error_code_mask : 0);
 FUNC_5(VAR_52,
  VAR_57 ? VAR_59->page_fault_error_code_match : 0);

 if (FUNC_0()) {
  FUNC_6(VAR_0, VAR_59->eoi_exit_bitmap0);
  FUNC_6(VAR_1, VAR_59->eoi_exit_bitmap1);
  FUNC_6(VAR_2, VAR_59->eoi_exit_bitmap2);
  FUNC_6(VAR_3, VAR_59->eoi_exit_bitmap3);
 }

 FUNC_5(VAR_55, VAR_58->msr_autoload.host.nr);
 FUNC_5(VAR_54, VAR_58->msr_autoload.guest.nr);

 FUNC_3(VAR_58);
}
