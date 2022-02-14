
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_mmu {int * slbia; int * slbie; int * slbfee; int * slbmfev; int * slbmfee; int * slbmte; int is_dcbz32; int ea_to_vp; int esid_to_vsid; int tlbie; int reset_msr; int xlate; int mfsrin; int mtsrin; } ;
struct TYPE_2__ {struct kvmppc_mmu mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(struct kvm_vcpu *VAR_8)
{
 struct kvmppc_mmu *VAR_9 = &VAR_8->arch.mmu;

 VAR_9->mtsrin = VAR_4;
 VAR_9->mfsrin = VAR_3;
 VAR_9->xlate = VAR_7;
 VAR_9->reset_msr = VAR_5;
 VAR_9->tlbie = VAR_6;
 VAR_9->esid_to_vsid = VAR_1;
 VAR_9->ea_to_vp = VAR_0;
 VAR_9->is_dcbz32 = VAR_2;

 VAR_9->slbmte = ((void*)0);
 VAR_9->slbmfee = ((void*)0);
 VAR_9->slbmfev = ((void*)0);
 VAR_9->slbfee = ((void*)0);
 VAR_9->slbie = ((void*)0);
 VAR_9->slbia = ((void*)0);
}
