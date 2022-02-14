
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long long intercept; int exit_required; } ;
struct vcpu_svm {TYPE_3__ nested; TYPE_2__* vmcb; int vcpu; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int exit_code; } ;
struct TYPE_5__ {TYPE_1__ control; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vcpu_svm*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_2(VAR_2);


 if (!FUNC_0(VAR_3))
  return 0;

 if (FUNC_1(&VAR_3->vcpu) &&
     VAR_3->nested.intercept & (1ULL << VAR_0)) {

  VAR_3->vmcb->control.exit_code = VAR_1;
  VAR_3->nested.exit_required = 1;
  return 0;
 }

 return 1;
}
