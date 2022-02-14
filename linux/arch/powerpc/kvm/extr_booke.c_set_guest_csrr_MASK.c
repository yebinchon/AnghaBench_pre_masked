
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long csrr0; int csrr1; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0, unsigned long VAR_1, u32 VAR_2)
{
 VAR_0->arch.csrr0 = VAR_1;
 VAR_0->arch.csrr1 = VAR_2;
}
