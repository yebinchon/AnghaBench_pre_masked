
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_9__ {int precise_ip; int branch_sample_type; scalar_t__ type; int config; scalar_t__ sample_period; int sample_regs_user; int sample_regs_intr; int exclude_kernel; int exclude_user; } ;
struct TYPE_7__ {int config; } ;
struct perf_event {TYPE_4__ attr; TYPE_3__* pmu; TYPE_2__ hw; int attach_state; } ;
struct TYPE_6__ {int pebs_format; } ;
struct TYPE_10__ {scalar_t__ (* limit_period ) (struct perf_event*,scalar_t__) ;TYPE_1__ intel_cap; } ;
struct TYPE_8__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (struct perf_event*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_5__ VAR_14 ;
 int FUNC_5 () ;
 int FUNC_6 (struct perf_event*) ;

int FUNC_7(struct perf_event *VAR_15)
{
 if (VAR_15->attr.precise_ip) {
  int VAR_16 = FUNC_5();

  if (VAR_15->attr.precise_ip > VAR_16)
   return -VAR_4;


  if (!FUNC_1(VAR_15))
   return -VAR_3;
 }




 if (VAR_15->attr.precise_ip > 1 && VAR_14.intel_cap.pebs_format < 2) {
  u64 *VAR_17 = &VAR_15->attr.branch_sample_type;

  if (FUNC_0(VAR_15)) {
   if (!FUNC_2(VAR_15))
    return -VAR_4;



  } else {







   *VAR_17 = VAR_8;

   if (!VAR_15->attr.exclude_user)
    *VAR_17 |= VAR_11;

   if (!VAR_15->attr.exclude_kernel)
    *VAR_17 |= VAR_10;
  }
 }

 if (VAR_15->attr.branch_sample_type & VAR_9)
  VAR_15->attach_state |= VAR_5;





 VAR_15->hw.config = VAR_0;




 if (!VAR_15->attr.exclude_user)
  VAR_15->hw.config |= VAR_2;
 if (!VAR_15->attr.exclude_kernel)
  VAR_15->hw.config |= VAR_1;

 if (VAR_15->attr.type == VAR_12)
  VAR_15->hw.config |= VAR_15->attr.config & VAR_13;

 if (VAR_15->attr.sample_period && VAR_14.limit_period) {
  if (VAR_14.limit_period(VAR_15, VAR_15->attr.sample_period) >
    VAR_15->attr.sample_period)
   return -VAR_3;
 }


 if (FUNC_4(VAR_15->attr.sample_regs_user & VAR_7))
  return -VAR_3;




 if (FUNC_4(VAR_15->attr.sample_regs_intr & VAR_7)) {
  if (!(VAR_15->pmu->capabilities & VAR_6))
   return -VAR_3;

  if (!VAR_15->attr.precise_ip)
   return -VAR_3;
 }

 return FUNC_6(VAR_15);
}
