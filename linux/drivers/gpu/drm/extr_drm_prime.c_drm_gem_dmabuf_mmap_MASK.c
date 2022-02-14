
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; } ;
struct dma_buf {struct drm_gem_object* priv; } ;
struct TYPE_2__ {int (* gem_prime_mmap ) (struct drm_gem_object*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*,struct vm_area_struct*) ;

int FUNC_1(struct dma_buf *VAR_1, struct vm_area_struct *VAR_2)
{
 struct drm_gem_object *VAR_3 = VAR_1->priv;
 struct drm_device *VAR_4 = VAR_3->dev;

 if (!VAR_4->driver->gem_prime_mmap)
  return -VAR_0;

 return VAR_4->driver->gem_prime_mmap(VAR_3, VAR_2);
}
