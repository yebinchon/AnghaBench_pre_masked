
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int injected; } ;
struct TYPE_4__ {TYPE_1__ interrupt; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0)
{
 if (!FUNC_2(VAR_0))
  return VAR_0->arch.interrupt.injected;

 if (FUNC_1(VAR_0))
  return 1;

 return FUNC_0(VAR_0) != -1;
}
