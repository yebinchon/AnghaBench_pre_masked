
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {unsigned long pc; } ;
struct pt_regs {unsigned long pc; int * regs; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct stackframe*,int ,unsigned long) ;
 int FUNC_2 (int *,struct stackframe*) ;

unsigned long FUNC_3(struct pt_regs *VAR_0)
{
 struct stackframe VAR_1;

 if (!FUNC_0(VAR_0->pc))
  return VAR_0->pc;

 FUNC_1(&VAR_1, VAR_0->regs[29], VAR_0->pc);

 do {
  int VAR_2 = FUNC_2(((void*)0), &VAR_1);
  if (VAR_2 < 0)
   return 0;
 } while (FUNC_0(VAR_1.pc));

 return VAR_1.pc;
}
