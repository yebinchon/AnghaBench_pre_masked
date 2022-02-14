
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {int host_cr4; int host_ia32_sysenter_esp; int host_ia32_sysenter_eip; int vm_exit_controls; int vm_entry_controls; int host_rip; int host_cs_selector; int host_ss_selector; int host_ds_selector; int host_es_selector; int host_fs_selector; int host_gs_selector; int host_tr_selector; int host_fs_base; int host_gs_base; int host_gdtr_base; int host_idtr_base; int host_tr_base; int host_ia32_efer; int host_ia32_pat; int host_cr3; int host_cr0; } ;
struct TYPE_2__ {int efer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int) ;
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
 int FUNC_1 (int,struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_11,
           struct vmcs12 *VAR_12)
{
 bool VAR_13;

 if (FUNC_0(!FUNC_5(VAR_11, VAR_12->host_cr0)) ||
     FUNC_0(!FUNC_6(VAR_11, VAR_12->host_cr4)) ||
     FUNC_0(!FUNC_4(VAR_11, VAR_12->host_cr3)))
  return -VAR_2;

 if (FUNC_0(FUNC_1(VAR_12->host_ia32_sysenter_esp, VAR_11)) ||
     FUNC_0(FUNC_1(VAR_12->host_ia32_sysenter_eip, VAR_11)))
  return -VAR_2;

 if ((VAR_12->vm_exit_controls & VAR_8) &&
     FUNC_0(!FUNC_2(VAR_12->host_ia32_pat)))
  return -VAR_2;




 VAR_13 = 0;


 if (VAR_13) {
  if (FUNC_0(!(VAR_12->vm_exit_controls & VAR_6)) ||
      FUNC_0(!(VAR_12->host_cr4 & VAR_9)))
   return -VAR_2;
 } else {
  if (FUNC_0(VAR_12->vm_exit_controls & VAR_6) ||
      FUNC_0(VAR_12->vm_entry_controls & VAR_5) ||
      FUNC_0(VAR_12->host_cr4 & VAR_10) ||
      FUNC_0((VAR_12->host_rip) >> 32))
   return -VAR_2;
 }

 if (FUNC_0(VAR_12->host_cs_selector & (VAR_3 | VAR_4)) ||
     FUNC_0(VAR_12->host_ss_selector & (VAR_3 | VAR_4)) ||
     FUNC_0(VAR_12->host_ds_selector & (VAR_3 | VAR_4)) ||
     FUNC_0(VAR_12->host_es_selector & (VAR_3 | VAR_4)) ||
     FUNC_0(VAR_12->host_fs_selector & (VAR_3 | VAR_4)) ||
     FUNC_0(VAR_12->host_gs_selector & (VAR_3 | VAR_4)) ||
     FUNC_0(VAR_12->host_tr_selector & (VAR_3 | VAR_4)) ||
     FUNC_0(VAR_12->host_cs_selector == 0) ||
     FUNC_0(VAR_12->host_tr_selector == 0) ||
     FUNC_0(VAR_12->host_ss_selector == 0 && !VAR_13))
  return -VAR_2;
 if (VAR_12->vm_exit_controls & VAR_7) {
  if (FUNC_0(!FUNC_3(VAR_11, VAR_12->host_ia32_efer)) ||
      FUNC_0(VAR_13 != !!(VAR_12->host_ia32_efer & VAR_0)) ||
      FUNC_0(VAR_13 != !!(VAR_12->host_ia32_efer & VAR_1)))
   return -VAR_2;
 }

 return 0;
}
