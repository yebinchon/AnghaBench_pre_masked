
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct vcpu_svm {struct kvm_vcpu vcpu; TYPE_2__* vmcb; } ;
struct TYPE_3__ {int rip; } ;
struct TYPE_4__ {TYPE_1__ save; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct vcpu_svm *VAR_0)
{
 struct kvm_vcpu *VAR_1 = &VAR_0->vcpu;

 FUNC_4(VAR_0->vmcb->save.rip, FUNC_2(&VAR_0->vcpu),
     FUNC_1(&VAR_0->vcpu));


 FUNC_0(VAR_1, FUNC_1(&VAR_0->vcpu));

 return FUNC_3(&VAR_0->vcpu);
}
