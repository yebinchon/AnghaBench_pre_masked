
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ksp; } ;
struct task_struct {TYPE_1__ thread; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;

void FUNC_2(struct task_struct *VAR_3, unsigned long *VAR_4)
{
 unsigned long *VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_4) {
  if (VAR_3)
   VAR_4 = (unsigned long *)VAR_3->thread.ksp;
  else
   VAR_4 = (unsigned long *)&VAR_4;
 }

 VAR_6 = (unsigned long) VAR_4;
 VAR_5 = (unsigned long *) FUNC_0(VAR_6);

 FUNC_1("Stack from %08lx:", (unsigned long)VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_4 + 1 > VAR_5)
   break;
  if (VAR_7 % 8 == 0)
   FUNC_1("\n       ");
  FUNC_1(" %08lx", *VAR_4++);
 }

 FUNC_1("\nCall Trace:");
 VAR_7 = 0;
 while (VAR_4 + 1 <= VAR_5) {
  VAR_6 = *VAR_4++;
  if (((VAR_6 >= (unsigned long) VAR_1) &&
       (VAR_6 <= (unsigned long) VAR_0))) {
   if (VAR_7 % 4 == 0)
    FUNC_1("\n       ");
   FUNC_1(" [<%08lx>]", VAR_6);
   VAR_7++;
  }
 }
 FUNC_1("\n");
}
