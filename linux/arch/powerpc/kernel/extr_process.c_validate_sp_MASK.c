
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (unsigned long,struct task_struct*,unsigned long) ;

int FUNC_2(unsigned long VAR_1, struct task_struct *VAR_2,
         unsigned long VAR_3)
{
 unsigned long VAR_4 = (unsigned long)FUNC_0(VAR_2);

 if (VAR_1 < VAR_0)
  return 0;

 if (VAR_1 >= VAR_4 && VAR_1 <= VAR_4 + VAR_0 - VAR_3)
  return 1;

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
