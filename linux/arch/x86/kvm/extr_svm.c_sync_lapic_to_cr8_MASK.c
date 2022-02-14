
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int int_ctl; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_3(VAR_1);
 u64 VAR_3;

 if (FUNC_2(VAR_1) ||
     FUNC_1(VAR_1))
  return;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2->vmcb->control.int_ctl &= ~VAR_0;
 VAR_2->vmcb->control.int_ctl |= VAR_3 & VAR_0;
}
