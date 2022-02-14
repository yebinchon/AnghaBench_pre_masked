
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_sched_cpu; } ;
struct kvm_vcpu {int cpu; TYPE_1__ arch; } ;
struct TYPE_4__ {int (* vcpu_put ) (struct kvm_vcpu*,int) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,int) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(VAR_2);

 VAR_3 = FUNC_2();
 VAR_1->arch.last_sched_cpu = VAR_3;
 VAR_1->cpu = -1;


 VAR_0->vcpu_put(VAR_1, VAR_3);

 FUNC_0(VAR_2);
}
