
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct stacktrace_ops {int (* address ) (void*,unsigned long,int) ;} ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (unsigned long,void*,struct stacktrace_ops const*,struct thread_info*,int*) ;
 int FUNC_3 (void*,unsigned long,int) ;

void
FUNC_4(struct task_struct *VAR_1, struct pt_regs *VAR_2,
    unsigned long *VAR_3, const struct stacktrace_ops *VAR_4,
    void *VAR_5)
{
 struct thread_info *VAR_6;
 int VAR_7 = 0;

 VAR_6 = (struct thread_info *)
  ((unsigned long)VAR_3 & (~(VAR_0 - 1)));

 while (!FUNC_1(VAR_3)) {
  unsigned long VAR_8 = *VAR_3++;

  if (FUNC_0(VAR_8)) {
   VAR_4->address(VAR_5, VAR_8, 1);

   FUNC_2(VAR_8, VAR_5, VAR_4,
      VAR_6, &VAR_7);
  }
 }
}
