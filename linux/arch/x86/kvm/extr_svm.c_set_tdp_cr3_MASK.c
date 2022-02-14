
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vcpu_svm {TYPE_3__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_5__ {int cr3; } ;
struct TYPE_4__ {int nested_cr3; } ;
struct TYPE_6__ {TYPE_2__ save; TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2, unsigned long VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_3(VAR_2);

 VAR_4->vmcb->control.nested_cr3 = FUNC_0(VAR_3);
 FUNC_2(VAR_4->vmcb, VAR_1);


 VAR_4->vmcb->save.cr3 = FUNC_1(VAR_2);
 FUNC_2(VAR_4->vmcb, VAR_0);
}
