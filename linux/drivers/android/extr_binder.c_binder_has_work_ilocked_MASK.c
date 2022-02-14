
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_thread {TYPE_1__* proc; scalar_t__ looper_need_return; scalar_t__ process_todo; } ;
struct TYPE_2__ {int todo; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct binder_thread *VAR_0,
        bool VAR_1)
{
 return VAR_0->process_todo ||
  VAR_0->looper_need_return ||
  (VAR_1 &&
   !FUNC_0(&VAR_0->proc->todo));
}
