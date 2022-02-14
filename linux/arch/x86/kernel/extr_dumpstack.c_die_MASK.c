
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct pt_regs*,long) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long,struct pt_regs*,int) ;

void FUNC_3(const char *VAR_1, struct pt_regs *VAR_2, long VAR_3)
{
 unsigned long VAR_4 = FUNC_1();
 int VAR_5 = VAR_0;

 if (FUNC_0(VAR_1, VAR_2, VAR_3))
  VAR_5 = 0;
 FUNC_2(VAR_4, VAR_2, VAR_5);
}
