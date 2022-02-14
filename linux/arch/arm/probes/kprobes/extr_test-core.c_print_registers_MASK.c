
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ARM_cpsr; int ARM_pc; int ARM_lr; int ARM_sp; int ARM_ip; int ARM_fp; int ARM_r10; int ARM_r9; int ARM_r8; int ARM_r7; int ARM_r6; int ARM_r5; int ARM_r4; int ARM_r3; int ARM_r2; int ARM_r1; int ARM_r0; } ;


 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_0)
{
 FUNC_0("r0  %08lx | r1  %08lx | r2  %08lx | r3  %08lx\n",
  VAR_0->ARM_r0, VAR_0->ARM_r1, VAR_0->ARM_r2, VAR_0->ARM_r3);
 FUNC_0("r4  %08lx | r5  %08lx | r6  %08lx | r7  %08lx\n",
  VAR_0->ARM_r4, VAR_0->ARM_r5, VAR_0->ARM_r6, VAR_0->ARM_r7);
 FUNC_0("r8  %08lx | r9  %08lx | r10 %08lx | r11 %08lx\n",
  VAR_0->ARM_r8, VAR_0->ARM_r9, VAR_0->ARM_r10, VAR_0->ARM_fp);
 FUNC_0("r12 %08lx | sp  %08lx | lr  %08lx | pc  %08lx\n",
  VAR_0->ARM_ip, VAR_0->ARM_sp, VAR_0->ARM_lr, VAR_0->ARM_pc);
 FUNC_0("cpsr %08lx\n", VAR_0->ARM_cpsr);
}
