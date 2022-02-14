
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regset {int n; } ;
struct task_struct {int dummy; } ;



int FUNC_0(struct task_struct *VAR_0, const struct user_regset *VAR_1)
{
 return VAR_1->n;
}
