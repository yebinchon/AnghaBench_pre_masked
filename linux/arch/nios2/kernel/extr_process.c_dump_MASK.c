
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {scalar_t__ sp; scalar_t__ ea; int fp; int ra; int orig_r2; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int r7; int r6; int r5; int r4; int r3; int r2; int r1; scalar_t__ estatus; } ;
struct TYPE_4__ {TYPE_1__* mm; int pid; int comm; } ;
struct TYPE_3__ {scalar_t__ start_stack; scalar_t__ brk; scalar_t__ end_data; scalar_t__ start_data; scalar_t__ end_code; scalar_t__ start_code; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(struct pt_regs *VAR_2)
{
 unsigned long *VAR_3;
 unsigned char *VAR_4;
 int VAR_5;

 FUNC_0("\nCURRENT PROCESS:\n\n");
 FUNC_0("COMM=%s PID=%d\n", VAR_1->comm, VAR_1->pid);

 if (VAR_1->mm) {
  FUNC_0("TEXT=%08x-%08x DATA=%08x-%08x BSS=%08x-%08x\n",
   (int) VAR_1->mm->start_code,
   (int) VAR_1->mm->end_code,
   (int) VAR_1->mm->start_data,
   (int) VAR_1->mm->end_data,
   (int) VAR_1->mm->end_data,
   (int) VAR_1->mm->brk);
  FUNC_0("USER-STACK=%08x  KERNEL-STACK=%08x\n\n",
   (int) VAR_1->mm->start_stack,
   (int)(((unsigned long) VAR_1) + VAR_0));
 }

 FUNC_0("PC: %08lx\n", VAR_2->ea);
 FUNC_0("SR: %08lx    SP: %08lx\n",
  (long) VAR_2->estatus, (long) VAR_2);

 FUNC_0("r1: %08lx    r2: %08lx    r3: %08lx\n",
  VAR_2->r1, VAR_2->r2, VAR_2->r3);

 FUNC_0("r4: %08lx    r5: %08lx    r6: %08lx    r7: %08lx\n",
  VAR_2->r4, VAR_2->r5, VAR_2->r6, VAR_2->r7);
 FUNC_0("r8: %08lx    r9: %08lx    r10: %08lx    r11: %08lx\n",
  VAR_2->r8, VAR_2->r9, VAR_2->r10, VAR_2->r11);
 FUNC_0("r12: %08lx  r13: %08lx    r14: %08lx    r15: %08lx\n",
  VAR_2->r12, VAR_2->r13, VAR_2->r14, VAR_2->r15);
 FUNC_0("or2: %08lx   ra: %08lx     fp: %08lx    sp: %08lx\n",
  VAR_2->orig_r2, VAR_2->ra, VAR_2->fp, VAR_2->sp);
 FUNC_0("\nUSP: %08x   TRAPFRAME: %08x\n",
  (unsigned int) VAR_2->sp, (unsigned int) VAR_2);

 FUNC_0("\nCODE:");
 VAR_4 = ((unsigned char *) VAR_2->ea) - 0x20;
 for (VAR_3 = (unsigned long *) VAR_4, VAR_5 = 0; (VAR_5 < 0x40); VAR_5 += 4) {
  if ((VAR_5 % 0x10) == 0)
   FUNC_0("\n%08x: ", (int) (VAR_4 + VAR_5));
  FUNC_0("%08x ", (int) *VAR_3++);
 }
 FUNC_0("\n");

 FUNC_0("\nKERNEL STACK:");
 VAR_4 = ((unsigned char *) VAR_2) - 0x40;
 for (VAR_3 = (unsigned long *) VAR_4, VAR_5 = 0; (VAR_5 < 0xc0); VAR_5 += 4) {
  if ((VAR_5 % 0x10) == 0)
   FUNC_0("\n%08x: ", (int) (VAR_4 + VAR_5));
  FUNC_0("%08x ", (int) *VAR_3++);
 }
 FUNC_0("\n");
 FUNC_0("\n");

 FUNC_0("\nUSER STACK:");
 VAR_4 = (unsigned char *) (VAR_2->sp - 0x10);
 for (VAR_3 = (unsigned long *) VAR_4, VAR_5 = 0; (VAR_5 < 0x80); VAR_5 += 4) {
  if ((VAR_5 % 0x10) == 0)
   FUNC_0("\n%08x: ", (int) (VAR_4 + VAR_5));
  FUNC_0("%08x ", (int) *VAR_3++);
 }
 FUNC_0("\n\n");
}
