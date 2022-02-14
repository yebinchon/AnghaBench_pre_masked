
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_5__* run; TYPE_2__ arch; } ;
struct TYPE_8__ {int * gprs; } ;
struct TYPE_9__ {TYPE_3__ regs; } ;
struct TYPE_10__ {TYPE_4__ s; } ;
struct TYPE_6__ {int ipb; } ;



__attribute__((used)) static inline void FUNC_0(struct kvm_vcpu *VAR_0,
           u64 *VAR_1, u64 *VAR_2,
           u8 *VAR_3, u8 *VAR_4)
{
 u32 VAR_5 = (VAR_0->arch.sie_block->ipb & 0xf0000000) >> 28;
 u32 VAR_6 = (VAR_0->arch.sie_block->ipb & 0x0fff0000) >> 16;
 u32 VAR_7 = (VAR_0->arch.sie_block->ipb & 0xf000) >> 12;
 u32 VAR_8 = VAR_0->arch.sie_block->ipb & 0x0fff;

 *VAR_1 = (VAR_5 ? VAR_0->run->s.regs.gprs[VAR_5] : 0) + VAR_6;
 *VAR_2 = (VAR_7 ? VAR_0->run->s.regs.gprs[VAR_7] : 0) + VAR_8;

 if (VAR_3)
  *VAR_3 = VAR_5;
 if (VAR_4)
  *VAR_4 = VAR_7;
}
