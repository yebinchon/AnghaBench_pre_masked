
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_mmu {int reset_msr; int xlate; } ;
struct TYPE_2__ {int slb_nr; int hflags; struct kvmppc_mmu mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct kvm_vcpu *VAR_3)
{
 struct kvmppc_mmu *VAR_4 = &VAR_3->arch.mmu;

 VAR_3->arch.slb_nr = 32;

 VAR_4->xlate = VAR_2;
 VAR_4->reset_msr = VAR_1;

 VAR_3->arch.hflags |= VAR_0;
}
