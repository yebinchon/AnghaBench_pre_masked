
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {unsigned long debugreg6; unsigned long ptrace_dr7; } ;
struct task_struct {struct thread_struct thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int,unsigned long) ;
 int FUNC_1 (struct task_struct*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_2, int VAR_3,
          unsigned long VAR_4)
{
 struct thread_struct *VAR_5 = &VAR_2->thread;

 int VAR_6 = -VAR_0;

 if (VAR_3 < VAR_1) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 } else if (VAR_3 == 6) {
  VAR_5->debugreg6 = VAR_4;
  VAR_6 = 0;
 } else if (VAR_3 == 7) {
  VAR_6 = FUNC_1(VAR_2, VAR_4);
  if (!VAR_6)
   VAR_5->ptrace_dr7 = VAR_4;
 }
 return VAR_6;
}
