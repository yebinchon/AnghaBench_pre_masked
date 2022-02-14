
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int syscallno; int * regs; int orig_x0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct pt_regs*,int) ;
 int FUNC_5 (struct pt_regs*,int ) ;

int FUNC_6(struct pt_regs *VAR_4)
{
 if (FUNC_3(VAR_2) ||
  FUNC_3(VAR_1)) {
  FUNC_5(VAR_4, VAR_0);
  if (!FUNC_1(VAR_4) || FUNC_3(VAR_1))
   return -1;
 }


 if (FUNC_2(((void*)0)) == -1)
  return -1;

 if (FUNC_3(VAR_3))
  FUNC_4(VAR_4, VAR_4->syscallno);

 FUNC_0(VAR_4->syscallno, VAR_4->orig_x0, VAR_4->regs[1],
       VAR_4->regs[2], VAR_4->regs[3]);

 return VAR_4->syscallno;
}
