
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int ipb; } ;



__attribute__((used)) static inline void FUNC_0(struct kvm_vcpu *VAR_0, int *VAR_1, int *VAR_2)
{
 if (VAR_1)
  *VAR_1 = (VAR_0->arch.sie_block->ipb & 0x00f00000) >> 20;
 if (VAR_2)
  *VAR_2 = (VAR_0->arch.sie_block->ipb & 0x000f0000) >> 16;
}
