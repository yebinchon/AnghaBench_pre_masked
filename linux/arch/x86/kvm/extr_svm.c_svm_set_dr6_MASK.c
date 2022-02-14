
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {unsigned long dr6; } ;
struct TYPE_4__ {TYPE_1__ save; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_1(VAR_1);

 VAR_3->vmcb->save.dr6 = VAR_2;
 FUNC_0(VAR_3->vmcb, VAR_0);
}
