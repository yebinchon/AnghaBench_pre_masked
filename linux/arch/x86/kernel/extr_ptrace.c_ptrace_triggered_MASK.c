
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_struct {int debugreg6; struct perf_event** ptrace_bps; } ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {int dummy; } ;
struct TYPE_2__ {struct thread_struct thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct perf_event *VAR_3,
        struct perf_sample_data *VAR_4,
        struct pt_regs *VAR_5)
{
 int VAR_6;
 struct thread_struct *VAR_7 = &(VAR_2->thread);





 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_7->ptrace_bps[VAR_6] == VAR_3)
   break;
 }

 VAR_7->debugreg6 |= (VAR_0 << VAR_6);
}
