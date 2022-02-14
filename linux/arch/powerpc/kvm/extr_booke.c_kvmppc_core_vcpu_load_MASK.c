
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_5__ {TYPE_1__* kvm_ops; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {int (* vcpu_load ) (struct kvm_vcpu*,int) ;} ;


 int FUNC_0 (struct kvm_vcpu*,int) ;

void FUNC_1(struct kvm_vcpu *VAR_0, int VAR_1)
{
 VAR_0->kvm->arch.kvm_ops->vcpu_load(VAR_0, VAR_1);
}
