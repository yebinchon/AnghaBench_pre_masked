
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_attr {int dummy; } ;
struct TYPE_4__ {scalar_t__ target; } ;
struct perf_event {TYPE_2__ hw; } ;
struct TYPE_3__ {int len; scalar_t__ type; scalar_t__ privilege; } ;
struct arch_hw_breakpoint {int address; TYPE_1__ ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct perf_event*,struct perf_event_attr const*,struct arch_hw_breakpoint*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;

int FUNC_2(struct perf_event *VAR_6,
        const struct perf_event_attr *VAR_7,
        struct arch_hw_breakpoint *VAR_8)
{
 int VAR_9;
 u64 VAR_10, VAR_11;


 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;
 if (FUNC_1(VAR_6)) {
  if (VAR_8->ctrl.len == VAR_4)
   VAR_10 = 0x7;
  else
   VAR_10 = 0x3;
  VAR_11 = VAR_8->address & VAR_10;
  switch (VAR_11) {
  case 0:

   break;
  case 1:
  case 2:

   if (VAR_8->ctrl.len == VAR_3)
    break;


  case 3:

   if (VAR_8->ctrl.len == VAR_2)
    break;


  default:
   return -VAR_5;
  }
 } else {
  if (VAR_8->ctrl.type == VAR_1)
   VAR_10 = 0x3;
  else
   VAR_10 = 0x7;
  VAR_11 = VAR_8->address & VAR_10;
 }

 VAR_8->address &= ~VAR_10;
 VAR_8->ctrl.len <<= VAR_11;





 if (VAR_8->ctrl.privilege == VAR_0 && VAR_6->hw.target)
  return -VAR_5;

 return 0;
}
