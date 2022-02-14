
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ,char const*,struct pt_regs*,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(const char *VAR_4, struct pt_regs *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_4();

 if (FUNC_1(VAR_0, VAR_4, VAR_5, 0,
         FUNC_3(VAR_5), VAR_2) == VAR_1)
  return;

 if (VAR_6 || VAR_3)
  FUNC_2("Watchdog detected hard LOCKUP on cpu %d", VAR_7);
 else
  FUNC_0(1, "Watchdog detected hard LOCKUP on cpu %d", VAR_7);
}
