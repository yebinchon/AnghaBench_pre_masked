
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {int guest_bndcfgs; void* guest_pending_dbg_exceptions; void* guest_idtr_base; void* guest_gdtr_base; void* guest_tr_base; void* guest_ldtr_base; void* guest_gs_base; void* guest_fs_base; void* guest_ds_base; void* guest_ss_base; void* guest_cs_base; void* guest_es_base; void* guest_tr_ar_bytes; void* guest_ldtr_ar_bytes; void* guest_gs_ar_bytes; void* guest_fs_ar_bytes; void* guest_ds_ar_bytes; void* guest_es_ar_bytes; void* guest_idtr_limit; void* guest_gdtr_limit; void* guest_tr_limit; void* guest_ldtr_limit; void* guest_gs_limit; void* guest_fs_limit; void* guest_ds_limit; void* guest_ss_limit; void* guest_cs_limit; void* guest_es_limit; void* guest_tr_selector; void* guest_ldtr_selector; void* guest_gs_selector; void* guest_fs_selector; void* guest_ds_selector; void* guest_ss_selector; void* guest_cs_selector; void* guest_es_selector; } ;
struct TYPE_2__ {int need_sync_vmcs02_to_vmcs12_rare; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


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
 scalar_t__ FUNC_0 () ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_36,
           struct vmcs12 *VAR_37)
{
 struct vcpu_vmx *VAR_38 = FUNC_1(VAR_36);

 VAR_37->guest_es_selector = FUNC_2(VAR_11);
 VAR_37->guest_cs_selector = FUNC_2(VAR_3);
 VAR_37->guest_ss_selector = FUNC_2(VAR_31);
 VAR_37->guest_ds_selector = FUNC_2(VAR_7);
 VAR_37->guest_fs_selector = FUNC_2(VAR_15);
 VAR_37->guest_gs_selector = FUNC_2(VAR_21);
 VAR_37->guest_ldtr_selector = FUNC_2(VAR_27);
 VAR_37->guest_tr_selector = FUNC_2(VAR_35);
 VAR_37->guest_es_limit = FUNC_3(VAR_10);
 VAR_37->guest_cs_limit = FUNC_3(VAR_2);
 VAR_37->guest_ss_limit = FUNC_3(VAR_30);
 VAR_37->guest_ds_limit = FUNC_3(VAR_6);
 VAR_37->guest_fs_limit = FUNC_3(VAR_14);
 VAR_37->guest_gs_limit = FUNC_3(VAR_20);
 VAR_37->guest_ldtr_limit = FUNC_3(VAR_26);
 VAR_37->guest_tr_limit = FUNC_3(VAR_34);
 VAR_37->guest_gdtr_limit = FUNC_3(VAR_17);
 VAR_37->guest_idtr_limit = FUNC_3(VAR_23);
 VAR_37->guest_es_ar_bytes = FUNC_3(VAR_8);
 VAR_37->guest_ds_ar_bytes = FUNC_3(VAR_4);
 VAR_37->guest_fs_ar_bytes = FUNC_3(VAR_12);
 VAR_37->guest_gs_ar_bytes = FUNC_3(VAR_18);
 VAR_37->guest_ldtr_ar_bytes = FUNC_3(VAR_24);
 VAR_37->guest_tr_ar_bytes = FUNC_3(VAR_32);
 VAR_37->guest_es_base = FUNC_5(VAR_9);
 VAR_37->guest_cs_base = FUNC_5(VAR_1);
 VAR_37->guest_ss_base = FUNC_5(VAR_29);
 VAR_37->guest_ds_base = FUNC_5(VAR_5);
 VAR_37->guest_fs_base = FUNC_5(VAR_13);
 VAR_37->guest_gs_base = FUNC_5(VAR_19);
 VAR_37->guest_ldtr_base = FUNC_5(VAR_25);
 VAR_37->guest_tr_base = FUNC_5(VAR_33);
 VAR_37->guest_gdtr_base = FUNC_5(VAR_16);
 VAR_37->guest_idtr_base = FUNC_5(VAR_22);
 VAR_37->guest_pending_dbg_exceptions =
  FUNC_5(VAR_28);
 if (FUNC_0())
  VAR_37->guest_bndcfgs = FUNC_4(VAR_0);

 VAR_38->nested.need_sync_vmcs02_to_vmcs12_rare = 0;
}
