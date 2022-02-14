
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int addr; int ip; } ;
struct perf_output_handle {int dummy; } ;
struct perf_event_header {int size; } ;
struct TYPE_5__ {int interrupts; int last_period; } ;
struct TYPE_4__ {scalar_t__ exclude_kernel; } ;
struct perf_event {int pending_kill; TYPE_2__ hw; TYPE_1__ attr; } ;
struct debug_store {scalar_t__ bts_buffer_base; scalar_t__ bts_index; } ;
struct cpu_hw_events {struct perf_event** events; struct debug_store* ds; } ;
typedef int regs ;
struct TYPE_6__ {int bts_active; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pt_regs*,int ,int) ;
 scalar_t__ FUNC_2 (struct perf_output_handle*,struct perf_event*,int) ;
 int FUNC_3 (struct perf_output_handle*) ;
 int FUNC_4 (struct perf_output_handle*,struct perf_event_header*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_5 (struct perf_event_header*,struct perf_sample_data*,struct perf_event*,struct pt_regs*) ;
 int FUNC_6 (struct perf_sample_data*,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct cpu_hw_events* FUNC_9 (int *) ;
 TYPE_3__ VAR_3 ;

int FUNC_10(void)
{
 struct cpu_hw_events *VAR_4 = FUNC_9(&VAR_2);
 struct debug_store *VAR_5 = VAR_4->ds;
 struct bts_record {
  u64 from;
  u64 to;
  u64 flags;
 };
 struct perf_event *VAR_6 = VAR_4->events[VAR_0];
 struct bts_record *VAR_7, *VAR_8, *VAR_9;
 struct perf_output_handle VAR_10;
 struct perf_event_header VAR_11;
 struct perf_sample_data VAR_12;
 unsigned long VAR_13 = 0;
 struct pt_regs VAR_14;

 if (!VAR_6)
  return 0;

 if (!VAR_3.bts_active)
  return 0;

 VAR_8 = (struct bts_record *)(unsigned long)VAR_5->bts_buffer_base;
 VAR_9 = (struct bts_record *)(unsigned long)VAR_5->bts_index;

 if (VAR_9 <= VAR_8)
  return 0;

 FUNC_1(&VAR_14, 0, sizeof(VAR_14));

 VAR_5->bts_index = VAR_5->bts_buffer_base;

 FUNC_6(&VAR_12, 0, VAR_6->hw.last_period);
 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++) {





  if (VAR_6->attr.exclude_kernel &&
      (FUNC_0(VAR_7->from) || FUNC_0(VAR_7->to)))
   VAR_13++;
 }






 FUNC_7();
 FUNC_5(&VAR_11, &VAR_12, VAR_6, &VAR_14);

 if (FUNC_2(&VAR_10, VAR_6, VAR_11.size *
         (VAR_9 - VAR_8 - VAR_13)))
  goto unlock;

 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++) {

  if (VAR_6->attr.exclude_kernel &&
      (FUNC_0(VAR_7->from) || FUNC_0(VAR_7->to)))
   continue;

  VAR_12.ip = VAR_7->from;
  VAR_12.addr = VAR_7->to;

  FUNC_4(&VAR_10, &VAR_11, &VAR_12, VAR_6);
 }

 FUNC_3(&VAR_10);


 VAR_6->hw.interrupts++;
 VAR_6->pending_kill = VAR_1;
unlock:
 FUNC_8();
 return 1;
}
