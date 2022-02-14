
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_hw_breakpoint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,struct arch_hw_breakpoint*,int) ;
 int FUNC_4 (struct arch_hw_breakpoint*) ;
 int FUNC_5 (struct arch_hw_breakpoint*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct arch_hw_breakpoint *VAR_2)
{
 FUNC_3(FUNC_6(&VAR_1), VAR_2, sizeof(*VAR_2));

 if (FUNC_2())

  FUNC_5(VAR_2);
 else if (!FUNC_1(VAR_0))

  FUNC_4(VAR_2);
 else

  FUNC_0(1);
}
