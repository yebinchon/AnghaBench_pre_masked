
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {unsigned int flags; int base; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*,unsigned long) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct exynos_drm_gem* FUNC_2 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_3 (struct exynos_drm_gem*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct exynos_drm_gem*) ;
 struct exynos_drm_gem* FUNC_6 (struct drm_device*,unsigned long) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct exynos_drm_gem*) ;
 unsigned long FUNC_9 (unsigned long,int ) ;

struct exynos_drm_gem *FUNC_10(struct drm_device *VAR_4,
          unsigned int VAR_5,
          unsigned long VAR_6)
{
 struct exynos_drm_gem *VAR_7;
 int VAR_8;

 if (VAR_5 & ~(VAR_1)) {
  FUNC_0(VAR_4->dev,
         "invalid GEM buffer flags: %u\n", VAR_5);
  return FUNC_2(-VAR_0);
 }

 if (!VAR_6) {
  FUNC_0(VAR_4->dev, "invalid GEM buffer size: %lu\n", VAR_6);
  return FUNC_2(-VAR_0);
 }

 VAR_6 = FUNC_9(VAR_6, VAR_3);

 VAR_7 = FUNC_6(VAR_4, VAR_6);
 if (FUNC_3(VAR_7))
  return VAR_7;

 if (!FUNC_7(VAR_4) && (VAR_5 & VAR_2)) {




  VAR_5 &= ~VAR_2;
  FUNC_1("Non-contiguous allocation is not supported without IOMMU, falling back to contiguous buffer\n");
 }


 VAR_7->flags = VAR_5;

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8 < 0) {
  FUNC_4(&VAR_7->base);
  FUNC_8(VAR_7);
  return FUNC_2(VAR_8);
 }

 return VAR_7;
}
