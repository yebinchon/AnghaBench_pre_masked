
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
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(struct kvm_vcpu *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;

 if (!FUNC_3(VAR_2))
  return;

 FUNC_8(VAR_2->vcpu_id, 1);

 FUNC_6(&VAR_2->kvm->arch.start_stop_lock);
 VAR_4 = FUNC_2(&VAR_2->kvm->online_vcpus);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (!FUNC_3(VAR_2->kvm->vcpus[VAR_3]))
   VAR_5++;
 }

 if (VAR_5 == 0) {

  FUNC_1(VAR_2);
 } else if (VAR_5 == 1) {





  FUNC_0(VAR_2->kvm);
 }

 FUNC_5(VAR_2, VAR_0);




 FUNC_4(VAR_1, VAR_2);
 FUNC_7(&VAR_2->kvm->arch.start_stop_lock);
 return;
}
