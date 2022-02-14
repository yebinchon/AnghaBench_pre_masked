
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {scalar_t__ idx; int reg; } ;
struct hw_perf_event {int config; int config_base; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_uncore_box*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;
 struct hw_perf_event_extra *VAR_5 = &VAR_4->extra_reg;

 if (VAR_5->idx != VAR_0)
  FUNC_1(VAR_5->reg, FUNC_0(VAR_2, 0));

 FUNC_1(VAR_4->config_base, VAR_4->config | VAR_1);
}
