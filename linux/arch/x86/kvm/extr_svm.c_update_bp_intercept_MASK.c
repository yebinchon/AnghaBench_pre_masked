
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int dummy; } ;
struct kvm_vcpu {int guest_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 int FUNC_1 (struct vcpu_svm*,int ) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4, VAR_0);

 if (VAR_3->guest_debug & VAR_1) {
  if (VAR_3->guest_debug & VAR_2)
   FUNC_1(VAR_4, VAR_0);
 } else
  VAR_3->guest_debug = 0;
}
