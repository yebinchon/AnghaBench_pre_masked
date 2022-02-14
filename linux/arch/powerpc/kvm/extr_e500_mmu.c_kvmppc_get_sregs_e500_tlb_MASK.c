
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* tlbcfg; int mmucfg; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_7__ {scalar_t__* tlbcfg; int mmucfg; int mas6; int mas4; int mas7_3; int mas2; int mas1; int mas0; } ;
struct TYPE_8__ {TYPE_3__ e; } ;
struct kvm_sregs {TYPE_4__ u; } ;
struct TYPE_5__ {int mas6; int mas4; int mas7_3; int mas2; int mas1; int mas0; } ;



void FUNC_0(struct kvm_vcpu *VAR_0, struct kvm_sregs *VAR_1)
{
 VAR_1->u.e.mas0 = VAR_0->arch.shared->mas0;
 VAR_1->u.e.mas1 = VAR_0->arch.shared->mas1;
 VAR_1->u.e.mas2 = VAR_0->arch.shared->mas2;
 VAR_1->u.e.mas7_3 = VAR_0->arch.shared->mas7_3;
 VAR_1->u.e.mas4 = VAR_0->arch.shared->mas4;
 VAR_1->u.e.mas6 = VAR_0->arch.shared->mas6;

 VAR_1->u.e.mmucfg = VAR_0->arch.mmucfg;
 VAR_1->u.e.tlbcfg[0] = VAR_0->arch.tlbcfg[0];
 VAR_1->u.e.tlbcfg[1] = VAR_0->arch.tlbcfg[1];
 VAR_1->u.e.tlbcfg[2] = 0;
 VAR_1->u.e.tlbcfg[3] = 0;
}
