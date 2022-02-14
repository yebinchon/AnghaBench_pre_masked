
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct vcpu_svm {struct kvm_vcpu vcpu; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_1)
{
 struct kvm_vcpu *VAR_2 = &VAR_1->vcpu;
 bool VAR_3 = (FUNC_2(VAR_2) == 0);

 if (VAR_0)
  FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_3);
 return 1;
}
