
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pvr; } ;
struct kvm_vcpu {TYPE_4__* kvm; TYPE_1__ arch; } ;
struct kvm_sregs {scalar_t__ pvr; } ;
struct TYPE_6__ {TYPE_3__* kvm_ops; } ;
struct TYPE_8__ {TYPE_2__ arch; } ;
struct TYPE_7__ {int (* set_sregs ) (struct kvm_vcpu*,struct kvm_sregs*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_sregs*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_1,
                                  struct kvm_sregs *VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_3(VAR_1);
 if (VAR_1->arch.pvr != VAR_2->pvr)
  goto out;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = VAR_1->kvm->arch.kvm_ops->set_sregs(VAR_1, VAR_2);

out:
 FUNC_4(VAR_1);
 return VAR_3;
}
