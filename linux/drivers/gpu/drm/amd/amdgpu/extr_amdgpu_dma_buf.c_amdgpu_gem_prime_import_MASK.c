
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; int * ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_1 (struct drm_device*,struct dma_buf*) ;

struct drm_gem_object *FUNC_2(struct drm_device *VAR_1,
         struct dma_buf *VAR_2)
{
 struct drm_gem_object *VAR_3;

 if (VAR_2->ops == &VAR_0) {
  VAR_3 = VAR_2->priv;
  if (VAR_3->dev == VAR_1) {




   FUNC_0(VAR_3);
   return VAR_3;
  }
 }

 return FUNC_1(VAR_1, VAR_2);
}
