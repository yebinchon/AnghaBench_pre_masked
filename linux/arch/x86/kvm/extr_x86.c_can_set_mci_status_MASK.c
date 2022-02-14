
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msr_hwcr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0)
{

 if (FUNC_1(VAR_0))
  return !!(VAR_0->arch.msr_hwcr & FUNC_0(18));

 return 0;
}
