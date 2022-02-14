
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; int vcpu_id; } ;
struct TYPE_3__ {int start_stop_lock; } ;
struct TYPE_4__ {TYPE_1__ arch; struct kvm_vcpu** vcpus; int online_vcpus; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;
 struct kvm_vcpu *VAR_5 = ((void*)0);

 if (FUNC_3(VAR_1))
  return;

 FUNC_8(VAR_1->vcpu_id, 0);

 FUNC_6(&VAR_1->kvm->arch.start_stop_lock);
 VAR_3 = FUNC_2(&VAR_1->kvm->online_vcpus);


 FUNC_4(VAR_1);

 FUNC_5(VAR_1, VAR_0);
 FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (!FUNC_3(VAR_1->kvm->vcpus[VAR_2])) {
   VAR_4++;
   VAR_5 = VAR_1->kvm->vcpus[VAR_2];
  }
 }

 if (VAR_4 == 1) {




  FUNC_1(VAR_5);
 }

 FUNC_7(&VAR_1->kvm->arch.start_stop_lock);
 return;
}
