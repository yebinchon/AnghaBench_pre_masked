
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 struct task_struct* VAR_3 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 unsigned long FUNC_4 (struct task_struct*) ;

unsigned long FUNC_5(struct task_struct *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;
 int VAR_9 = 0;

 if (!VAR_4 || VAR_4 == VAR_3 || VAR_4->state == VAR_1)
  return 0;

 if (FUNC_0(VAR_0)) {
  VAR_7 = (unsigned long)FUNC_1(VAR_4);
  VAR_8 = (unsigned long)FUNC_3(VAR_4) + VAR_2;

  VAR_5 = FUNC_4(VAR_4);
  do {
   if (VAR_5 < VAR_7 || VAR_5 > VAR_8)
    return 0;
   VAR_6 = ((unsigned long *)VAR_5)[0];
   if (!FUNC_2(VAR_6))
    return VAR_6;
   VAR_5 = *(unsigned long *)(VAR_5 + 4);
  } while (VAR_9++ < 16);
 }
 return 0;
}
