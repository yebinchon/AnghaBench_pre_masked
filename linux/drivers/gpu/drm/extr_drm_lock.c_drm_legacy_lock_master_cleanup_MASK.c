
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock_queue; int * file_priv; int * hw_lock; } ;
struct drm_master {TYPE_1__ lock; } ;
struct TYPE_4__ {int * lock; } ;
struct drm_device {int struct_mutex; TYPE_2__ sigdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_device *VAR_1, struct drm_master *VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_0))
  return;




     FUNC_1(&VAR_1->struct_mutex);
 if (VAR_2->lock.hw_lock) {
  if (VAR_1->sigdata.lock == VAR_2->lock.hw_lock)
   VAR_1->sigdata.lock = ((void*)0);
  VAR_2->lock.hw_lock = ((void*)0);
  VAR_2->lock.file_priv = ((void*)0);
  FUNC_3(&VAR_2->lock.lock_queue);
 }
 FUNC_2(&VAR_1->struct_mutex);
}
