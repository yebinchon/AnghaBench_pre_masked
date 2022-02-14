
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ shadow_vmcs; } ;
struct vmcs12 {int launch_state; scalar_t__ guest_activity_state; int vm_entry_intr_info_field; int cpu_based_vm_exec_control; int guest_rflags; TYPE_1__ hdr; } ;
struct TYPE_8__ {unsigned long long current_vmptr; int nested_run_pending; scalar_t__ hv_evmcs; } ;
struct TYPE_6__ {int l1tf_flush_l1d; } ;
struct TYPE_7__ {TYPE_2__ arch; } ;
struct vcpu_vmx {TYPE_4__ nested; TYPE_3__ vcpu; } ;
struct kvm_vcpu {int dummy; } ;
typedef enum nvmx_vmentry_status { ____Placeholder_nvmx_vmentry_status } nvmx_vmentry_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int) ;
 int VAR_14 ;
 int FUNC_1 (struct vcpu_vmx*) ;
 int FUNC_2 (struct vcpu_vmx*) ;
 scalar_t__ VAR_15 ;
 struct vmcs12* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*,int ) ;
 int FUNC_12 (struct kvm_vcpu*,int) ;
 struct vcpu_vmx* FUNC_13 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_16(struct kvm_vcpu *VAR_16, bool VAR_17)
{
 struct vmcs12 *VAR_18;
 enum nvmx_vmentry_status VAR_19;
 struct vcpu_vmx *VAR_20 = FUNC_13(VAR_16);
 u32 VAR_21 = FUNC_15(VAR_16);

 if (!FUNC_8(VAR_16))
  return 1;

 if (!FUNC_12(VAR_16, VAR_17))
  return 1;

 if (!VAR_20->nested.hv_evmcs && VAR_20->nested.current_vmptr == -1ull)
  return FUNC_10(VAR_16);

 VAR_18 = FUNC_3(VAR_16);







 if (VAR_18->hdr.shadow_vmcs)
  return FUNC_10(VAR_16);

 if (VAR_20->nested.hv_evmcs) {
  FUNC_1(VAR_20);

  VAR_18->launch_state = !VAR_17;
 } else if (VAR_15) {
  FUNC_2(VAR_20);
 }
 if (VAR_21 & VAR_4)
  return FUNC_11(VAR_16,
   VAR_9);

 if (VAR_18->launch_state == VAR_17)
  return FUNC_11(VAR_16,
   VAR_17 ? VAR_12
          : VAR_13);

 if (FUNC_6(VAR_16, VAR_18))
  return FUNC_11(VAR_16, VAR_10);

 if (FUNC_7(VAR_16, VAR_18))
  return FUNC_11(VAR_16, VAR_11);





 VAR_20->nested.nested_run_pending = 1;
 VAR_19 = FUNC_9(VAR_16, 1);
 if (FUNC_14(VAR_19 != VAR_6))
  goto vmentry_failed;


 VAR_20->vcpu.arch.l1tf_flush_l1d = 1;
 FUNC_5(VAR_16, VAR_18);






 if ((VAR_18->guest_activity_state == VAR_2) &&
     !(VAR_18->vm_entry_intr_info_field & VAR_3) &&
     !(VAR_18->cpu_based_vm_exec_control & VAR_1) &&
     !((VAR_18->cpu_based_vm_exec_control & VAR_0) &&
       (VAR_18->guest_rflags & VAR_14))) {
  VAR_20->nested.nested_run_pending = 0;
  return FUNC_4(VAR_16);
 }
 return 1;

vmentry_failed:
 VAR_20->nested.nested_run_pending = 0;
 if (VAR_19 == VAR_5)
  return 0;
 if (VAR_19 == VAR_7)
  return 1;
 FUNC_0(VAR_19 != VAR_8);
 return FUNC_11(VAR_16, VAR_10);
}
