
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; } ;
struct TYPE_4__ {TYPE_1__ interrupt; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0)
{
 int VAR_1;

 if (!FUNC_2(VAR_0))
  return VAR_0->arch.interrupt.nr;

 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 != -1)
  return VAR_1;

 return FUNC_1(VAR_0);
}
