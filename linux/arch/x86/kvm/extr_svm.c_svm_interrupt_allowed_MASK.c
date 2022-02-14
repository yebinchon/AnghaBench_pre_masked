
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int int_state; } ;
struct vmcb {TYPE_1__ control; } ;
struct TYPE_5__ {int hflags; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct vcpu_svm {TYPE_3__ vcpu; struct vmcb* vmcb; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_svm*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_3(VAR_3);
 struct vmcb *VAR_5 = VAR_4->vmcb;
 int VAR_6;

 if (!FUNC_0(VAR_4) ||
      (VAR_5->control.int_state & VAR_1))
  return 0;

 VAR_6 = !!(FUNC_2(VAR_3) & VAR_2);

 if (FUNC_1(VAR_3))
  return VAR_6 && !(VAR_4->vcpu.arch.hflags & VAR_0);

 return VAR_6;
}
