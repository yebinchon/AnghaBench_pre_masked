
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long VAR_0 ;
 struct task_struct* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_3, unsigned long *VAR_4)
{
 unsigned long *VAR_5, *VAR_6;
 int VAR_7;

 if (!VAR_4) {
  if (VAR_3 && VAR_3 != VAR_1)


   VAR_4 = (unsigned long *)FUNC_3(VAR_3);
  else
   VAR_4 = (unsigned long *)&VAR_4;
 }
 VAR_6 = (unsigned long *)(((unsigned long)VAR_4 + VAR_0 - 1)
         & -VAR_0);

 FUNC_1("Stack from %08lx:", (unsigned long)VAR_4);
 for (VAR_7 = 0, VAR_5 = VAR_4; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_5 + 1 > VAR_6)
   break;
  if (VAR_7 % 8 == 0)
   FUNC_0("\n	    ");
  FUNC_0(" %08lx", *VAR_5++);
 }
 FUNC_0("\n");
 FUNC_2(VAR_4, VAR_6);
}
