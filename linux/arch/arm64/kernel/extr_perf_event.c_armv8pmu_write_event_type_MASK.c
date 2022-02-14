
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_perf_event {int idx; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 int VAR_4 = VAR_3->idx;






 if (FUNC_0(VAR_2)) {
  u32 VAR_5 = VAR_0 |
    VAR_1;

  FUNC_1(VAR_4 - 1, VAR_3->config_base);
  FUNC_1(VAR_4, VAR_5);
 } else {
  FUNC_1(VAR_4, VAR_3->config_base);
 }
}
