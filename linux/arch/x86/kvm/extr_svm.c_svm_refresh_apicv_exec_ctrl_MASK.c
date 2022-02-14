
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_ctl; } ;
struct vmcb {TYPE_1__ control; } ;
struct vcpu_svm {struct vmcb* vmcb; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct vmcb*,int ) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_2(VAR_2);
 struct vmcb *VAR_4 = VAR_3->vmcb;

 if (FUNC_0(VAR_2))
  VAR_4->control.int_ctl |= VAR_0;
 else
  VAR_4->control.int_ctl &= ~VAR_0;
 FUNC_1(VAR_4, VAR_1);
}
