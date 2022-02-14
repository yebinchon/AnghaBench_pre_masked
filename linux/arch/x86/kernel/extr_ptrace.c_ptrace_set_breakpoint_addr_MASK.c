
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {struct perf_event** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;
struct perf_event_attr {unsigned long bp_addr; } ;
struct perf_event {struct perf_event_attr attr; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct perf_event*,struct perf_event_attr*) ;
 struct perf_event* FUNC_3 (struct task_struct*,int ,int ,unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_2, int VAR_3,
          unsigned long VAR_4)
{
 struct thread_struct *VAR_5 = &VAR_2->thread;
 struct perf_event *VAR_6 = VAR_5->ptrace_bps[VAR_3];
 int VAR_7 = 0;

 if (!VAR_6) {
  VAR_6 = FUNC_3(VAR_2,
    VAR_0, VAR_1,
    VAR_4, 1);
  if (FUNC_0(VAR_6))
   VAR_7 = FUNC_1(VAR_6);
  else
   VAR_5->ptrace_bps[VAR_3] = VAR_6;
 } else {
  struct perf_event_attr VAR_8 = VAR_6->attr;

  VAR_8.bp_addr = VAR_4;
  VAR_7 = FUNC_2(VAR_6, &VAR_8);
 }

 return VAR_7;
}
