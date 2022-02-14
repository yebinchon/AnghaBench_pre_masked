
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regset {int dummy; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct task_struct *VAR_3,
        const struct user_regset *VAR_4)
{
 return VAR_2 ? VAR_1 + 1 : -VAR_0;
}
