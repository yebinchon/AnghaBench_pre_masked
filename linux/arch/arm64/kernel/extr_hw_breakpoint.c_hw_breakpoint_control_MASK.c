
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct perf_event {int dummy; } ;
struct debug_info {int wps_disabled; int bps_disabled; } ;
struct TYPE_5__ {scalar_t__ type; int privilege; } ;
struct arch_hw_breakpoint {int address; TYPE_2__ ctrl; } ;
typedef enum hw_breakpoint_ops { ____Placeholder_hw_breakpoint_ops } hw_breakpoint_ops ;
typedef enum dbg_active_el { ____Placeholder_dbg_active_el } dbg_active_el ;
struct TYPE_4__ {struct debug_info debug; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;



 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct arch_hw_breakpoint* FUNC_1 (struct perf_event*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__) ;
 int FUNC_6 (struct perf_event**,int,struct perf_event*,int) ;
 struct perf_event** FUNC_7 (int ) ;
 int VAR_9 ;
 int FUNC_8 (int,int,int) ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_10,
     enum hw_breakpoint_ops VAR_11)
{
 struct arch_hw_breakpoint *VAR_12 = FUNC_1(VAR_10);
 struct perf_event **VAR_13;
 struct debug_info *VAR_14 = &VAR_8->thread.debug;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 enum dbg_active_el VAR_20 = FUNC_2(VAR_12->ctrl.privilege);
 u32 VAR_21;

 if (VAR_12->ctrl.type == VAR_4) {

  VAR_17 = VAR_0;
  VAR_18 = VAR_1;
  VAR_13 = FUNC_7(VAR_5);
  VAR_16 = VAR_6;
  VAR_19 = !VAR_14->bps_disabled;
 } else {

  VAR_17 = VAR_2;
  VAR_18 = VAR_3;
  VAR_13 = FUNC_7(VAR_9);
  VAR_16 = VAR_7;
  VAR_19 = !VAR_14->wps_disabled;
 }

 VAR_15 = FUNC_6(VAR_13, VAR_16, VAR_10, VAR_11);

 if (FUNC_0(VAR_15 < 0, "Can't find any breakpoint slot"))
  return VAR_15;

 switch (VAR_11) {
 case 130:




  FUNC_4(VAR_20);

 case 129:

  FUNC_8(VAR_18, VAR_15, VAR_12->address);


  VAR_21 = FUNC_5(VAR_12->ctrl);
  FUNC_8(VAR_17, VAR_15,
        VAR_19 ? VAR_21 | 0x1 : VAR_21 & ~0x1);
  break;
 case 128:

  FUNC_8(VAR_17, VAR_15, 0);





  FUNC_3(VAR_20);
  break;
 }

 return 0;
}
