
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ccr; int nip; } ;
struct TYPE_4__ {int msr; } ;
struct TYPE_5__ {TYPE_3__ regs; int tfhar; TYPE_1__ shregs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

void FUNC_1(struct kvm_vcpu *VAR_1)
{
 VAR_1->arch.shregs.msr &= ~VAR_0;
 VAR_1->arch.regs.nip = VAR_1->arch.tfhar;
 FUNC_0(VAR_1);
 VAR_1->arch.regs.ccr = (VAR_1->arch.regs.ccr & 0x0fffffff) | 0xa0000000;
}
