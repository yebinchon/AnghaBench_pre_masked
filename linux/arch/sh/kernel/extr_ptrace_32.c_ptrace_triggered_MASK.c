
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event_attr {int disabled; } ;
struct perf_event {struct perf_event_attr attr; } ;


 int FUNC_0 (struct perf_event*,struct perf_event_attr*) ;

void FUNC_1(struct perf_event *VAR_0,
        struct perf_sample_data *VAR_1, struct pt_regs *VAR_2)
{
 struct perf_event_attr VAR_3;





 VAR_3 = VAR_0->attr;
 VAR_3.disabled = 1;
 FUNC_0(VAR_0, &VAR_3);
}
