
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rbs_bot; } ;
struct TYPE_6__ {TYPE_2__* mm; TYPE_1__ thread; } ;
struct TYPE_5__ {scalar_t__ start_stack; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int ) ;

inline void
FUNC_2 (void)
{
 unsigned long VAR_3 = FUNC_1(VAR_1) & -16;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 VAR_2->thread.rbs_bot = FUNC_0(VAR_2->mm->start_stack - VAR_3);
}
