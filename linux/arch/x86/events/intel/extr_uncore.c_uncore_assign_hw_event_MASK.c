
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int event_base; int config_base; scalar_t__ last_tag; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {scalar_t__* tags; } ;


 int FUNC_0 (struct intel_uncore_box*,int) ;
 int FUNC_1 (struct intel_uncore_box*) ;
 int FUNC_2 (struct intel_uncore_box*) ;
 int FUNC_3 (struct intel_uncore_box*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct intel_uncore_box *VAR_0,
       struct perf_event *VAR_1, int VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_1->hw;

 VAR_3->idx = VAR_2;
 VAR_3->last_tag = ++VAR_0->tags[VAR_2];

 if (FUNC_4(VAR_3->idx)) {
  VAR_3->event_base = FUNC_2(VAR_0);
  VAR_3->config_base = FUNC_1(VAR_0);
  return;
 }

 VAR_3->config_base = FUNC_0(VAR_0, VAR_3->idx);
 VAR_3->event_base = FUNC_3(VAR_0, VAR_3->idx);
}
