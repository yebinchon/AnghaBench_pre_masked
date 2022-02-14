
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fsindex; unsigned long fsbase; } ;
struct task_struct {TYPE_1__ thread; } ;


 struct task_struct* VAR_0 ;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 (struct task_struct*,scalar_t__) ;

unsigned long FUNC_2(struct task_struct *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1 == VAR_0)
  VAR_2 = FUNC_0();
 else if (VAR_1->thread.fsindex == 0)
  VAR_2 = VAR_1->thread.fsbase;
 else
  VAR_2 = FUNC_1(VAR_1, VAR_1->thread.fsindex);

 return VAR_2;
}
