
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long current_vmptr; scalar_t__ hv_evmcs; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline int FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct vcpu_vmx *VAR_1 = FUNC_1(VAR_0);







 return FUNC_0(VAR_0) || VAR_1->nested.current_vmptr != -1ull ||
  VAR_1->nested.hv_evmcs;
}
