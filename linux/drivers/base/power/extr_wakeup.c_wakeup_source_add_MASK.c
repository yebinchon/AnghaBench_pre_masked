
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int active; int entry; int timer; int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_2 ;

void FUNC_6(struct wakeup_source *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_0(!VAR_3))
  return;

 FUNC_4(&VAR_3->lock);
 FUNC_5(&VAR_3->timer, VAR_1, 0);
 VAR_3->active = 0;

 FUNC_2(&VAR_0, VAR_4);
 FUNC_1(&VAR_3->entry, &VAR_2);
 FUNC_3(&VAR_0, VAR_4);
}
