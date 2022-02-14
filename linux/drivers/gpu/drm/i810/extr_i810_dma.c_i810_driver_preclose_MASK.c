
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {TYPE_1__* master; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_6__ {scalar_t__ page_flipping; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_7__ {scalar_t__ hw_lock; } ;
struct TYPE_5__ {TYPE_3__ lock; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct drm_file*) ;

void FUNC_4(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 if (VAR_0->dev_private) {
  drm_i810_private_t *VAR_2 = VAR_0->dev_private;
  if (VAR_2->page_flipping)
   FUNC_2(VAR_0);
 }

 if (VAR_1->master && VAR_1->master->lock.hw_lock) {
  FUNC_1(&VAR_1->master->lock);
  FUNC_3(VAR_0, VAR_1);
  FUNC_0(&VAR_1->master->lock);
 } else {


  FUNC_3(VAR_0, VAR_1);
 }

}
