
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event_extra {int config; int idx; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;



__attribute__((used)) static u64 FUNC_0(struct perf_event *VAR_0, int VAR_1, bool VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_0->hw;
 struct hw_perf_event_extra *VAR_4 = &VAR_3->extra_reg;
 u64 VAR_5 = VAR_4->config;

 if (VAR_1 > VAR_4->idx)
  VAR_5 <<= 8 * (VAR_1 - VAR_4->idx);
 else
  VAR_5 >>= 8 * (VAR_4->idx - VAR_1);

 if (VAR_2) {
  VAR_3->config += VAR_1 - VAR_4->idx;
  VAR_4->config = VAR_5;
  VAR_4->idx = VAR_1;
 }
 return VAR_5;
}
