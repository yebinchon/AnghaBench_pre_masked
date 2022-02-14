
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {TYPE_6__* sie_block; } ;
struct TYPE_11__ {int instruction_sckpf; } ;
struct kvm_vcpu {TYPE_7__ arch; TYPE_3__* run; TYPE_4__ stat; } ;
struct TYPE_12__ {int mask; } ;
struct TYPE_13__ {int todpr; TYPE_5__ gpsw; } ;
struct TYPE_8__ {int* gprs; } ;
struct TYPE_9__ {TYPE_1__ regs; } ;
struct TYPE_10__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_3)
{
 u32 VAR_4;

 VAR_3->stat.instruction_sckpf++;

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_0(VAR_3, VAR_0);

 if (VAR_3->run->s.regs.gprs[0] & 0x00000000ffff0000)
  return FUNC_0(VAR_3,
         VAR_1);

 VAR_4 = VAR_3->run->s.regs.gprs[0] & 0x000000000000ffff;
 VAR_3->arch.sie_block->todpr = VAR_4;

 return 0;
}
