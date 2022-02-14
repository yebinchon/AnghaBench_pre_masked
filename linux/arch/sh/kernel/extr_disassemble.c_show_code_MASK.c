
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;


 scalar_t__ FUNC_0 (unsigned short,unsigned short*) ;
 int FUNC_1 (unsigned long,unsigned short) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(struct pt_regs *VAR_0)
{
 unsigned short *VAR_1 = (unsigned short *)VAR_0->pc;
 long VAR_2;

 if (VAR_0->pc & 0x1)
  return;

 FUNC_2("Code:\n");

 for (VAR_2 = -3 ; VAR_2 < 6 ; VAR_2++) {
  unsigned short VAR_3;

  if (FUNC_0(VAR_3, VAR_1 + VAR_2)) {
   FUNC_2(" (Bad address in pc)\n");
   break;
  }

  FUNC_2("%s%08lx:  ", (VAR_2 ? "  ": "->"), (unsigned long)(VAR_1 + VAR_2));
  FUNC_1((unsigned long)(VAR_1 + VAR_2), VAR_3);
  FUNC_2("\n");
 }

 FUNC_2("\n");
}
