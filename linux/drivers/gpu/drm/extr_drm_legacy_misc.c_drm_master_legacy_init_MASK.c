
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock_queue; int spinlock; } ;
struct drm_master {TYPE_1__ lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_master *VAR_0)
{
 FUNC_1(&VAR_0->lock.spinlock);
 FUNC_0(&VAR_0->lock.lock_queue);
}
