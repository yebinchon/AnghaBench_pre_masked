
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_private {void* mapping; struct device* dma_dev; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct drm_device*,struct device*) ;
 void* FUNC_7 (struct device*) ;
 int VAR_5 ;

int FUNC_8(struct drm_device *VAR_6, struct device *VAR_7)
{
 struct exynos_drm_private *VAR_8 = VAR_6->dev_private;

 if (!VAR_8->dma_dev) {
  VAR_8->dma_dev = VAR_7;
  FUNC_0("Exynos DRM: using %s device for DMA mapping operations\n",
    FUNC_5(VAR_7));
 }

 if (!FUNC_1(VAR_1))
  return 0;

 if (!VAR_8->mapping) {
  void *VAR_9;

  if (FUNC_1(VAR_0))
   VAR_9 = FUNC_4(&VAR_5,
    VAR_4, VAR_3);
  else if (FUNC_1(VAR_2))
   VAR_9 = FUNC_7(VAR_8->dma_dev);

  if (FUNC_2(VAR_9))
   return FUNC_3(VAR_9);
  VAR_8->mapping = VAR_9;
 }

 return FUNC_6(VAR_6, VAR_7);
}
