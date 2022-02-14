
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {scalar_t__ idx; scalar_t__ reg; unsigned long long config; } ;
struct hw_perf_event {int config_base; int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (struct intel_uncore_box*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_box *VAR_6, struct perf_event *VAR_7)
{
 struct hw_perf_event *VAR_8 = &VAR_7->hw;
 struct hw_perf_event_extra *VAR_9 = &VAR_8->extra_reg;
 struct hw_perf_event_extra *VAR_10 = &VAR_8->branch_reg;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_9->idx, 0, 8);
 if (VAR_11 != 0xff)
  FUNC_2(FUNC_0(VAR_9->reg, 0, 16),
   FUNC_1(VAR_6, VAR_11));
 VAR_11 = FUNC_0(VAR_9->idx, 1, 8);
 if (VAR_11 != 0xff)
  FUNC_2(FUNC_0(VAR_9->reg, 1, 16),
   FUNC_1(VAR_6, VAR_11));

 if (VAR_10->idx != VAR_0) {
  FUNC_2(VAR_10->reg, 0);
  if (VAR_10->config != ~0ULL) {
   FUNC_2(VAR_10->reg + 1,
    VAR_10->config & VAR_3);
   FUNC_2(VAR_10->reg + 2, VAR_1 &
    (VAR_10->config >> VAR_2));
   FUNC_2(VAR_10->reg, VAR_4);
  }
 }

 FUNC_2(VAR_8->config_base, VAR_8->config | VAR_5);
}
