
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int precise_ip; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__ attr; } ;
struct pebs_record_core {int dummy; } ;
struct debug_store {scalar_t__ pebs_buffer_base; scalar_t__ pebs_index; } ;
struct cpu_hw_events {int active_mask; struct perf_event** events; struct debug_store* ds; } ;
struct TYPE_6__ {int pebs_active; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*,struct pt_regs*,struct pebs_record_core*,struct pebs_record_core*,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct perf_event*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void FUNC_5(struct pt_regs *VAR_4)
{
 struct cpu_hw_events *VAR_5 = FUNC_4(&VAR_1);
 struct debug_store *VAR_6 = VAR_5->ds;
 struct perf_event *VAR_7 = VAR_5->events[0];
 struct pebs_record_core *VAR_8, *VAR_9;
 int VAR_10;

 if (!VAR_3.pebs_active)
  return;

 VAR_8 = (struct pebs_record_core *)(unsigned long)VAR_6->pebs_buffer_base;
 VAR_9 = (struct pebs_record_core *)(unsigned long)VAR_6->pebs_index;




 VAR_6->pebs_index = VAR_6->pebs_buffer_base;

 if (!FUNC_3(0, VAR_5->active_mask))
  return;

 FUNC_0(!VAR_7);

 if (!VAR_7->attr.precise_ip)
  return;

 VAR_10 = VAR_9 - VAR_8;
 if (VAR_10 <= 0) {
  if (VAR_7->hw.flags & VAR_0)
   FUNC_2(VAR_7, 0);
  return;
 }

 FUNC_1(VAR_7, VAR_4, VAR_8, VAR_9, 0, VAR_10,
          VAR_2);
}
