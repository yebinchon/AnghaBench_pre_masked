
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int cpu; } ;
struct TYPE_3__ {struct kvm_vcpu* kvm_vcpu; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(struct kvm_vcpu *VAR_1, int VAR_2)
{
 VAR_1->cpu = FUNC_0();
 VAR_0->thread.kvm_vcpu = VAR_1;
}
