
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ pc; int orig_gpr11; int * gpr; scalar_t__ sp; int sr; } ;
struct TYPE_2__ {int pid; int comm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char,unsigned char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,unsigned long*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

void FUNC_5(struct pt_regs *VAR_2)
{
 int VAR_3;
 int VAR_4 = 1;
 unsigned long VAR_5;

 VAR_5 = (unsigned long)(VAR_2->sp);
 if (FUNC_4(VAR_2))
  VAR_4 = 0;

 FUNC_1("CPU #: %d\n"
        "   PC: %08lx    SR: %08lx    SP: %08lx\n",
        FUNC_3(), VAR_2->pc, VAR_2->sr, VAR_2->sp);
 FUNC_1("GPR00: %08lx GPR01: %08lx GPR02: %08lx GPR03: %08lx\n",
        0L, VAR_2->gpr[1], VAR_2->gpr[2], VAR_2->gpr[3]);
 FUNC_1("GPR04: %08lx GPR05: %08lx GPR06: %08lx GPR07: %08lx\n",
        VAR_2->gpr[4], VAR_2->gpr[5], VAR_2->gpr[6], VAR_2->gpr[7]);
 FUNC_1("GPR08: %08lx GPR09: %08lx GPR10: %08lx GPR11: %08lx\n",
        VAR_2->gpr[8], VAR_2->gpr[9], VAR_2->gpr[10], VAR_2->gpr[11]);
 FUNC_1("GPR12: %08lx GPR13: %08lx GPR14: %08lx GPR15: %08lx\n",
        VAR_2->gpr[12], VAR_2->gpr[13], VAR_2->gpr[14], VAR_2->gpr[15]);
 FUNC_1("GPR16: %08lx GPR17: %08lx GPR18: %08lx GPR19: %08lx\n",
        VAR_2->gpr[16], VAR_2->gpr[17], VAR_2->gpr[18], VAR_2->gpr[19]);
 FUNC_1("GPR20: %08lx GPR21: %08lx GPR22: %08lx GPR23: %08lx\n",
        VAR_2->gpr[20], VAR_2->gpr[21], VAR_2->gpr[22], VAR_2->gpr[23]);
 FUNC_1("GPR24: %08lx GPR25: %08lx GPR26: %08lx GPR27: %08lx\n",
        VAR_2->gpr[24], VAR_2->gpr[25], VAR_2->gpr[26], VAR_2->gpr[27]);
 FUNC_1("GPR28: %08lx GPR29: %08lx GPR30: %08lx GPR31: %08lx\n",
        VAR_2->gpr[28], VAR_2->gpr[29], VAR_2->gpr[30], VAR_2->gpr[31]);
 FUNC_1("  RES: %08lx oGPR11: %08lx\n",
        VAR_2->gpr[11], VAR_2->orig_gpr11);

 FUNC_1("Process %s (pid: %d, stackpage=%08lx)\n",
        VAR_1->comm, VAR_1->pid, (unsigned long)VAR_1);




 if (VAR_4) {

  FUNC_1("\nStack: ");
  FUNC_2(((void*)0), (unsigned long *)VAR_5);

  FUNC_1("\nCode: ");
  if (VAR_2->pc < VAR_0)
   goto bad;

  for (VAR_3 = -24; VAR_3 < 24; VAR_3++) {
   unsigned char VAR_6;
   if (FUNC_0(VAR_6, &((unsigned char *)VAR_2->pc)[VAR_3])) {
bad:
    FUNC_1(" Bad PC value.");
    break;
   }

   if (VAR_3 == 0)
    FUNC_1("(%02x) ", VAR_6);
   else
    FUNC_1("%02x ", VAR_6);
  }
 }
 FUNC_1("\n");
}
