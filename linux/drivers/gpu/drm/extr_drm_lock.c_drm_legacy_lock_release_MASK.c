
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_2__* master; } ;
struct drm_device {int master; } ;
struct TYPE_6__ {TYPE_1__* hw_lock; } ;
struct TYPE_5__ {TYPE_3__ lock; } ;
struct TYPE_4__ {int lock; } ;


 int FUNC_0 (char*,struct file*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_device*,struct drm_file*) ;
 int FUNC_3 (TYPE_3__*,int ) ;

void FUNC_4(struct drm_device *VAR_0, struct file *VAR_1)
{
 struct drm_file *VAR_2 = VAR_1->private_data;


 if (!VAR_0->master)
  return;

 if (FUNC_2(VAR_0, VAR_2)) {
  FUNC_0("File %p released, freeing lock for context %d\n",
     VAR_1, FUNC_1(VAR_2->master->lock.hw_lock->lock));
  FUNC_3(&VAR_2->master->lock,
         FUNC_1(VAR_2->master->lock.hw_lock->lock));
 }
}
