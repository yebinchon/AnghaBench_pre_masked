
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcb {int dummy; } ;
struct vcpu_svm {int vcpu; TYPE_2__* vmcb; } ;
struct kvm_host_map {struct vmcb* hva; } ;
struct TYPE_3__ {int rax; } ;
struct TYPE_4__ {TYPE_1__ save; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct kvm_host_map*) ;
 int FUNC_4 (int *,struct kvm_host_map*,int) ;
 scalar_t__ FUNC_5 (struct vcpu_svm*) ;
 int FUNC_6 (TYPE_2__*,struct vmcb*) ;

__attribute__((used)) static int FUNC_7(struct vcpu_svm *VAR_1)
{
 struct vmcb *VAR_2;
 struct kvm_host_map VAR_3;
 int VAR_4;

 if (FUNC_5(VAR_1))
  return 1;

 VAR_4 = FUNC_3(&VAR_1->vcpu, FUNC_0(VAR_1->vmcb->save.rax), &VAR_3);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   FUNC_1(&VAR_1->vcpu, 0);
  return 1;
 }

 VAR_2 = VAR_3.hva;

 VAR_4 = FUNC_2(&VAR_1->vcpu);

 FUNC_6(VAR_1->vmcb, VAR_2);
 FUNC_4(&VAR_1->vcpu, &VAR_3, 1);

 return VAR_4;
}
