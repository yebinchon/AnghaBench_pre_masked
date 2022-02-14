
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {struct kvm_run* run; } ;
struct vcpu_svm {TYPE_1__ vcpu; } ;
struct kvm_run {int exit_reason; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu_svm*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_1)
{
 struct kvm_run *VAR_2 = VAR_1->vcpu.run;
 int VAR_3;

 u8 VAR_4 = FUNC_1(&VAR_1->vcpu);

 VAR_3 = FUNC_0(VAR_1);
 if (FUNC_2(&VAR_1->vcpu))
  return VAR_3;
 if (VAR_4 <= FUNC_1(&VAR_1->vcpu))
  return VAR_3;
 VAR_2->exit_reason = VAR_0;
 return 0;
}
