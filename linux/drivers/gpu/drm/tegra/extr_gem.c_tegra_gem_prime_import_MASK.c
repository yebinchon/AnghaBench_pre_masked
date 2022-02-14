
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct drm_device* dev; } ;
struct tegra_bo {struct drm_gem_object gem; } ;
struct drm_device {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; int * ops; } ;


 struct drm_gem_object* FUNC_0 (struct tegra_bo*) ;
 scalar_t__ FUNC_1 (struct tegra_bo*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct tegra_bo* FUNC_3 (struct drm_device*,struct dma_buf*) ;
 int VAR_0 ;

struct drm_gem_object *FUNC_4(struct drm_device *VAR_1,
           struct dma_buf *VAR_2)
{
 struct tegra_bo *VAR_3;

 if (VAR_2->ops == &VAR_0) {
  struct drm_gem_object *VAR_4 = VAR_2->priv;

  if (VAR_4->dev == VAR_1) {
   FUNC_2(VAR_4);
   return VAR_4;
  }
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 return &VAR_3->gem;
}
