
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcore {int vtb; int dpdes; } ;
struct TYPE_3__ {int sprg3; int sprg2; int sprg1; int sprg0; int srr1; int srr0; } ;
struct TYPE_4__ {int ppr; int cfar; int pid; TYPE_1__ shregs; int emul_inst; int fault_gpa; int fault_dsisr; int fault_dar; int ic; int spurr; int purr; int hfscr; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct hv_guest_state {int ppr; int cfar; int pidr; int * sprg; int srr1; int srr0; int heir; int asdr; int hdsisr; int hdar; int vtb; int ic; int spurr; int purr; int hfscr; int dpdes; } ;



void FUNC_0(struct kvm_vcpu *VAR_0,
       struct hv_guest_state *VAR_1)
{
 struct kvmppc_vcore *VAR_2 = VAR_0->arch.vcore;

 VAR_2->dpdes = VAR_1->dpdes;
 VAR_0->arch.hfscr = VAR_1->hfscr;
 VAR_0->arch.purr = VAR_1->purr;
 VAR_0->arch.spurr = VAR_1->spurr;
 VAR_0->arch.ic = VAR_1->ic;
 VAR_2->vtb = VAR_1->vtb;
 VAR_0->arch.fault_dar = VAR_1->hdar;
 VAR_0->arch.fault_dsisr = VAR_1->hdsisr;
 VAR_0->arch.fault_gpa = VAR_1->asdr;
 VAR_0->arch.emul_inst = VAR_1->heir;
 VAR_0->arch.shregs.srr0 = VAR_1->srr0;
 VAR_0->arch.shregs.srr1 = VAR_1->srr1;
 VAR_0->arch.shregs.sprg0 = VAR_1->sprg[0];
 VAR_0->arch.shregs.sprg1 = VAR_1->sprg[1];
 VAR_0->arch.shregs.sprg2 = VAR_1->sprg[2];
 VAR_0->arch.shregs.sprg3 = VAR_1->sprg[3];
 VAR_0->arch.pid = VAR_1->pidr;
 VAR_0->arch.cfar = VAR_1->cfar;
 VAR_0->arch.ppr = VAR_1->ppr;
}
