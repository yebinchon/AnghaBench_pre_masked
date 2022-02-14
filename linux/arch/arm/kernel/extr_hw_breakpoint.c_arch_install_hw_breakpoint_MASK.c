
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ enabled; } ;
struct arch_hw_breakpoint {int address; int trigger; TYPE_1__ ctrl; TYPE_1__ step_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (char*) ;
 struct perf_event** FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct perf_event *VAR_10)
{
 struct arch_hw_breakpoint *VAR_11 = FUNC_0(VAR_10);
 struct perf_event **VAR_12, **VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;

 VAR_18 = VAR_11->address;
 VAR_19 = FUNC_1(VAR_11->ctrl) | 0x1;

 if (VAR_11->ctrl.type == VAR_4) {

  VAR_16 = VAR_0;
  VAR_17 = VAR_1;
  VAR_13 = FUNC_3(VAR_6);
  VAR_15 = VAR_7;
 } else {

  VAR_16 = VAR_2;
  VAR_17 = VAR_3;
  VAR_13 = FUNC_3(VAR_9);
  VAR_15 = VAR_8;
 }

 for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
  VAR_12 = &VAR_13[VAR_14];

  if (!*VAR_12) {
   *VAR_12 = VAR_10;
   break;
  }
 }

 if (VAR_14 == VAR_15) {
  FUNC_2("Can't find any breakpoint slot\n");
  return -VAR_5;
 }


 if (VAR_11->step_ctrl.enabled) {
  VAR_18 = VAR_11->trigger & ~0x3;
  VAR_19 = FUNC_1(VAR_11->step_ctrl);
  if (VAR_11->ctrl.type != VAR_4) {
   VAR_14 = 0;
   VAR_16 = VAR_0 + VAR_7;
   VAR_17 = VAR_1 + VAR_7;
  }
 }


 FUNC_4(VAR_17 + VAR_14, VAR_18);


 FUNC_4(VAR_16 + VAR_14, VAR_19);
 return 0;
}
