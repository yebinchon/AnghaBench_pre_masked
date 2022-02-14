
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_regset {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct task_struct *VAR_1, const struct user_regset *VAR_2)
{
 return (VAR_1->thread.flags & VAR_0) ? 128 : 32;
}
