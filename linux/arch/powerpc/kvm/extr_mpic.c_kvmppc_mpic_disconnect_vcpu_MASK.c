
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct openpic {TYPE_1__* dst; } ;
struct TYPE_4__ {size_t irq_cpu_id; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int * vcpu; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct openpic *VAR_0, struct kvm_vcpu *VAR_1)
{
 FUNC_0(!VAR_0->dst[VAR_1->arch.irq_cpu_id].vcpu);

 VAR_0->dst[VAR_1->arch.irq_cpu_id].vcpu = ((void*)0);
}
