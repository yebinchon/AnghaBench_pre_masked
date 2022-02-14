
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ idx; int config; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;

 if (VAR_4->idx < VAR_1)
  FUNC_0(VAR_4->config_base, VAR_4->config | VAR_0);
 else
  FUNC_0(VAR_4->config_base, VAR_0);
}
