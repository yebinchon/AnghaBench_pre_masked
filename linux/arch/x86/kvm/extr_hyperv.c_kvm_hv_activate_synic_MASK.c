
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv_synic {int active; int dont_zero_synic_pages; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 struct kvm_vcpu_hv_synic* FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_0, bool VAR_1)
{
 struct kvm_vcpu_hv_synic *VAR_2 = FUNC_1(VAR_0);





 FUNC_0(VAR_0);
 VAR_2->active = 1;
 VAR_2->dont_zero_synic_pages = VAR_1;
 return 0;
}
