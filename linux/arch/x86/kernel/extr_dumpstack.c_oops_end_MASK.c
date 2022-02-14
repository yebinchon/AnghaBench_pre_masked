
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pt_regs*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int) ;

void FUNC_12(unsigned long VAR_9, struct pt_regs *VAR_10, int VAR_11)
{
 if (VAR_10 && FUNC_7(VAR_3))
  FUNC_4(VAR_10);

 FUNC_3(0);
 VAR_6 = -1;
 FUNC_1(VAR_2, VAR_0);
 VAR_5--;
 if (!VAR_5)

  FUNC_2(&VAR_4);
 FUNC_10(VAR_9);
 FUNC_8();


 FUNC_0(&VAR_7, VAR_1);

 if (!VAR_11)
  return;
 if (FUNC_5())
  FUNC_9("Fatal exception in interrupt");
 if (VAR_8)
  FUNC_9("Fatal exception");
 FUNC_6(VAR_3);
 FUNC_11(VAR_11);
}
