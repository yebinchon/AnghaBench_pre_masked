
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline long FUNC_1(struct task_struct *VAR_2, int VAR_3)
{
 long *VAR_4 = (long *)FUNC_0(VAR_2);

 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  return 0;

 return VAR_4[VAR_3];
}
