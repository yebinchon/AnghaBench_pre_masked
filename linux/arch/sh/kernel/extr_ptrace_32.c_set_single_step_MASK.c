
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {struct perf_event** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;
struct perf_event_attr {unsigned long bp_addr; int disabled; int bp_type; int bp_len; } ;
struct perf_event {struct perf_event_attr attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_attr*) ;
 int FUNC_3 (struct perf_event_attr*) ;
 int VAR_2 ;
 struct perf_event* FUNC_4 (struct perf_event_attr*,int ,int *,struct task_struct*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_3, unsigned long VAR_4)
{
 struct thread_struct *VAR_5 = &VAR_3->thread;
 struct perf_event *VAR_6;
 struct perf_event_attr VAR_7;

 VAR_6 = VAR_5->ptrace_bps[0];
 if (!VAR_6) {
  FUNC_3(&VAR_7);

  VAR_7.bp_addr = VAR_4;
  VAR_7.bp_len = VAR_0;
  VAR_7.bp_type = VAR_1;

  VAR_6 = FUNC_4(&VAR_7, VAR_2,
       ((void*)0), VAR_3);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);

  VAR_5->ptrace_bps[0] = VAR_6;
 } else {
  int VAR_8;

  VAR_7 = VAR_6->attr;
  VAR_7.bp_addr = VAR_4;

  VAR_7.disabled = 0;
  VAR_8 = FUNC_2(VAR_6, &VAR_7);
  if (FUNC_5(VAR_8))
   return VAR_8;
 }

 return 0;
}
