
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct kvm_vcpu *VAR_1)
{
 return FUNC_0(VAR_1) ||
  FUNC_1(VAR_1->arch.cop0) & VAR_0;
}
