
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ idx; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int FUNC_0 (struct perf_event*,struct hw_perf_event*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;


 if (VAR_1->idx < 0)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_1->idx);
}
