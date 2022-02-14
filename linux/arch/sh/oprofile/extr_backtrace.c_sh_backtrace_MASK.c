
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pt_regs* const) ;
 int FUNC_1 (int *,struct pt_regs* const,unsigned long*,int *,unsigned int*) ;
 unsigned long* FUNC_2 (unsigned long*,struct pt_regs* const) ;
 int FUNC_3 (struct pt_regs* const) ;

void FUNC_4(struct pt_regs * const VAR_2, unsigned int VAR_3)
{
 unsigned long *VAR_4;




 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 VAR_4 = (unsigned long *)FUNC_0(VAR_2);
 if (!FUNC_3(VAR_2)) {
  if (VAR_3)
   FUNC_1(((void*)0), VAR_2, VAR_4,
         &VAR_1, &VAR_3);
  return;
 }

 while (VAR_3-- && (VAR_4 != ((void*)0)))
  VAR_4 = FUNC_2(VAR_4, VAR_2);
}
