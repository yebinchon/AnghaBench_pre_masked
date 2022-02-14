
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 struct task_struct* VAR_0 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 unsigned int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 unsigned int FUNC_5 (struct pt_regs*) ;
 unsigned int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(struct pt_regs *VAR_1, struct task_struct *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5 = 1;

 FUNC_4("Backtrace: ");

 if (!VAR_2)
  VAR_2 = VAR_0;

 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_1);
  VAR_4 = FUNC_5(VAR_1);
 } else if (VAR_2 != VAR_0) {
  VAR_3 = FUNC_6(VAR_2);
  VAR_4 = 0x10;
 } else {
  asm("mov %0, fp" : "=r" (VAR_3) : : "cc");
  VAR_4 = 0x10;
 }

 if (!VAR_3) {
  FUNC_3("no frame pointer");
  VAR_5 = 0;
 } else if (FUNC_7(VAR_3)) {
  FUNC_3("invalid frame pointer 0x%08x", VAR_3);
  VAR_5 = 0;
 } else if (VAR_3 < (unsigned long)FUNC_1(VAR_2))
  FUNC_3("frame pointer underflow");
 FUNC_3("\n");

 if (VAR_5)
  FUNC_0(VAR_3, VAR_4);
}
