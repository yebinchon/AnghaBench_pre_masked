
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tcr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 VAR_0->arch.tcr = VAR_1;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
