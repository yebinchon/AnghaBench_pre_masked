
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct arch_hw_breakpoint {TYPE_2__ step_ctrl; TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (char*) ;
 struct perf_event** FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int,int ) ;

void FUNC_4(struct perf_event *VAR_7)
{
 struct arch_hw_breakpoint *VAR_8 = FUNC_0(VAR_7);
 struct perf_event **VAR_9, **VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (VAR_8->ctrl.type == VAR_2) {

  VAR_13 = VAR_0;
  VAR_10 = FUNC_2(VAR_3);
  VAR_12 = VAR_4;
 } else {

  VAR_13 = VAR_1;
  VAR_10 = FUNC_2(VAR_6);
  VAR_12 = VAR_5;
 }


 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  VAR_9 = &VAR_10[VAR_11];

  if (*VAR_9 == VAR_7) {
   *VAR_9 = ((void*)0);
   break;
  }
 }

 if (VAR_11 == VAR_12) {
  FUNC_1("Can't find any breakpoint slot\n");
  return;
 }


 if (VAR_8->ctrl.type != VAR_2 &&
     VAR_8->step_ctrl.enabled) {
  VAR_11 = 0;
  VAR_13 = VAR_0 + VAR_4;
 }


 FUNC_3(VAR_13 + VAR_11, 0);
}
