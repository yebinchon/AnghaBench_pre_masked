
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
struct TYPE_3__ {int asid; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int FUNC_0 (int ,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_0, gva_t VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2->vmcb->control.asid);
}
