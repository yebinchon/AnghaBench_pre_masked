
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {char** uregs; int gp; int fp; int sp; scalar_t__ lp; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (char*,char*,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,void*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

void FUNC_7(struct pt_regs *VAR_1)
{
 FUNC_5("PC is at %pS\n", (void *)FUNC_1(VAR_1));
 FUNC_5("LP is at %pS\n", (void *)VAR_1->lp);
 FUNC_3("pc : [<%08lx>]    lp : [<%08lx>]    %s\n"
  "sp : %08lx  fp : %08lx  gp : %08lx\n",
  FUNC_1(VAR_1),
  VAR_1->lp, FUNC_4(), VAR_1->sp, VAR_1->fp, VAR_1->gp);
 FUNC_3("r25: %08lx  r24: %08lx\n", VAR_1->uregs[25], VAR_1->uregs[24]);

 FUNC_3("r23: %08lx  r22: %08lx  r21: %08lx  r20: %08lx\n",
  VAR_1->uregs[23], VAR_1->uregs[22],
  VAR_1->uregs[21], VAR_1->uregs[20]);
 FUNC_3("r19: %08lx  r18: %08lx  r17: %08lx  r16: %08lx\n",
  VAR_1->uregs[19], VAR_1->uregs[18],
  VAR_1->uregs[17], VAR_1->uregs[16]);
 FUNC_3("r15: %08lx  r14: %08lx  r13: %08lx  r12: %08lx\n",
  VAR_1->uregs[15], VAR_1->uregs[14],
  VAR_1->uregs[13], VAR_1->uregs[12]);
 FUNC_3("r11: %08lx  r10: %08lx  r9 : %08lx  r8 : %08lx\n",
  VAR_1->uregs[11], VAR_1->uregs[10],
  VAR_1->uregs[9], VAR_1->uregs[8]);
 FUNC_3("r7 : %08lx  r6 : %08lx  r5 : %08lx  r4 : %08lx\n",
  VAR_1->uregs[7], VAR_1->uregs[6], VAR_1->uregs[5], VAR_1->uregs[4]);
 FUNC_3("r3 : %08lx  r2 : %08lx  r1 : %08lx  r0 : %08lx\n",
  VAR_1->uregs[3], VAR_1->uregs[2], VAR_1->uregs[1], VAR_1->uregs[0]);
 FUNC_3("  IRQs o%s  Segment %s\n",
  FUNC_2(VAR_1) ? "n" : "ff",
  FUNC_6(FUNC_0(), VAR_0)? "kernel" : "user");
}
