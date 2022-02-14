
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; } ;
struct stackframe {unsigned long pc; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct stackframe*,int ,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 (struct task_struct*,struct stackframe*) ;

unsigned long FUNC_7(struct task_struct *VAR_2)
{
 struct stackframe VAR_3;
 unsigned long VAR_4, VAR_5 = 0;
 int VAR_6 = 0;
 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0)
  return 0;

 VAR_4 = (unsigned long)FUNC_5(VAR_2);
 if (!VAR_4)
  return 0;

 FUNC_2(&VAR_3, FUNC_3(VAR_2), FUNC_4(VAR_2));

 do {
  if (FUNC_6(VAR_2, &VAR_3))
   goto out;
  if (!FUNC_0(VAR_3.pc)) {
   VAR_5 = VAR_3.pc;
   goto out;
  }
 } while (VAR_6 ++ < 16);

out:
 FUNC_1(VAR_2);
 return VAR_5;
}
