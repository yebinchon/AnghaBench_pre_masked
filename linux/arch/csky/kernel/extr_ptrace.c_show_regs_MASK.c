
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {scalar_t__* regs; scalar_t__ pc; scalar_t__ lr; int rlo; int rhi; int tls; int * exregs; int a3; int a2; int a1; int a0; scalar_t__ sr; int orig_a0; } ;
struct TYPE_4__ {TYPE_1__* mm; int pid; int comm; } ;
struct TYPE_3__ {scalar_t__ start_stack; scalar_t__ brk; scalar_t__ end_data; scalar_t__ start_data; scalar_t__ end_code; scalar_t__ start_code; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,unsigned long*) ;

void FUNC_3(struct pt_regs *VAR_2)
{
 unsigned long *VAR_3;
 unsigned char *VAR_4;
 int VAR_5;

 FUNC_1("\nCURRENT PROCESS:\n\n");
 FUNC_1("COMM=%s PID=%d\n", VAR_1->comm, VAR_1->pid);

 if (VAR_1->mm) {
  FUNC_1("TEXT=%08x-%08x DATA=%08x-%08x BSS=%08x-%08x\n",
         (int) VAR_1->mm->start_code,
         (int) VAR_1->mm->end_code,
         (int) VAR_1->mm->start_data,
         (int) VAR_1->mm->end_data,
         (int) VAR_1->mm->end_data,
         (int) VAR_1->mm->brk);
  FUNC_1("USER-STACK=%08x  KERNEL-STACK=%08x\n\n",
         (int) VAR_1->mm->start_stack,
         (int) (((unsigned long) VAR_1) + 2 * VAR_0));
 }

 FUNC_1("PC: 0x%08lx (%pS)\n", (long)VAR_2->pc, (void *)VAR_2->pc);
 FUNC_1("LR: 0x%08lx (%pS)\n", (long)VAR_2->lr, (void *)VAR_2->lr);
 FUNC_1("SP: 0x%08lx\n", (long)VAR_2);
 FUNC_1("orig_a0: 0x%08lx\n", VAR_2->orig_a0);
 FUNC_1("PSR: 0x%08lx\n", (long)VAR_2->sr);

 FUNC_1(" a0: 0x%08lx   a1: 0x%08lx   a2: 0x%08lx   a3: 0x%08lx\n",
  VAR_2->a0, VAR_2->a1, VAR_2->a2, VAR_2->a3);
 FUNC_1(" r6: 0x%08lx   r7: 0x%08lx   r8: 0x%08lx   r9: 0x%08lx\n",
  VAR_2->regs[0], VAR_2->regs[1], VAR_2->regs[2], VAR_2->regs[3]);
 FUNC_1("r10: 0x%08lx  r11: 0x%08lx  r12: 0x%08lx  r13: 0x%08lx\n",
  VAR_2->regs[4], VAR_2->regs[5], VAR_2->regs[6], VAR_2->regs[7]);
 FUNC_1("r14: 0x%08lx   r1: 0x%08lx  r15: 0x%08lx\n",
  VAR_2->regs[8], VAR_2->regs[9], VAR_2->lr);


 FUNC_1("\nCODE:");
 VAR_4 = ((unsigned char *) VAR_2->pc) - 0x20;
 VAR_4 += ((int)VAR_4 % 4) ? 2 : 0;
 for (VAR_3 = (unsigned long *) VAR_4, VAR_5 = 0; (VAR_5 < 0x40); VAR_5 += 4) {
  if ((VAR_5 % 0x10) == 0)
   FUNC_0("\n%08x: ", (int) (VAR_4 + VAR_5));
  FUNC_0("%08x ", (int) *VAR_3++);
 }
 FUNC_0("\n");

 FUNC_1("\nKERNEL STACK:");
 VAR_4 = ((unsigned char *) VAR_2) - 0x40;
 for (VAR_3 = (unsigned long *) VAR_4, VAR_5 = 0; (VAR_5 < 0xc0); VAR_5 += 4) {
  if ((VAR_5 % 0x10) == 0)
   FUNC_0("\n%08x: ", (int) (VAR_4 + VAR_5));
  FUNC_0("%08x ", (int) *VAR_3++);
 }
 FUNC_0("\n");

 FUNC_2(((void*)0), (unsigned long *)VAR_2->regs[4]);
 return;
}
