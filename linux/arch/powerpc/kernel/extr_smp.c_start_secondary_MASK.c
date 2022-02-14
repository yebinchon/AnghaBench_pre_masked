
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * active_mm; } ;
struct TYPE_5__ {int (* take_timebase ) () ;int (* setup_cpu ) (unsigned int) ;} ;
struct TYPE_4__ {int processorCount; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int* VAR_2 ;
 int FUNC_3 (unsigned int) ;
 struct cpumask* FUNC_4 (int) ;
 struct cpumask* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct cpumask*) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned int) ;
 int * VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (unsigned int,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 unsigned int FUNC_18 () ;
 int FUNC_19 (unsigned int) ;
 int FUNC_20 () ;
 int FUNC_21 (unsigned int) ;
 int FUNC_22 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_23 () ;
 TYPE_1__* VAR_11 ;
 int FUNC_24 () ;

void FUNC_25(void *VAR_12)
{
 unsigned int VAR_13 = FUNC_18();
 struct cpumask *(*VAR_14)(int) = FUNC_4;

 FUNC_10(&VAR_5);
 VAR_3->active_mm = &VAR_5;

 FUNC_19(VAR_13);
 FUNC_15(VAR_10);
 FUNC_12();
 VAR_2[VAR_13] = 1;

 if (VAR_8->setup_cpu)
  VAR_8->setup_cpu(VAR_13);
 if (VAR_8->take_timebase)
  VAR_8->take_timebase();

 FUNC_13();
 FUNC_1(VAR_13);

 if (VAR_4)
  VAR_14 = FUNC_5;




 if (!FUNC_7(FUNC_3(VAR_13), VAR_14(VAR_13)))
  VAR_7 = 1;

 FUNC_17(VAR_6[VAR_13]);
 FUNC_16(FUNC_9(VAR_6[VAR_13]));

 FUNC_20();
 FUNC_11(VAR_13);
 FUNC_14(VAR_13, 1);

 FUNC_2();

 FUNC_8();


 FUNC_23();

 FUNC_6(VAR_0);

 FUNC_0();
}
