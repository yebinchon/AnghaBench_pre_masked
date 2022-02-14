
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {unsigned int flags; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_1,
        struct exynos_drm_gem *VAR_2)
{
 unsigned int VAR_3;





 if (FUNC_2(VAR_1))
  return 0;

 VAR_3 = VAR_2->flags;





 if (FUNC_1(VAR_3)) {
  FUNC_0(VAR_1->dev,
         "Non-contiguous GEM memory is not supported.\n");
  return -VAR_0;
 }

 return 0;
}
