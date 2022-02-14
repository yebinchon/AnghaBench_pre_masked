
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_lock_data {int idle_has_lock; int spinlock; int kernel_waiters; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_lock_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_lock_data *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->spinlock);
 VAR_1->kernel_waiters++;
 if (!VAR_1->idle_has_lock) {

  FUNC_2(&VAR_1->spinlock);
  VAR_2 = FUNC_0(VAR_1, VAR_0);
  FUNC_1(&VAR_1->spinlock);

  if (VAR_2 == 1)
   VAR_1->idle_has_lock = 1;
 }
 FUNC_2(&VAR_1->spinlock);
}
