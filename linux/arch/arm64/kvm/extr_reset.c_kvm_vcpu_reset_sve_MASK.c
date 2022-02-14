
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sve_state; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0)
{
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0->arch.sve_state, 0, FUNC_2(VAR_0));
}
