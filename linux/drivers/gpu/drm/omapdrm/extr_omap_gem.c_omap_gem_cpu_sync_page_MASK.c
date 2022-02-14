
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_gem_object {scalar_t__* dma_addrs; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_gem_object*) ;
 struct omap_gem_object* FUNC_2 (struct drm_gem_object*) ;

void FUNC_3(struct drm_gem_object *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct omap_gem_object *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_2))
  return;

 if (VAR_5->dma_addrs[VAR_3]) {
  FUNC_0(VAR_4->dev, VAR_5->dma_addrs[VAR_3],
    VAR_1, VAR_0);
  VAR_5->dma_addrs[VAR_3] = 0;
 }
}
