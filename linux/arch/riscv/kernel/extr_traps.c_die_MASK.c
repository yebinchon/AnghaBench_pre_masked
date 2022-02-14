
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int scause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char const*,struct pt_regs*,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct pt_regs*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct pt_regs *VAR_7, const char *VAR_8)
{
 static int VAR_9;
 int VAR_10;

 FUNC_6();

 FUNC_12(&VAR_5);
 FUNC_2();
 FUNC_1(1);

 FUNC_9("%s [#%d]\n", VAR_8, ++VAR_9);
 FUNC_10();
 FUNC_11(VAR_7);

 VAR_10 = FUNC_5(VAR_0, VAR_8, VAR_7, 0, VAR_7->scause, VAR_3);

 FUNC_1(0);
 FUNC_0(VAR_4, VAR_1);
 FUNC_13(&VAR_5);
 FUNC_7();

 if (FUNC_4())
  FUNC_8("Fatal exception in interrupt");
 if (VAR_6)
  FUNC_8("Fatal exception");
 if (VAR_10 != VAR_2)
  FUNC_3(VAR_3);
}
