
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp {int dummy; } ;
struct gsc_context {struct exynos_drm_ipp ipp; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct gsc_context* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct exynos_drm_ipp*) ;
 int FUNC_2 (struct drm_device*,struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
   void *VAR_2)
{
 struct gsc_context *VAR_3 = FUNC_0(VAR_0);
 struct drm_device *VAR_4 = VAR_2;
 struct exynos_drm_ipp *VAR_5 = &VAR_3->ipp;

 FUNC_1(VAR_0, VAR_5);
 FUNC_2(VAR_4, VAR_0);
}
