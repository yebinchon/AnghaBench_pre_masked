
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


struct TYPE_14__ {TYPE_6__* sie_block; } ;
struct TYPE_8__ {int instruction_epsw; } ;
struct kvm_vcpu {TYPE_7__ arch; TYPE_4__* run; TYPE_1__ stat; } ;
struct TYPE_12__ {int mask; } ;
struct TYPE_13__ {TYPE_5__ gpsw; } ;
struct TYPE_9__ {int* gprs; } ;
struct TYPE_10__ {TYPE_2__ regs; } ;
struct TYPE_11__ {TYPE_3__ s; } ;


 int FUNC_0 (struct kvm_vcpu*,int*,int*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_0->stat.instruction_epsw++;

 FUNC_0(VAR_0, &VAR_1, &VAR_2);


 VAR_0->run->s.regs.gprs[VAR_1] &= 0xffffffff00000000UL;
 VAR_0->run->s.regs.gprs[VAR_1] |= VAR_0->arch.sie_block->gpsw.mask >> 32;
 if (VAR_2) {
  VAR_0->run->s.regs.gprs[VAR_2] &= 0xffffffff00000000UL;
  VAR_0->run->s.regs.gprs[VAR_2] |=
   VAR_0->arch.sie_block->gpsw.mask & 0x00000000ffffffffUL;
 }
 return 0;
}
