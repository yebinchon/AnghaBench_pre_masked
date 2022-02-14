
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_private {struct device* dma_dev; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;
struct device {int dummy; } ;



__attribute__((used)) static inline struct device *FUNC_0(struct drm_device *VAR_0)
{
 struct exynos_drm_private *VAR_1 = VAR_0->dev_private;

 return VAR_1->dma_dev;
}
