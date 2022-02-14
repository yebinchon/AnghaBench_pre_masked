
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcore {int pcr; int vtb; int dpdes; } ;
struct TYPE_3__ {int sprg3; int sprg2; int sprg1; int sprg0; int srr1; int srr0; } ;
struct TYPE_4__ {int ppr; int cfar; int pid; TYPE_1__ shregs; int ic; int spurr; int purr; int ciabr; int dawrx; int dawr; int hfscr; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct hv_guest_state {int pcr; int ppr; int cfar; int pidr; int * sprg; int srr1; int srr0; int vtb; int ic; int spurr; int purr; int ciabr; int dawrx0; int dawr0; int hfscr; int dpdes; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_1, struct hv_guest_state *VAR_2)
{
 struct kvmppc_vcore *VAR_3 = VAR_1->arch.vcore;

 VAR_3->pcr = VAR_2->pcr | VAR_0;
 VAR_3->dpdes = VAR_2->dpdes;
 VAR_1->arch.hfscr = VAR_2->hfscr;
 VAR_1->arch.dawr = VAR_2->dawr0;
 VAR_1->arch.dawrx = VAR_2->dawrx0;
 VAR_1->arch.ciabr = VAR_2->ciabr;
 VAR_1->arch.purr = VAR_2->purr;
 VAR_1->arch.spurr = VAR_2->spurr;
 VAR_1->arch.ic = VAR_2->ic;
 VAR_3->vtb = VAR_2->vtb;
 VAR_1->arch.shregs.srr0 = VAR_2->srr0;
 VAR_1->arch.shregs.srr1 = VAR_2->srr1;
 VAR_1->arch.shregs.sprg0 = VAR_2->sprg[0];
 VAR_1->arch.shregs.sprg1 = VAR_2->sprg[1];
 VAR_1->arch.shregs.sprg2 = VAR_2->sprg[2];
 VAR_1->arch.shregs.sprg3 = VAR_2->sprg[3];
 VAR_1->arch.pid = VAR_2->pidr;
 VAR_1->arch.cfar = VAR_2->cfar;
 VAR_1->arch.ppr = VAR_2->ppr;
}
