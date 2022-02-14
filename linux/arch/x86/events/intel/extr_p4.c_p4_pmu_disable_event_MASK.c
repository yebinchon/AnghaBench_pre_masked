
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int config; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;






 (void)FUNC_1(VAR_4->config_base,
  FUNC_0(VAR_4->config) & ~VAR_0 & ~VAR_1 & ~VAR_2);
}
