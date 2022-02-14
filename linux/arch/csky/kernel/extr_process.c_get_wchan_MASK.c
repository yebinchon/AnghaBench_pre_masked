
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct task_struct* VAR_2 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

unsigned long FUNC_5(struct task_struct *VAR_3)
{
 unsigned long VAR_4;
 unsigned long *VAR_5, *VAR_6, *VAR_7;
 int VAR_8 = 0;

 if (!VAR_3 || VAR_3 == VAR_2 || VAR_3->state == VAR_0)
  return 0;

 VAR_6 = (unsigned long *)FUNC_1(VAR_3);
 VAR_7 = (unsigned long *)(FUNC_3(VAR_3) + VAR_1);

 VAR_5 = (unsigned long *) FUNC_4(VAR_3);
 do {
  if (VAR_5 < VAR_6 || VAR_5 > VAR_7)
   return 0;




  VAR_4 = *VAR_5++;

  if (!FUNC_2(VAR_4) &&
      FUNC_0(VAR_4))
   return VAR_4;
 } while (VAR_8++ < 16);

 return 0;
}
