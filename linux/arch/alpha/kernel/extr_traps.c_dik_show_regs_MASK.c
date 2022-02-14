
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int gp; int r28; int r27; int r25; int r24; int r23; int r22; int r21; int r20; int r19; int r18; int r17; int r16; int r8; int r7; int r6; int r5; int r4; int r3; int r2; int r1; int r0; scalar_t__ r26; scalar_t__ pc; int ps; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,void*,...) ;

void
FUNC_3(struct pt_regs *VAR_0, unsigned long *VAR_1)
{
 FUNC_2("pc = [<%016lx>]  ra = [<%016lx>]  ps = %04lx    %s\n",
        VAR_0->pc, VAR_0->r26, VAR_0->ps, FUNC_1());
 FUNC_2("pc is at %pSR\n", (void *)VAR_0->pc);
 FUNC_2("ra is at %pSR\n", (void *)VAR_0->r26);
 FUNC_2("v0 = %016lx  t0 = %016lx  t1 = %016lx\n",
        VAR_0->r0, VAR_0->r1, VAR_0->r2);
 FUNC_2("t2 = %016lx  t3 = %016lx  t4 = %016lx\n",
         VAR_0->r3, VAR_0->r4, VAR_0->r5);
 FUNC_2("t5 = %016lx  t6 = %016lx  t7 = %016lx\n",
        VAR_0->r6, VAR_0->r7, VAR_0->r8);

 if (VAR_1) {
  FUNC_2("s0 = %016lx  s1 = %016lx  s2 = %016lx\n",
         VAR_1[9], VAR_1[10], VAR_1[11]);
  FUNC_2("s3 = %016lx  s4 = %016lx  s5 = %016lx\n",
         VAR_1[12], VAR_1[13], VAR_1[14]);
  FUNC_2("s6 = %016lx\n", VAR_1[15]);
 }

 FUNC_2("a0 = %016lx  a1 = %016lx  a2 = %016lx\n",
        VAR_0->r16, VAR_0->r17, VAR_0->r18);
 FUNC_2("a3 = %016lx  a4 = %016lx  a5 = %016lx\n",
         VAR_0->r19, VAR_0->r20, VAR_0->r21);
  FUNC_2("t8 = %016lx  t9 = %016lx  t10= %016lx\n",
        VAR_0->r22, VAR_0->r23, VAR_0->r24);
 FUNC_2("t11= %016lx  pv = %016lx  at = %016lx\n",
        VAR_0->r25, VAR_0->r27, VAR_0->r28);
 FUNC_2("gp = %016lx  sp = %p\n", VAR_0->gp, VAR_0+1);



}
