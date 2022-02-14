
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; } ;
struct stackframe {unsigned long sp; unsigned long pc; scalar_t__ lr; int fp; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 unsigned long FUNC_3 (struct task_struct*) ;
 unsigned long FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct stackframe*) ;

unsigned long FUNC_6(struct task_struct *VAR_3)
{
 struct stackframe VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;
 if (!VAR_3 || VAR_3 == VAR_2 || VAR_3->state == VAR_0)
  return 0;

 VAR_4.fp = FUNC_2(VAR_3);
 VAR_4.sp = FUNC_4(VAR_3);
 VAR_4.lr = 0;
 VAR_4.pc = FUNC_3(VAR_3);
 VAR_5 = (unsigned long)FUNC_1(VAR_3);
 do {
  if (VAR_4.sp < VAR_5 ||
      VAR_4.sp >= VAR_5 + VAR_1 ||
      FUNC_5(&VAR_4) < 0)
   return 0;
  if (!FUNC_0(VAR_4.pc))
   return VAR_4.pc;
 } while (VAR_6 ++ < 16);
 return 0;
}
