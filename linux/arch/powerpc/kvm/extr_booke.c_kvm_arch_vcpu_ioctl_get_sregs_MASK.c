
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pvr; } ;
struct kvm_vcpu {TYPE_4__* kvm; TYPE_1__ arch; } ;
struct kvm_sregs {int pvr; } ;
struct TYPE_7__ {TYPE_2__* kvm_ops; } ;
struct TYPE_8__ {TYPE_3__ arch; } ;
struct TYPE_6__ {int (* get_sregs ) (struct kvm_vcpu*,struct kvm_sregs*) ;} ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_0,
                                  struct kvm_sregs *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0);

 VAR_1->pvr = VAR_0->arch.pvr;

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1);
 VAR_2 = VAR_0->kvm->arch.kvm_ops->get_sregs(VAR_0, VAR_1);

 FUNC_4(VAR_0);
 return VAR_2;
}
