
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ARM_cpsr; int ARM_r0; int ARM_r1; int ARM_r2; int ARM_r3; int ARM_r4; int ARM_r5; int ARM_r6; int ARM_r7; int ARM_r8; int ARM_r9; int ARM_r10; int ARM_fp; int ARM_ip; int ARM_sp; scalar_t__ ARM_lr; int ARM_pc; } ;
typedef int buf ;
struct TYPE_2__ {unsigned int dacr; unsigned int addr_limit; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;
 size_t FUNC_7 (struct pt_regs*) ;
 int * VAR_9 ;
 int FUNC_8 (char*,...) ;
 size_t FUNC_9 (struct pt_regs*) ;
 int * VAR_10 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,char*,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_12 (struct pt_regs*) ;
 scalar_t__ FUNC_13 (struct pt_regs*) ;

void FUNC_14(struct pt_regs *VAR_11)
{
 unsigned long VAR_12;
 char VAR_13[64];

 unsigned int VAR_14, VAR_15;
 VAR_14 = FUNC_3();
 VAR_15 = FUNC_4();



 FUNC_10(VAR_4);

 FUNC_8("PC is at %pS\n", (void *)FUNC_5(VAR_11));
 FUNC_8("LR is at %pS\n", (void *)VAR_11->ARM_lr);
 FUNC_8("pc : [<%08lx>]    lr : [<%08lx>]    psr: %08lx\n",
        VAR_11->ARM_pc, VAR_11->ARM_lr, VAR_11->ARM_cpsr);
 FUNC_8("sp : %08lx  ip : %08lx  fp : %08lx\n",
        VAR_11->ARM_sp, VAR_11->ARM_ip, VAR_11->ARM_fp);
 FUNC_8("r10: %08lx  r9 : %08lx  r8 : %08lx\n",
  VAR_11->ARM_r10, VAR_11->ARM_r9,
  VAR_11->ARM_r8);
 FUNC_8("r7 : %08lx  r6 : %08lx  r5 : %08lx  r4 : %08lx\n",
  VAR_11->ARM_r7, VAR_11->ARM_r6,
  VAR_11->ARM_r5, VAR_11->ARM_r4);
 FUNC_8("r3 : %08lx  r2 : %08lx  r1 : %08lx  r0 : %08lx\n",
  VAR_11->ARM_r3, VAR_11->ARM_r2,
  VAR_11->ARM_r1, VAR_11->ARM_r0);

 VAR_12 = VAR_11->ARM_cpsr;
 VAR_13[0] = VAR_12 & VAR_6 ? 'N' : 'n';
 VAR_13[1] = VAR_12 & VAR_8 ? 'Z' : 'z';
 VAR_13[2] = VAR_12 & VAR_5 ? 'C' : 'c';
 VAR_13[3] = VAR_12 & VAR_7 ? 'V' : 'v';
 VAR_13[4] = '\0';


 {
  const char *VAR_16;

  if ((VAR_14 & FUNC_0(VAR_2)) ==
      FUNC_1(VAR_2, VAR_1))
   VAR_16 = "none";
  else if (VAR_15 == VAR_3)
   VAR_16 = "kernel";
  else
   VAR_16 = "user";

  FUNC_8("Flags: %s  IRQs o%s  FIQs o%s  Mode %s  ISA %s  Segment %s\n",
   VAR_13, FUNC_6(VAR_11) ? "n" : "ff",
   FUNC_2(VAR_11) ? "n" : "ff",
   VAR_10[FUNC_9(VAR_11)],
   VAR_9[FUNC_7(VAR_11)], VAR_16);
 }
}
