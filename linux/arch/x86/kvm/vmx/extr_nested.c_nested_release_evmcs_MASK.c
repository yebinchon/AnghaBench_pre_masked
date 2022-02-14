
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long hv_evmcs_vmptr; int * hv_evmcs; int hv_evmcs_map; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int *,int) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct vcpu_vmx *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->nested.hv_evmcs)
  return;

 FUNC_0(VAR_0, &VAR_1->nested.hv_evmcs_map, 1);
 VAR_1->nested.hv_evmcs_vmptr = -1ull;
 VAR_1->nested.hv_evmcs = ((void*)0);
}
