
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {scalar_t__ vcpu_id; TYPE_2__* kvm; } ;
struct TYPE_3__ {scalar_t__ bsp_vcpu_id; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;



bool FUNC_0(struct kvm_vcpu *VAR_0)
{
 return VAR_0->kvm->arch.bsp_vcpu_id == VAR_0->vcpu_id;
}
