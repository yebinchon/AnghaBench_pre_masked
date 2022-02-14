
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int sp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct pt_regs*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_7 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_16 (struct pt_regs*) ;
 int FUNC_17 (scalar_t__) ;

void
FUNC_18(struct pt_regs *VAR_9, long VAR_10)
{
 if (FUNC_0(VAR_0) && FUNC_1(FUNC_11()))
  return;

 if (FUNC_13(VAR_7) != VAR_3) {
  FUNC_14(VAR_7, VAR_2);
  return;
 }
 FUNC_14(VAR_7, VAR_1);
 FUNC_14(VAR_6, FUNC_10());
nmi_restart:
 FUNC_8();

 FUNC_5(VAR_4);

 if (!VAR_5)
  FUNC_4(VAR_9);

 FUNC_9();
 if (FUNC_15(FUNC_13(VAR_6) != FUNC_10()))
  FUNC_17(FUNC_13(VAR_6));
 if (FUNC_12(VAR_7))
  goto nmi_restart;

 if (FUNC_16(VAR_9))
  FUNC_7();
}
