
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flags; } ;
struct task_struct {TYPE_1__ thread; } ;


 unsigned int VAR_0 ;

int FUNC_0(struct task_struct *VAR_1, unsigned int VAR_2)
{
 VAR_1->thread.flags = (VAR_1->thread.flags & ~VAR_0) |
       (VAR_2 & VAR_0);
 return 0;
}
