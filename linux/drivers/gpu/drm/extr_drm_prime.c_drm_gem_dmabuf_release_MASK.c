
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_gem_object*) ;

void FUNC_2(struct dma_buf *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->priv;
 struct drm_device *VAR_2 = VAR_1->dev;


 FUNC_1(VAR_1);

 FUNC_0(VAR_2);
}
