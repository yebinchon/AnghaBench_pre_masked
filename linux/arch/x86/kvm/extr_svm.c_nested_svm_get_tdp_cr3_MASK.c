
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long nested_cr3; } ;
struct vcpu_svm {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct vcpu_svm *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->nested.nested_cr3;
}
