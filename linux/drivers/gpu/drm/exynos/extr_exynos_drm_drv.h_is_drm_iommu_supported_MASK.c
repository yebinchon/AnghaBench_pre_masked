
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_private {scalar_t__ mapping; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;



__attribute__((used)) static inline bool FUNC_0(struct drm_device *VAR_0)
{
 struct exynos_drm_private *VAR_1 = VAR_0->dev_private;

 return VAR_1->mapping ? 1 : 0;
}
