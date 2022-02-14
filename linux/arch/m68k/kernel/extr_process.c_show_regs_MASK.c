
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int sr; int d1; int d2; int d3; int d4; int d5; int a0; int a1; int a2; int d0; int orig_d0; int pc; int vector; int format; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct pt_regs * VAR_1)
{
 FUNC_0("Format %02x  Vector: %04x  PC: %08lx  Status: %04x    %s\n",
  VAR_1->format, VAR_1->vector, VAR_1->pc, VAR_1->sr,
  FUNC_1());
 FUNC_0("ORIG_D0: %08lx  D0: %08lx  A2: %08lx  A1: %08lx\n",
  VAR_1->orig_d0, VAR_1->d0, VAR_1->a2, VAR_1->a1);
 FUNC_0("A0: %08lx  D5: %08lx  D4: %08lx\n", VAR_1->a0, VAR_1->d5,
  VAR_1->d4);
 FUNC_0("D3: %08lx  D2: %08lx  D1: %08lx\n", VAR_1->d3, VAR_1->d2,
  VAR_1->d1);
 if (!(VAR_1->sr & VAR_0))
  FUNC_0("USP: %08lx\n", FUNC_2());
}
