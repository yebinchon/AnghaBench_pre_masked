
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int config_base; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;
 u64 VAR_2;

 VAR_2 = VAR_1->config;
 (void)FUNC_0(VAR_1->config_base, VAR_2);
}
