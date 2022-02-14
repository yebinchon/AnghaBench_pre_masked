
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int int_state; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, int VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 == 0)
  VAR_3->vmcb->control.int_state &= ~VAR_0;
 else
  VAR_3->vmcb->control.int_state |= VAR_0;

}
