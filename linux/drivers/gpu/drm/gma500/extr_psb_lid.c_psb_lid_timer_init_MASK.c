
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {scalar_t__ expires; } ;
struct drm_psb_private {int lid_lock; struct timer_list lid_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timer_list*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct timer_list*,int ,int ) ;

void FUNC_5(struct drm_psb_private *VAR_3)
{
 struct timer_list *VAR_4 = &VAR_3->lid_timer;
 unsigned long VAR_5;

 FUNC_1(&VAR_3->lid_lock);
 FUNC_2(&VAR_3->lid_lock, VAR_5);

 FUNC_4(VAR_4, VAR_2, 0);

 VAR_4->expires = VAR_1 + VAR_0;

 FUNC_0(VAR_4);
 FUNC_3(&VAR_3->lid_lock, VAR_5);
}
