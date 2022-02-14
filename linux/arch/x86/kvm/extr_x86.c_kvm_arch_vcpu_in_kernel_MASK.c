
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preempted_in_kernel; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



bool FUNC_0(struct kvm_vcpu *VAR_0)
{
 return VAR_0->arch.preempted_in_kernel;
}
