
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nip; } ;
struct TYPE_6__ {TYPE_2__ regs; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int msr; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,unsigned int) ;

void FUNC_1(struct kvm_vcpu *VAR_1)
{
 unsigned int VAR_2 = !!(VAR_1->arch.shared->msr & VAR_0);

 FUNC_0(VAR_1, VAR_1->arch.regs.nip, VAR_2);
}
