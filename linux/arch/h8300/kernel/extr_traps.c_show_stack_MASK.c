
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(struct task_struct *VAR_2, unsigned long *VAR_3)
{
 unsigned long *VAR_4, VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0))
  VAR_3 = (unsigned long *) &VAR_3;

 VAR_4 = VAR_3;

 FUNC_2("Stack from %08lx:", (unsigned long)VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (((unsigned long)VAR_4 & (VAR_0 - 1)) >=
      VAR_0-4)
   break;
  if (VAR_6 % 8 == 0)
   FUNC_2(" ");
  FUNC_1(" %08lx", *VAR_4++);
 }

 FUNC_2("\nCall Trace:\n");
 VAR_6 = 0;
 VAR_4 = VAR_3;
 while (((unsigned long)VAR_4 & (VAR_0 - 1)) < VAR_0-4) {
  VAR_5 = *VAR_4++;
  if (FUNC_0(VAR_5)) {
   if (VAR_6 % 4 == 0)
    FUNC_2("       ");
   FUNC_1(" [<%08lx>]", VAR_5);
   VAR_6++;
  }
 }
 FUNC_2("\n");
}
