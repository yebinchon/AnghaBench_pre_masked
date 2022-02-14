
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msr_data {int data; int host_initiated; int index; } ;
struct TYPE_3__ {int msr_kvm_poll_control; } ;
struct kvm_vcpu {int mutex; TYPE_1__ arch; struct kvm* kvm; } ;
struct TYPE_4__ {int kvmclock_sync_work; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,struct msr_data*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;

void FUNC_7(struct kvm_vcpu *VAR_3)
{
 struct msr_data VAR_4;
 struct kvm *VAR_5 = VAR_3->kvm;

 FUNC_0(VAR_3);

 if (FUNC_2(&VAR_3->mutex))
  return;
 FUNC_5(VAR_3);
 VAR_4.data = 0x0;
 VAR_4.index = VAR_1;
 VAR_4.host_initiated = 1;
 FUNC_1(VAR_3, &VAR_4);
 FUNC_6(VAR_3);


 VAR_3->arch.msr_kvm_poll_control = 1;

 FUNC_3(&VAR_3->mutex);

 if (!VAR_2)
  return;

 FUNC_4(&VAR_5->arch.kvmclock_sync_work,
     VAR_0);
}
