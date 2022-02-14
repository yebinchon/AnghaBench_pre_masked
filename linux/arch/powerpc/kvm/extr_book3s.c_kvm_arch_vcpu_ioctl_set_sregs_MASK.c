
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* kvm; } ;
struct kvm_sregs {int dummy; } ;
struct TYPE_5__ {TYPE_1__* kvm_ops; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {int (* set_sregs ) (struct kvm_vcpu*,struct kvm_sregs*) ;} ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0,
      struct kvm_sregs *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = VAR_0->kvm->arch.kvm_ops->set_sregs(VAR_0, VAR_1);
 FUNC_2(VAR_0);

 return VAR_2;
}
