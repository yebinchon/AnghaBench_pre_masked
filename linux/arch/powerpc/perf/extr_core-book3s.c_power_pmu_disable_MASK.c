
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct cpu_hw_events {int disabled; int pmcs_enabled; int* mmcr; scalar_t__ n_added; } ;
struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 TYPE_1__* VAR_13 ;
 struct cpu_hw_events* FUNC_8 (int *) ;
 int FUNC_9 (struct cpu_hw_events*,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct pmu *VAR_14)
{
 struct cpu_hw_events *VAR_15;
 unsigned long VAR_16, VAR_17, VAR_18;

 if (!VAR_13)
  return;
 FUNC_3(VAR_16);
 VAR_15 = FUNC_8(&VAR_12);

 if (!VAR_15->disabled) {



  if (!VAR_15->pmcs_enabled) {
   FUNC_7();
   VAR_15->pmcs_enabled = 1;
  }




  VAR_18 = VAR_17 = FUNC_5(VAR_8);
  VAR_18 |= VAR_2;
  VAR_18 &= ~(VAR_1 | VAR_0 | VAR_5 | VAR_4 |
    VAR_3);






  FUNC_9(VAR_15, VAR_18);
  FUNC_4();
  FUNC_1();




  if (VAR_15->mmcr[2] & VAR_6) {
   FUNC_6(VAR_9,
         VAR_15->mmcr[2] & ~VAR_6);
   FUNC_4();
   FUNC_1();
  }

  VAR_15->disabled = 1;
  VAR_15->n_added = 0;

  FUNC_0(VAR_17);
 }

 FUNC_2(VAR_16);
}
