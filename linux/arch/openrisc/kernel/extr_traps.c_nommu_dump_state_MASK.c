
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; int comm; } ;
struct pt_regs {unsigned long sp; unsigned long pc; int orig_gpr11; int * gpr; int sr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;

void FUNC_3(struct pt_regs *VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 int VAR_6;
 unsigned long VAR_7, VAR_8 = VAR_3->sp;

 FUNC_2("\n\r[nommu_dump_state] :: ea %lx, vector %lx\n\r", VAR_4, VAR_5);

 FUNC_2("CPU #: %d\n"
        "   PC: %08lx    SR: %08lx    SP: %08lx\n",
        0, VAR_3->pc, VAR_3->sr, VAR_3->sp);
 FUNC_2("GPR00: %08lx GPR01: %08lx GPR02: %08lx GPR03: %08lx\n",
        0L, VAR_3->gpr[1], VAR_3->gpr[2], VAR_3->gpr[3]);
 FUNC_2("GPR04: %08lx GPR05: %08lx GPR06: %08lx GPR07: %08lx\n",
        VAR_3->gpr[4], VAR_3->gpr[5], VAR_3->gpr[6], VAR_3->gpr[7]);
 FUNC_2("GPR08: %08lx GPR09: %08lx GPR10: %08lx GPR11: %08lx\n",
        VAR_3->gpr[8], VAR_3->gpr[9], VAR_3->gpr[10], VAR_3->gpr[11]);
 FUNC_2("GPR12: %08lx GPR13: %08lx GPR14: %08lx GPR15: %08lx\n",
        VAR_3->gpr[12], VAR_3->gpr[13], VAR_3->gpr[14], VAR_3->gpr[15]);
 FUNC_2("GPR16: %08lx GPR17: %08lx GPR18: %08lx GPR19: %08lx\n",
        VAR_3->gpr[16], VAR_3->gpr[17], VAR_3->gpr[18], VAR_3->gpr[19]);
 FUNC_2("GPR20: %08lx GPR21: %08lx GPR22: %08lx GPR23: %08lx\n",
        VAR_3->gpr[20], VAR_3->gpr[21], VAR_3->gpr[22], VAR_3->gpr[23]);
 FUNC_2("GPR24: %08lx GPR25: %08lx GPR26: %08lx GPR27: %08lx\n",
        VAR_3->gpr[24], VAR_3->gpr[25], VAR_3->gpr[26], VAR_3->gpr[27]);
 FUNC_2("GPR28: %08lx GPR29: %08lx GPR30: %08lx GPR31: %08lx\n",
        VAR_3->gpr[28], VAR_3->gpr[29], VAR_3->gpr[30], VAR_3->gpr[31]);
 FUNC_2("  RES: %08lx oGPR11: %08lx\n",
        VAR_3->gpr[11], VAR_3->orig_gpr11);

 FUNC_2("Process %s (pid: %d, stackpage=%08lx)\n",
        ((struct task_struct *)(FUNC_0(VAR_1)))->comm,
        ((struct task_struct *)(FUNC_0(VAR_1)))->pid,
        (unsigned long)VAR_1);

 FUNC_2("\nStack: ");
 FUNC_2("Stack dump [0x%08lx]:\n", (unsigned long)VAR_8);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (((long)VAR_8 & (VAR_0 - 1)) == 0)
   break;
  VAR_8++;

  FUNC_2("%lx :: sp + %02d: 0x%08lx\n", VAR_8, VAR_6 * 4,
         *((unsigned long *)(FUNC_0(VAR_8))));
 }
 FUNC_2("\n");

 FUNC_2("Call Trace:   ");
 VAR_6 = 1;
 while (((long)VAR_8 & (VAR_0 - 1)) != 0) {
  VAR_7 = *((unsigned long *)FUNC_0(VAR_8));
  VAR_8++;

  if (FUNC_1(VAR_7)) {
   if (VAR_6 && ((VAR_6 % 6) == 0))
    FUNC_2("\n ");
   FUNC_2(" [<%08lx>]", VAR_7);
   VAR_6++;
  }
 }
 FUNC_2("\n");

 FUNC_2("\nCode: ");

 for (VAR_6 = -24; VAR_6 < 24; VAR_6++) {
  unsigned char VAR_9;
  VAR_9 = ((unsigned char *)(FUNC_0(VAR_3->pc)))[VAR_6];

  if (VAR_6 == 0)
   FUNC_2("(%02x) ", VAR_9);
  else
   FUNC_2("%02x ", VAR_9);
 }
 FUNC_2("\n");
}
