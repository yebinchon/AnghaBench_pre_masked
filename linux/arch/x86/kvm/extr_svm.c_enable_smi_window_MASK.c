
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct vcpu_svm*,int ) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_2(VAR_1);

 if (!FUNC_0(VAR_2)) {
  if (FUNC_3(VAR_2))
   FUNC_1(VAR_2, VAR_0);

  return 1;
 }
 return 0;
}
