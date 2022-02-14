
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* kvm; } ;
struct kvm_run {int dummy; } ;
struct TYPE_5__ {TYPE_1__* kvm_ops; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {int (* vcpu_run ) (struct kvm_run*,struct kvm_vcpu*) ;} ;


 int FUNC_0 (struct kvm_run*,struct kvm_vcpu*) ;

int FUNC_1(struct kvm_run *VAR_0, struct kvm_vcpu *VAR_1)
{
 return VAR_1->kvm->arch.kvm_ops->vcpu_run(VAR_0, VAR_1);
}
