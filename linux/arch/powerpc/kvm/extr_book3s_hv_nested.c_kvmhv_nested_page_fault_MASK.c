
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_nested_guest* nested; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_run {int dummy; } ;
struct kvm_nested_guest {int tlb_lock; } ;


 long FUNC_0 (struct kvm_run*,struct kvm_vcpu*,struct kvm_nested_guest*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

long int FUNC_3(struct kvm_run *VAR_0, struct kvm_vcpu *VAR_1)
{
 struct kvm_nested_guest *VAR_2 = VAR_1->arch.nested;
 long int VAR_3;

 FUNC_1(&VAR_2->tlb_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_2->tlb_lock);
 return VAR_3;
}
