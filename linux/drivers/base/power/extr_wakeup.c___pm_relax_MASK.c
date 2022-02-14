
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int lock; scalar_t__ active; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct wakeup_source*) ;

void FUNC_3(struct wakeup_source *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0)
  return;

 FUNC_0(&VAR_0->lock, VAR_1);
 if (VAR_0->active)
  FUNC_2(VAR_0);
 FUNC_1(&VAR_0->lock, VAR_1);
}
