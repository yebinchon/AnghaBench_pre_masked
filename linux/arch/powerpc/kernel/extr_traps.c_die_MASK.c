
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 (char const*,struct pt_regs*,long) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;
 unsigned long FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (unsigned long,struct pt_regs*,long) ;

void FUNC_5(const char *VAR_0, struct pt_regs *VAR_1, long VAR_2)
{
 unsigned long VAR_3;




 if (FUNC_0(VAR_1) != 0x100) {
  if (FUNC_2(VAR_1))
   return;
 }

 VAR_3 = FUNC_3(VAR_1);
 if (FUNC_1(VAR_0, VAR_1, VAR_2))
  VAR_2 = 0;
 FUNC_4(VAR_3, VAR_1, VAR_2);
}
