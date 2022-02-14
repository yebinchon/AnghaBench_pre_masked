
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int preempted_in_kernel; int last_host_tsc; } ;
struct kvm_vcpu {TYPE_1__ arch; TYPE_2__* kvm; scalar_t__ preempted; } ;
struct TYPE_6__ {int (* vcpu_put ) (struct kvm_vcpu*) ;int (* get_cpl ) (struct kvm_vcpu*) ;} ;
struct TYPE_5__ {int srcu; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;

void FUNC_9(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 if (VAR_1->preempted)
  VAR_1->arch.preempted_in_kernel = !VAR_0->get_cpl(VAR_1);
 FUNC_1();




 VAR_2 = FUNC_5(&VAR_1->kvm->srcu);
 FUNC_0(VAR_1);
 FUNC_6(&VAR_1->kvm->srcu, VAR_2);
 FUNC_2();
 VAR_0->vcpu_put(VAR_1);
 VAR_1->arch.last_host_tsc = FUNC_3();





 FUNC_4(0, 6);
}
