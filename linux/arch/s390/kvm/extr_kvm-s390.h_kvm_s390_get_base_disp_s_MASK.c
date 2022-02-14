
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
struct TYPE_8__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_1__* run; TYPE_3__ arch; } ;
struct TYPE_10__ {int * gprs; } ;
struct TYPE_9__ {TYPE_5__ regs; } ;
struct TYPE_7__ {int ipb; } ;
struct TYPE_6__ {TYPE_4__ s; } ;



__attribute__((used)) static inline u64 FUNC_0(struct kvm_vcpu *VAR_0, u8 *VAR_1)
{
 u32 VAR_2 = VAR_0->arch.sie_block->ipb >> 28;
 u32 VAR_3 = ((VAR_0->arch.sie_block->ipb & 0x0fff0000) >> 16);

 if (VAR_1)
  *VAR_1 = VAR_2;

 return (VAR_2 ? VAR_0->run->s.regs.gprs[VAR_2] : 0) + VAR_3;
}
