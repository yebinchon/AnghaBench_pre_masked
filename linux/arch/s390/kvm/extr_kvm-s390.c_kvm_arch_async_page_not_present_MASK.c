
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int pfault_token; } ;
struct kvm_async_pf {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_0,
         struct kvm_async_pf *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->arch.pfault_token);
 FUNC_0(VAR_0, 1, VAR_1->arch.pfault_token);
}
