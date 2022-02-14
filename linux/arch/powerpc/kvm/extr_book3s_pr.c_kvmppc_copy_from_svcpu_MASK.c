
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct kvmppc_book3s_shadow_vcpu {int in_use; int shadow_srr1; int shadow_fscr; int last_inst; int fault_dsisr; int fault_dar; int pc; int lr; int ctr; int xer; int cr; int * gpr; } ;
struct TYPE_4__ {int nip; int link; int ctr; int xer; int ccr; int * gpr; } ;
struct TYPE_5__ {int shadow_srr1; scalar_t__ entry_ic; int ic; scalar_t__ entry_vtb; scalar_t__ entry_tb; int spurr; int purr; int shadow_fscr; int last_inst; int fault_dsisr; int fault_dar; TYPE_1__ regs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int vtb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvmppc_book3s_shadow_vcpu*) ;
 TYPE_3__* FUNC_9 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct kvm_vcpu *VAR_4)
{
 struct kvmppc_book3s_shadow_vcpu *VAR_5 = FUNC_7(VAR_4);
 if (!VAR_5->in_use)
  goto out;

 VAR_4->arch.regs.gpr[0] = VAR_5->gpr[0];
 VAR_4->arch.regs.gpr[1] = VAR_5->gpr[1];
 VAR_4->arch.regs.gpr[2] = VAR_5->gpr[2];
 VAR_4->arch.regs.gpr[3] = VAR_5->gpr[3];
 VAR_4->arch.regs.gpr[4] = VAR_5->gpr[4];
 VAR_4->arch.regs.gpr[5] = VAR_5->gpr[5];
 VAR_4->arch.regs.gpr[6] = VAR_5->gpr[6];
 VAR_4->arch.regs.gpr[7] = VAR_5->gpr[7];
 VAR_4->arch.regs.gpr[8] = VAR_5->gpr[8];
 VAR_4->arch.regs.gpr[9] = VAR_5->gpr[9];
 VAR_4->arch.regs.gpr[10] = VAR_5->gpr[10];
 VAR_4->arch.regs.gpr[11] = VAR_5->gpr[11];
 VAR_4->arch.regs.gpr[12] = VAR_5->gpr[12];
 VAR_4->arch.regs.gpr[13] = VAR_5->gpr[13];
 VAR_4->arch.regs.ccr = VAR_5->cr;
 VAR_4->arch.regs.xer = VAR_5->xer;
 VAR_4->arch.regs.ctr = VAR_5->ctr;
 VAR_4->arch.regs.link = VAR_5->lr;
 VAR_4->arch.regs.nip = VAR_5->pc;
 VAR_4->arch.shadow_srr1 = VAR_5->shadow_srr1;
 VAR_4->arch.fault_dar = VAR_5->fault_dar;
 VAR_4->arch.fault_dsisr = VAR_5->fault_dsisr;
 VAR_4->arch.last_inst = VAR_5->last_inst;






 VAR_4->arch.purr += FUNC_1() - VAR_4->arch.entry_tb;
 VAR_4->arch.spurr += FUNC_1() - VAR_4->arch.entry_tb;
 FUNC_9(VAR_4)->vtb += FUNC_2() - VAR_4->arch.entry_vtb;
 if (FUNC_0(VAR_0))
  VAR_4->arch.ic += FUNC_6(VAR_3) - VAR_4->arch.entry_ic;
 VAR_5->in_use = 0;

out:
 FUNC_8(VAR_5);
}
