
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regset {int n; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct task_struct *VAR_1, const struct user_regset *VAR_2)
{
 if (FUNC_0(VAR_0))
  return VAR_2->n;
 else
  return 0;
}
