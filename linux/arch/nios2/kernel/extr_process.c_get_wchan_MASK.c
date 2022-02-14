
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ksp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;
struct switch_stack {unsigned long fp; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct task_struct *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0)
  return 0;

 VAR_5 = (unsigned long)VAR_2;
 VAR_3 = ((struct switch_stack *)VAR_2->thread.ksp)->fp;
 do {
  if (VAR_3 < VAR_5+sizeof(struct task_struct) ||
   VAR_3 >= 8184+VAR_5)
   return 0;
  VAR_4 = ((unsigned long *)VAR_3)[1];
  if (!FUNC_0(VAR_4))
   return VAR_4;
  VAR_3 = *(unsigned long *) VAR_3;
 } while (VAR_6++ < 16);
 return 0;
}
