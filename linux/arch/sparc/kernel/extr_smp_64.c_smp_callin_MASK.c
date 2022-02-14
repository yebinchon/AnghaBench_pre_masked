
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * active_mm; } ;
struct TYPE_3__ {scalar_t__ new_child; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int,int) ;
 int FUNC_13 () ;
 int VAR_7 ;
 int FUNC_14 () ;
 scalar_t__ VAR_8 ;

void FUNC_15(void)
{
 int VAR_9 = FUNC_6();

 VAR_1 = FUNC_1(VAR_9);

 if (VAR_8 == VAR_5)
  FUNC_14();

 FUNC_0();

 FUNC_13();

 if (VAR_3)
  FUNC_2();

 VAR_2 = 1;
 __asm__ __volatile__("membar #Sync\n\t"
        "flush  %%g6" : : : "memory");




 FUNC_5()->new_child = 0;


 FUNC_8(&VAR_6);
 VAR_4->active_mm = &VAR_6;


 FUNC_9(VAR_9);

 while (!FUNC_4(VAR_9, &VAR_7))
  FUNC_11();

 FUNC_12(VAR_9, 1);


 FUNC_10();

 FUNC_7();

 FUNC_3(VAR_0);
}
