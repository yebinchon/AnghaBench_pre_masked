
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int,struct pt_regs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pt_regs*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

void FUNC_13(const char *VAR_7, struct pt_regs *VAR_8, int VAR_9)
{
 int VAR_10;
 unsigned long VAR_11;

 FUNC_11(&VAR_5, VAR_11);

 FUNC_8();

 FUNC_3();
 FUNC_2(1);
 VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_8);

 if (VAR_8 && FUNC_7(VAR_4))
  FUNC_4(VAR_8);

 FUNC_2(0);
 FUNC_1(VAR_3, VAR_0);
 FUNC_9();

 if (FUNC_6())
  FUNC_10("Fatal exception in interrupt");
 if (VAR_6)
  FUNC_10("Fatal exception");

 FUNC_12(&VAR_5, VAR_11);

 if (VAR_10 != VAR_1)
  FUNC_5(VAR_2);
}
