
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int * regs; } ;
struct TYPE_5__ {char const* comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char const*,struct pt_regs*,long,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char const*,long,int) ;
 int FUNC_14 (struct pt_regs*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 long FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (struct pt_regs*) ;

void FUNC_20(const char *VAR_8, struct pt_regs *VAR_9, long VAR_10)
{
 static int VAR_11;

 FUNC_9();

 FUNC_15(&VAR_6);
 FUNC_2();
 FUNC_1(1);

 FUNC_13("%s: %04lx [#%d]\n", VAR_8, VAR_10 & 0xffff, ++VAR_11);
 FUNC_12();
 FUNC_14(VAR_9);

 FUNC_13("Process: %s (pid: %d, stack limit = %p)\n", VAR_5->comm,
   FUNC_17(VAR_5), FUNC_18(VAR_5) + 1);

 if (!FUNC_19(VAR_9) || FUNC_6())
  FUNC_5("Stack: ", VAR_9->regs[15], VAR_4 +
    (unsigned long)FUNC_18(VAR_5));

 FUNC_8(VAR_0, VAR_8, VAR_9, VAR_10, 255, VAR_2);

 FUNC_1(0);
 FUNC_0(VAR_3, VAR_1);
 FUNC_16(&VAR_6);
 FUNC_10();

 if (FUNC_7(VAR_5))
  FUNC_3(VAR_9);

 if (FUNC_6())
  FUNC_11("Fatal exception in interrupt");

 if (VAR_7)
  FUNC_11("Fatal exception");

 FUNC_4(VAR_2);
}
