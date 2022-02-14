
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct perf_event_attr {int dummy; } ;
struct TYPE_3__ {int target; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {int len; scalar_t__ type; } ;
struct arch_hw_breakpoint {int address; TYPE_2__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct perf_event*,struct perf_event_attr const*,struct arch_hw_breakpoint*) ;
 scalar_t__ FUNC_1 (struct arch_hw_breakpoint*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct perf_event*) ;
 int FUNC_5 () ;

int FUNC_6(struct perf_event *VAR_8,
        const struct perf_event_attr *VAR_9,
        struct arch_hw_breakpoint *VAR_10)
{
 int VAR_11 = 0;
 u32 VAR_12, VAR_13 = 0x3;


 if (!FUNC_5())
  return -VAR_6;


 VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  goto out;


 if (VAR_10->ctrl.len == VAR_2)
  VAR_13 = 0x7;
 VAR_12 = VAR_10->address & VAR_13;
 switch (VAR_12) {
 case 0:

  break;
 case 1:
 case 2:

  if (VAR_10->ctrl.len == VAR_1)
   break;

 case 3:

  if (VAR_10->ctrl.len == VAR_0)
   break;

 default:
  VAR_11 = -VAR_5;
  goto out;
 }

 VAR_10->address &= ~VAR_13;
 VAR_10->ctrl.len <<= VAR_12;

 if (FUNC_4(VAR_8)) {




  if (!FUNC_2())
   return -VAR_5;


  if (FUNC_1(VAR_10))
   return -VAR_7;





  if (!VAR_8->hw.target)
   return -VAR_5;





  if (!FUNC_3() &&
      (VAR_10->ctrl.type == VAR_3 ||
       VAR_10->ctrl.type == VAR_4))
   return -VAR_5;
 }

out:
 return VAR_11;
}
