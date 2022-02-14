
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_regs*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_7, struct pt_regs *VAR_8, int VAR_9)
{
 if (VAR_8 && FUNC_6(VAR_2))
  FUNC_3(VAR_8);

 FUNC_2(0);
 VAR_5 = -1;
 FUNC_0(VAR_1, VAR_0);
 VAR_4--;
 if (!VAR_4)

  FUNC_1(&VAR_3);
 FUNC_9(VAR_7);
 FUNC_7();

 if (FUNC_5())
  FUNC_8("Fatal exception in interrupt");
 if (VAR_6)
  FUNC_8("Fatal exception");
 if (VAR_9)
  FUNC_4(VAR_9);
}
