
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcb_control_area {int intercept_cr; int intercept_dr; int intercept_exceptions; int intercept; } ;
struct nested_state {int intercept_cr; int intercept_dr; int intercept_exceptions; int intercept; TYPE_1__* hsave; } ;
struct vcpu_svm {struct nested_state nested; TYPE_2__* vmcb; int vcpu; } ;
struct TYPE_4__ {struct vmcb_control_area control; } ;
struct TYPE_3__ {struct vmcb_control_area control; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct vcpu_svm *VAR_1)
{
 struct vmcb_control_area *VAR_2, *VAR_3;
 struct nested_state *VAR_4;

 FUNC_1(VAR_1->vmcb, VAR_0);

 if (!FUNC_0(&VAR_1->vcpu))
  return;

 VAR_2 = &VAR_1->vmcb->control;
 VAR_3 = &VAR_1->nested.hsave->control;
 VAR_4 = &VAR_1->nested;

 VAR_2->intercept_cr = VAR_3->intercept_cr | VAR_4->intercept_cr;
 VAR_2->intercept_dr = VAR_3->intercept_dr | VAR_4->intercept_dr;
 VAR_2->intercept_exceptions = VAR_3->intercept_exceptions | VAR_4->intercept_exceptions;
 VAR_2->intercept = VAR_3->intercept | VAR_4->intercept;
}
