
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct vcpu_svm* guest_fpu; struct vcpu_svm* user_fpu; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {int msrpm; int hsave; } ;
struct vcpu_svm {TYPE_3__ vcpu; TYPE_1__ nested; int msrpm; int vmcb_pa; int vmcb; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct vcpu_svm*) ;
 int VAR_2 ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 struct vcpu_svm* FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_4)
{
 struct vcpu_svm *VAR_5 = FUNC_7(VAR_4);






 FUNC_6(VAR_5->vmcb);

 FUNC_0(FUNC_5(FUNC_2(VAR_5->vmcb_pa) >> VAR_1));
 FUNC_1(FUNC_8(VAR_5->msrpm), VAR_0);
 FUNC_0(FUNC_8(VAR_5->nested.hsave));
 FUNC_1(FUNC_8(VAR_5->nested.msrpm), VAR_0);
 FUNC_4(VAR_4);
 FUNC_3(VAR_3, VAR_5->vcpu.arch.user_fpu);
 FUNC_3(VAR_3, VAR_5->vcpu.arch.guest_fpu);
 FUNC_3(VAR_2, VAR_5);
}
