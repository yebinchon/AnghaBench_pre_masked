
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {scalar_t__ type; scalar_t__ config; int exclude_hv; int exclude_kernel; int exclude_user; } ;
struct hw_perf_event {int idx; scalar_t__ sample_period; int period_left; scalar_t__ last_period; scalar_t__ config; int config_base; int event_base; } ;
struct perf_event {int (* destroy ) (struct perf_event*) ;struct perf_event* group_leader; struct perf_event_attr attr; struct hw_perf_event hw; } ;
struct mips_perf_event {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_period; struct mips_perf_event* (* map_raw_event ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mips_perf_event const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct mips_perf_event const*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_1__ VAR_12 ;
 struct mips_perf_event* FUNC_4 (scalar_t__) ;
 struct mips_perf_event* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mips_perf_event const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_13 ;
 struct mips_perf_event* FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct perf_event*) ;
 int FUNC_11 (struct perf_event*) ;

__attribute__((used)) static int FUNC_12(struct perf_event *VAR_14)
{
 struct perf_event_attr *VAR_15 = &VAR_14->attr;
 struct hw_perf_event *VAR_16 = &VAR_14->hw;
 const struct mips_perf_event *VAR_17;
 int VAR_18;


 if (VAR_9 == VAR_14->attr.type) {
  if (VAR_14->attr.config >= VAR_8)
   return -VAR_0;
  VAR_17 = FUNC_5(VAR_14->attr.config);
 } else if (VAR_10 == VAR_14->attr.type) {
  VAR_17 = FUNC_4(VAR_14->attr.config);
 } else if (VAR_11 == VAR_14->attr.type) {

  FUNC_7(&VAR_13);
  VAR_17 = VAR_12.map_raw_event(VAR_14->attr.config);
 } else {

  return -VAR_1;
 }

 if (FUNC_0(VAR_17)) {
  if (VAR_11 == VAR_14->attr.type)
   FUNC_8(&VAR_13);
  return FUNC_1(VAR_17);
 }





 VAR_16->config_base = VAR_3;

 VAR_16->event_base = FUNC_6(VAR_17);
 if (VAR_11 == VAR_14->attr.type)
  FUNC_8(&VAR_13);

 if (!VAR_15->exclude_user)
  VAR_16->config_base |= VAR_6;
 if (!VAR_15->exclude_kernel) {
  VAR_16->config_base |= VAR_4;

  VAR_16->config_base |= VAR_2;
 }
 if (!VAR_15->exclude_hv)
  VAR_16->config_base |= VAR_5;

 VAR_16->config_base &= VAR_7;




 VAR_16->idx = -1;
 VAR_16->config = 0;

 if (!VAR_16->sample_period) {
  VAR_16->sample_period = VAR_12.max_period;
  VAR_16->last_period = VAR_16->sample_period;
  FUNC_3(&VAR_16->period_left, VAR_16->sample_period);
 }

 VAR_18 = 0;
 if (VAR_14->group_leader != VAR_14)
  VAR_18 = FUNC_11(VAR_14);

 VAR_14->destroy = FUNC_2;

 if (VAR_18)
  VAR_14->destroy(VAR_14);

 return VAR_18;
}
