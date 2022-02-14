
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu_hv_synic {scalar_t__ active; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;


 struct kvm_vcpu* FUNC_0 (struct kvm*,int ) ;
 struct kvm_vcpu_hv_synic* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static struct kvm_vcpu_hv_synic *FUNC_2(struct kvm *VAR_0, u32 VAR_1)
{
 struct kvm_vcpu *VAR_2;
 struct kvm_vcpu_hv_synic *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_2);
 return (VAR_3->active) ? VAR_3 : ((void*)0);
}
