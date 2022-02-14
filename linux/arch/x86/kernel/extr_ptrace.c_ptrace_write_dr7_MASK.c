
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {struct perf_event** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;
struct perf_event {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long,int,unsigned int*,unsigned int*) ;
 unsigned long FUNC_4 (struct perf_event**) ;
 int FUNC_5 (struct perf_event*,unsigned int,unsigned int,int) ;
 struct perf_event* FUNC_6 (struct task_struct*,unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct task_struct *VAR_2, unsigned long VAR_3)
{
 struct thread_struct *VAR_4 = &VAR_2->thread;
 unsigned long VAR_5;
 bool VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9 = 0;

 VAR_3 &= ~VAR_0;
 VAR_5 = FUNC_4(VAR_4->ptrace_bps);

restore:
 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  unsigned VAR_10, VAR_11;
  bool VAR_12 = !FUNC_3(VAR_3, VAR_7, &VAR_10, &VAR_11);
  struct perf_event *VAR_13 = VAR_4->ptrace_bps[VAR_7];

  if (!VAR_13) {
   if (VAR_12)
    continue;

   VAR_13 = FUNC_6(VAR_2,
     VAR_10, VAR_11, 0, VAR_12);
   if (FUNC_0(VAR_13)) {
    VAR_8 = FUNC_1(VAR_13);
    break;
   }

   VAR_4->ptrace_bps[VAR_7] = VAR_13;
   continue;
  }

  VAR_8 = FUNC_5(VAR_13, VAR_10, VAR_11, VAR_12);
  if (VAR_8)
   break;
 }


 if (VAR_8 && !FUNC_2(VAR_6)) {
  VAR_9 = VAR_8;
  VAR_3 = VAR_5;
  VAR_6 = 1;
  goto restore;
 }

 return VAR_9;
}
