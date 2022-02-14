
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wait; } ;
struct kvm_vcpu {int wq; TYPE_1__ arch; } ;
struct TYPE_4__ {int (* queue_timer_int ) (struct kvm_vcpu*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct kvm_vcpu *VAR_2 = (struct kvm_vcpu *)VAR_1;

 VAR_0->queue_timer_int(VAR_2);

 VAR_2->arch.wait = 0;
 if (FUNC_2(&VAR_2->wq))
  FUNC_1(&VAR_2->wq);
}
