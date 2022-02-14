
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_book3s_shadow_vcpu {int in_use; int shadow_fscr; int pc; int lr; int ctr; int xer; int cr; int * gpr; } ;
struct TYPE_3__ {int nip; int link; int ctr; int xer; int ccr; int * gpr; } ;
struct TYPE_4__ {int entry_ic; int entry_vtb; int entry_tb; int shadow_fscr; TYPE_1__ regs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvmppc_book3s_shadow_vcpu*) ;

void FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct kvmppc_book3s_shadow_vcpu *VAR_3 = FUNC_4(VAR_2);

 VAR_3->gpr[0] = VAR_2->arch.regs.gpr[0];
 VAR_3->gpr[1] = VAR_2->arch.regs.gpr[1];
 VAR_3->gpr[2] = VAR_2->arch.regs.gpr[2];
 VAR_3->gpr[3] = VAR_2->arch.regs.gpr[3];
 VAR_3->gpr[4] = VAR_2->arch.regs.gpr[4];
 VAR_3->gpr[5] = VAR_2->arch.regs.gpr[5];
 VAR_3->gpr[6] = VAR_2->arch.regs.gpr[6];
 VAR_3->gpr[7] = VAR_2->arch.regs.gpr[7];
 VAR_3->gpr[8] = VAR_2->arch.regs.gpr[8];
 VAR_3->gpr[9] = VAR_2->arch.regs.gpr[9];
 VAR_3->gpr[10] = VAR_2->arch.regs.gpr[10];
 VAR_3->gpr[11] = VAR_2->arch.regs.gpr[11];
 VAR_3->gpr[12] = VAR_2->arch.regs.gpr[12];
 VAR_3->gpr[13] = VAR_2->arch.regs.gpr[13];
 VAR_3->cr = VAR_2->arch.regs.ccr;
 VAR_3->xer = VAR_2->arch.regs.xer;
 VAR_3->ctr = VAR_2->arch.regs.ctr;
 VAR_3->lr = VAR_2->arch.regs.link;
 VAR_3->pc = VAR_2->arch.regs.nip;







 VAR_2->arch.entry_tb = FUNC_1();
 VAR_2->arch.entry_vtb = FUNC_2();
 if (FUNC_0(VAR_0))
  VAR_2->arch.entry_ic = FUNC_3(VAR_1);
 VAR_3->in_use = 1;

 FUNC_5(VAR_3);
}
