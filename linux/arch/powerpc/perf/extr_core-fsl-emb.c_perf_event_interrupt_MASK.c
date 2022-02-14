
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_event {int dummy; } ;
struct cpu_hw_events {struct perf_event** event; } ;
struct TYPE_2__ {int n_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct pt_regs*) ;
 TYPE_1__* VAR_5 ;
 unsigned long FUNC_9 (int) ;
 int FUNC_10 (struct perf_event*,unsigned long,struct pt_regs*) ;
 struct cpu_hw_events* FUNC_11 (int *) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static void FUNC_13(struct pt_regs *VAR_6)
{
 int VAR_7;
 struct cpu_hw_events *VAR_8 = FUNC_11(&VAR_4);
 struct perf_event *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_8(VAR_6);
 if (VAR_12)
  FUNC_6();
 else
  FUNC_0();

 for (VAR_7 = 0; VAR_7 < VAR_5->n_counter; ++VAR_7) {
  VAR_9 = VAR_8->event[VAR_7];

  VAR_10 = FUNC_9(VAR_7);
  if ((int)VAR_10 < 0) {
   if (VAR_9) {

    VAR_11 = 1;
    FUNC_10(VAR_9, VAR_10, VAR_6);
   } else {




    FUNC_12(VAR_7, 0);
   }
  }
 }


 FUNC_4(FUNC_3() | VAR_0);
 FUNC_5(VAR_3, VAR_2 | VAR_1);
 FUNC_2();

 if (VAR_12)
  FUNC_7();
 else
  FUNC_1();
}
