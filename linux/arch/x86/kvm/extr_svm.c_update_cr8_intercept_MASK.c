
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct vcpu_svm*,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1, int VAR_2, int VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_4(VAR_1);

 if (FUNC_3(VAR_1) ||
     FUNC_1(VAR_1))
  return;

 FUNC_0(VAR_4, VAR_0);

 if (VAR_3 == -1)
  return;

 if (VAR_2 >= VAR_3)
  FUNC_2(VAR_4, VAR_0);
}
