
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {void* tid; void* pid; } ;
struct perf_sample_data {TYPE_1__ tid_entry; } ;
struct perf_output_handle {int dummy; } ;
struct perf_event_header {int size; } ;
struct perf_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct perf_event*,void*,int ) ;
 scalar_t__ FUNC_1 (struct perf_output_handle*,struct perf_event*,int ) ;
 int FUNC_2 (struct perf_output_handle*) ;
 int FUNC_3 (struct perf_output_handle*,struct perf_event_header*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_4 (struct perf_event_header*,struct perf_sample_data*,struct perf_event*,struct pt_regs*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_2,
        struct perf_sample_data *VAR_3,
        struct pt_regs *VAR_4)
{
 u32 VAR_5;
 struct perf_event_header VAR_6;
 struct perf_output_handle VAR_7;





 VAR_5 = VAR_3->tid_entry.pid;


 FUNC_5();

 FUNC_4(&VAR_6, VAR_3, VAR_2, VAR_4);
 if (FUNC_1(&VAR_7, VAR_2, VAR_6.size))
  goto out;


 VAR_3->tid_entry.pid = FUNC_0(VAR_2, VAR_5, VAR_1);
 VAR_3->tid_entry.tid = FUNC_0(VAR_2, VAR_5, VAR_0);

 FUNC_3(&VAR_7, &VAR_6, VAR_3, VAR_2);
 FUNC_2(&VAR_7);
out:
 FUNC_6();
}
