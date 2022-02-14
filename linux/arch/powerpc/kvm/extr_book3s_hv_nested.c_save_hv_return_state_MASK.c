
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcore {int vtb; int dpdes; } ;
struct TYPE_3__ {int sprg3; int sprg2; int sprg1; int sprg0; int srr1; int srr0; } ;
struct TYPE_4__ {int emul_inst; int fault_gpa; int fault_dsisr; int fault_dar; int ppr; int cfar; int pid; TYPE_1__ shregs; int ic; int spurr; int purr; int hfscr; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct hv_guest_state {int heir; int asdr; int hdsisr; int hdar; int ppr; int cfar; int pidr; int * sprg; int srr1; int srr0; int vtb; int ic; int spurr; int purr; int hfscr; int dpdes; } ;






__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0, int VAR_1,
     struct hv_guest_state *VAR_2)
{
 struct kvmppc_vcore *VAR_3 = VAR_0->arch.vcore;

 VAR_2->dpdes = VAR_3->dpdes;
 VAR_2->hfscr = VAR_0->arch.hfscr;
 VAR_2->purr = VAR_0->arch.purr;
 VAR_2->spurr = VAR_0->arch.spurr;
 VAR_2->ic = VAR_0->arch.ic;
 VAR_2->vtb = VAR_3->vtb;
 VAR_2->srr0 = VAR_0->arch.shregs.srr0;
 VAR_2->srr1 = VAR_0->arch.shregs.srr1;
 VAR_2->sprg[0] = VAR_0->arch.shregs.sprg0;
 VAR_2->sprg[1] = VAR_0->arch.shregs.sprg1;
 VAR_2->sprg[2] = VAR_0->arch.shregs.sprg2;
 VAR_2->sprg[3] = VAR_0->arch.shregs.sprg3;
 VAR_2->pidr = VAR_0->arch.pid;
 VAR_2->cfar = VAR_0->arch.cfar;
 VAR_2->ppr = VAR_0->arch.ppr;
 switch (VAR_1) {
 case 130:
  VAR_2->hdar = VAR_0->arch.fault_dar;
  VAR_2->hdsisr = VAR_0->arch.fault_dsisr;
  VAR_2->asdr = VAR_0->arch.fault_gpa;
  break;
 case 128:
  VAR_2->asdr = VAR_0->arch.fault_gpa;
  break;
 case 129:
  VAR_2->heir = VAR_0->arch.emul_inst;
  break;
 }
}
