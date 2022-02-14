
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_gem_object {int resv; int size; struct drm_device* dev; } ;
struct drm_device {TYPE_2__* driver; } ;
struct dma_buf_export_info {int flags; int resv; struct drm_gem_object* priv; int size; int * ops; int owner; int exp_name; } ;
struct dma_buf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* fops; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 struct dma_buf* FUNC_0 (struct drm_device*,struct dma_buf_export_info*) ;
 int VAR_1 ;

struct dma_buf *FUNC_1(struct drm_gem_object *VAR_2,
         int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct dma_buf_export_info VAR_5 = {
  .exp_name = VAR_0,
  .owner = VAR_4->driver->fops->owner,
  .ops = &VAR_1,
  .size = VAR_2->size,
  .flags = VAR_3,
  .priv = VAR_2,
  .resv = VAR_2->resv,
 };

 return FUNC_0(VAR_4, &VAR_5);
}
