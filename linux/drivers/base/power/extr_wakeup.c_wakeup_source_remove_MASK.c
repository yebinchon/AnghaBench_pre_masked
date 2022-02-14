
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * function; } ;
struct wakeup_source {TYPE_1__ timer; int entry; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

void FUNC_6(struct wakeup_source *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_0(!VAR_2))
  return;

 FUNC_3(&VAR_0, VAR_3);
 FUNC_2(&VAR_2->entry);
 FUNC_4(&VAR_0, VAR_3);
 FUNC_5(&VAR_1);

 FUNC_1(&VAR_2->timer);




 VAR_2->timer.function = ((void*)0);
}
