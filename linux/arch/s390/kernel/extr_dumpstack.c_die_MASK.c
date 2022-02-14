
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int int_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char const*,struct pt_regs*,int ,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char const*,int,int,int) ;
 int FUNC_15 (struct pt_regs*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

void FUNC_18(struct pt_regs *VAR_6, const char *VAR_7)
{
 static int VAR_8;

 FUNC_9();
 FUNC_7();
 FUNC_4();
 FUNC_2();
 FUNC_16(&VAR_4);
 FUNC_1(1);
 FUNC_14("%s: %04x ilc:%d [#%d] ", VAR_7, VAR_6->int_code & 0xffff,
        VAR_6->int_code >> 17, ++VAR_8);



 FUNC_12("SMP ");
 if (FUNC_3())
  FUNC_12("DEBUG_PAGEALLOC");
 FUNC_12("\n");
 FUNC_8(VAR_0, VAR_7, VAR_6, 0, VAR_6->int_code & 0xffff, VAR_2);
 FUNC_13();
 FUNC_15(VAR_6);
 FUNC_1(0);
 FUNC_0(VAR_3, VAR_1);
 FUNC_17(&VAR_4);
 if (FUNC_6())
  FUNC_11("Fatal exception in interrupt");
 if (VAR_5)
  FUNC_11("Fatal exception: panic_on_oops");
 FUNC_10();
 FUNC_5(VAR_2);
}
