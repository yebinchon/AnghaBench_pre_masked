
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_private {int * dma_dev; int * mapping; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_device *VAR_1)
{
 struct exynos_drm_private *VAR_2 = VAR_1->dev_private;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_1(VAR_2->mapping);
 VAR_2->mapping = ((void*)0);
 VAR_2->dma_dev = ((void*)0);
}
