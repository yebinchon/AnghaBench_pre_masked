
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ARM_pc; } ;
typedef enum bug_trap_type { ____Placeholder_bug_trap_type } bug_trap_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,struct pt_regs*) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long,struct pt_regs*,int) ;
 int FUNC_3 (int ,struct pt_regs*) ;
 int FUNC_4 (struct pt_regs*) ;

void FUNC_5(const char *VAR_2, struct pt_regs *VAR_3, int VAR_4)
{
 enum bug_trap_type VAR_5 = VAR_0;
 unsigned long VAR_6 = FUNC_1();
 int VAR_7 = VAR_1;

 if (!FUNC_4(VAR_3))
  VAR_5 = FUNC_3(VAR_3->ARM_pc, VAR_3);
 if (VAR_5 != VAR_0)
  VAR_2 = "Oops - BUG";

 if (FUNC_0(VAR_2, VAR_4, VAR_3))
  VAR_7 = 0;

 FUNC_2(VAR_6, VAR_3, VAR_7);
}
