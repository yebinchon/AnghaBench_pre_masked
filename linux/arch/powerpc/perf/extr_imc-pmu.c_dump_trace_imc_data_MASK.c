
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace_imc_data {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct perf_event_header {int size; } ;
struct perf_event {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct perf_output_handle*,struct perf_event*,int ) ;
 int FUNC_2 (struct perf_output_handle*) ;
 int FUNC_3 (struct perf_output_handle*,struct perf_event_header*,struct perf_sample_data*,struct perf_event*) ;
 int VAR_0 ;
 int FUNC_4 (struct trace_imc_data*,struct perf_sample_data*,int *,struct perf_event_header*,struct perf_event*) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1)
{
 struct trace_imc_data *VAR_2;
 int VAR_3, VAR_4;
 u64 VAR_5 = 0;

 VAR_2 = (struct trace_imc_data *)FUNC_0();
 for (VAR_3 = 0; VAR_3 < (VAR_0 / sizeof(struct trace_imc_data));
  VAR_3++, VAR_2++) {
  struct perf_sample_data VAR_6;
  struct perf_event_header VAR_7;

  VAR_4 = FUNC_4(VAR_2, &VAR_6, &VAR_5, &VAR_7, VAR_1);
  if (VAR_4)
   break;
  else {

   struct perf_output_handle VAR_8;

   if (FUNC_1(&VAR_8, VAR_1, VAR_7.size))
    return;

   FUNC_3(&VAR_8, &VAR_7, &VAR_6, VAR_1);
   FUNC_2(&VAR_8);
  }
 }
}
