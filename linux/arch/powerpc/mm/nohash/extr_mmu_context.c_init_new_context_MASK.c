
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ active; } ;
struct mm_struct {TYPE_1__ context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct mm_struct*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct mm_struct*) ;

int FUNC_3(struct task_struct *VAR_1, struct mm_struct *VAR_2)
{
 FUNC_0("initing context for mm @%p\n", VAR_2);
 if (VAR_2->context.id == 0)
  FUNC_2(VAR_2);
 VAR_2->context.id = VAR_0;
 VAR_2->context.active = 0;
 FUNC_1(&VAR_2->context, ((void*)0));
 return 0;
}
