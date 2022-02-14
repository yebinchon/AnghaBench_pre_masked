
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_struct {unsigned long debugreg6; unsigned long ptrace_dr7; struct perf_event** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;
struct TYPE_3__ {unsigned long address; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct perf_event {TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct task_struct *VAR_1, int VAR_2)
{
 struct thread_struct *VAR_3 = &VAR_1->thread;
 unsigned long VAR_4 = 0;

 if (VAR_2 < VAR_0) {
  int VAR_5 = FUNC_0(VAR_2, VAR_0);
  struct perf_event *VAR_6 = VAR_3->ptrace_bps[VAR_5];

  if (VAR_6)
   VAR_4 = VAR_6->hw.info.address;
 } else if (VAR_2 == 6) {
  VAR_4 = VAR_3->debugreg6;
 } else if (VAR_2 == 7) {
  VAR_4 = VAR_3->ptrace_dr7;
 }
 return VAR_4;
}
