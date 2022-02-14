
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_mmu {int is_dcbz32; int ea_to_vp; int esid_to_vsid; int tlbie; int reset_msr; int xlate; int slbia; int slbie; int slbfee; int slbmfev; int slbmfee; int slbmte; int mtsrin; int * mfsrin; } ;
struct TYPE_2__ {int hflags; struct kvmppc_mmu mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_0(struct kvm_vcpu *VAR_14)
{
 struct kvmppc_mmu *VAR_15 = &VAR_14->arch.mmu;

 VAR_15->mfsrin = ((void*)0);
 VAR_15->mtsrin = VAR_4;
 VAR_15->slbmte = VAR_11;
 VAR_15->slbmfee = VAR_9;
 VAR_15->slbmfev = VAR_10;
 VAR_15->slbfee = VAR_6;
 VAR_15->slbie = VAR_8;
 VAR_15->slbia = VAR_7;
 VAR_15->xlate = VAR_13;
 VAR_15->reset_msr = VAR_5;
 VAR_15->tlbie = VAR_12;
 VAR_15->esid_to_vsid = VAR_2;
 VAR_15->ea_to_vp = VAR_1;
 VAR_15->is_dcbz32 = VAR_3;

 VAR_14->arch.hflags |= VAR_0;
}
