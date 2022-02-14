
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * iasq; int * iaoq; int cr27; int ipsw; int ior; int isr; int iir; int sar; int * sr; int fr; int gr; } ;
struct parisc_gdb_regs {int iasq_b; int iaoq_b; int iasq_f; int iaoq_f; int cr27; int ipsw; int ior; int isr; int iir; int sar; int sr7; int sr6; int sr5; int sr4; int sr3; int sr2; int sr1; int sr0; int fr; int gpr; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct parisc_gdb_regs*,int ,int) ;

void FUNC_2(unsigned long *VAR_0, struct pt_regs *VAR_1)
{
 struct parisc_gdb_regs *VAR_2 = (struct parisc_gdb_regs *)VAR_0;

 FUNC_1(VAR_2, 0, sizeof(struct parisc_gdb_regs));

 FUNC_0(VAR_2->gpr, VAR_1->gr, sizeof(VAR_2->gpr));
 FUNC_0(VAR_2->fr, VAR_1->fr, sizeof(VAR_2->fr));

 VAR_2->sr0 = VAR_1->sr[0];
 VAR_2->sr1 = VAR_1->sr[1];
 VAR_2->sr2 = VAR_1->sr[2];
 VAR_2->sr3 = VAR_1->sr[3];
 VAR_2->sr4 = VAR_1->sr[4];
 VAR_2->sr5 = VAR_1->sr[5];
 VAR_2->sr6 = VAR_1->sr[6];
 VAR_2->sr7 = VAR_1->sr[7];

 VAR_2->sar = VAR_1->sar;
 VAR_2->iir = VAR_1->iir;
 VAR_2->isr = VAR_1->isr;
 VAR_2->ior = VAR_1->ior;
 VAR_2->ipsw = VAR_1->ipsw;
 VAR_2->cr27 = VAR_1->cr27;

 VAR_2->iaoq_f = VAR_1->iaoq[0];
 VAR_2->iasq_f = VAR_1->iasq[0];

 VAR_2->iaoq_b = VAR_1->iaoq[1];
 VAR_2->iasq_b = VAR_1->iasq[1];
}
