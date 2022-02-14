
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int idle; int donate_dedicated_cpu; } ;
struct TYPE_4__ {int (* suspend_disable_cpu ) () ;} ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (unsigned int,scalar_t__) ;
 unsigned int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 () ;

__attribute__((used)) static void FUNC_21(void)
{
 unsigned int VAR_4 = FUNC_14();
 unsigned int VAR_5 = FUNC_6();
 u8 VAR_6 = 0;

 FUNC_8();
 FUNC_7();
 if (FUNC_19())
  FUNC_20();
 else
  FUNC_18();

 if (FUNC_4(VAR_4) == VAR_0) {
  FUNC_13(VAR_4, VAR_0);
  if (VAR_3.suspend_disable_cpu)
   VAR_3.suspend_disable_cpu();

  VAR_6 = 2;

  FUNC_3()->idle = 1;
  if (!FUNC_10(FUNC_3()))
   FUNC_3()->donate_dedicated_cpu = 1;

  while (FUNC_4(VAR_4) == VAR_0) {
   while (!FUNC_11()) {
    FUNC_9();
    FUNC_8();
   }

   FUNC_2(VAR_6);
  }

  FUNC_8();

  if (!FUNC_10(FUNC_3()))
   FUNC_3()->donate_dedicated_cpu = 0;
  FUNC_3()->idle = 0;

  if (FUNC_4(VAR_4) == VAR_2) {
   FUNC_17(VAR_5);

   FUNC_5();





   FUNC_15();
  }
 }


 FUNC_1(FUNC_4(VAR_4) != VAR_1);

 FUNC_13(VAR_4, VAR_1);
 FUNC_17(VAR_5);
 FUNC_12();


 FUNC_0();
 for(;;);
}
