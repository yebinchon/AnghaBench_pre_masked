
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mcg_cap; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0)
{

 VAR_0->arch.mcg_cap &= 0x1ff;
}
