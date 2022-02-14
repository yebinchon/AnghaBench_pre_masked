
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_exception {int error_code; int address; } ;
struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ exit_code; unsigned long long exit_info_1; int exit_info_2; scalar_t__ exit_code_hi; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vcpu_svm*) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1,
           struct x86_exception *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->vmcb->control.exit_code != VAR_0) {




  VAR_3->vmcb->control.exit_code = VAR_0;
  VAR_3->vmcb->control.exit_code_hi = 0;
  VAR_3->vmcb->control.exit_info_1 = (1ULL << 32);
  VAR_3->vmcb->control.exit_info_2 = VAR_2->address;
 }

 VAR_3->vmcb->control.exit_info_1 &= ~0xffffffffULL;
 VAR_3->vmcb->control.exit_info_1 |= VAR_2->error_code;





 if (VAR_3->vmcb->control.exit_info_1 & (2ULL << 32))
  VAR_3->vmcb->control.exit_info_1 &= ~1;

 FUNC_0(VAR_3);
}
