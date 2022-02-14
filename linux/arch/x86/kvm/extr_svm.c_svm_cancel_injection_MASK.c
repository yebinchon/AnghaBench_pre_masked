
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcb_control_area {scalar_t__ event_inj; int event_inj_err; int exit_int_info_err; scalar_t__ exit_int_info; } ;
struct vcpu_svm {TYPE_1__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {struct vmcb_control_area control; } ;


 int FUNC_0 (struct vcpu_svm*) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct vcpu_svm *VAR_1 = FUNC_1(VAR_0);
 struct vmcb_control_area *VAR_2 = &VAR_1->vmcb->control;

 VAR_2->exit_int_info = VAR_2->event_inj;
 VAR_2->exit_int_info_err = VAR_2->event_inj_err;
 VAR_2->event_inj = 0;
 FUNC_0(VAR_1);
}
