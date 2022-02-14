
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int need_vmcs12_to_shadow_sync; TYPE_1__* hv_evmcs; scalar_t__ enlightened_vmcs_enabled; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int hv_clean_fields; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu_vmx*) ;
 int FUNC_1 (struct vcpu_vmx*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 struct vcpu_vmx* FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_3(VAR_1);






 if (VAR_2->nested.enlightened_vmcs_enabled && !VAR_2->nested.hv_evmcs)
  FUNC_2(VAR_1, 0);

 if (VAR_2->nested.hv_evmcs) {
  FUNC_0(VAR_2);

  VAR_2->nested.hv_evmcs->hv_clean_fields |=
   VAR_0;
 } else {
  FUNC_1(VAR_2);
 }

 VAR_2->nested.need_vmcs12_to_shadow_sync = 0;
}
