
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv {int vp_index; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 struct kvm_vcpu_hv* FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct kvm_vcpu_hv *VAR_1 = FUNC_1(VAR_0);

 VAR_1->vp_index = FUNC_0(VAR_0);
}
