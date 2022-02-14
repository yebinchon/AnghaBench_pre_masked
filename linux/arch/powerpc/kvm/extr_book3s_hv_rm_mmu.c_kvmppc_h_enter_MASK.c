
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * gpr; } ;
struct TYPE_4__ {TYPE_1__ regs; int pgdir; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;


 long FUNC_0 (int ,unsigned long,long,unsigned long,unsigned long,int ,int,int *) ;

long FUNC_1(struct kvm_vcpu *VAR_0, unsigned long VAR_1,
      long VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 return FUNC_0(VAR_0->kvm, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_0->arch.pgdir, 1,
     &VAR_0->arch.regs.gpr[4]);
}
