
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp {struct drm_device* drm_dev; } ;
struct rot_context {int num_formats; int formats; struct drm_device* drm_dev; struct exynos_drm_ipp ipp; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rot_context* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct exynos_drm_ipp*,int *,int,int ,int ,char*) ;
 int FUNC_3 (struct drm_device*,struct device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct device *VAR_4, void *VAR_5)
{
 struct rot_context *VAR_6 = FUNC_0(VAR_3);
 struct drm_device *VAR_7 = VAR_5;
 struct exynos_drm_ipp *VAR_8 = &VAR_6->ipp;

 VAR_6->drm_dev = VAR_7;
 VAR_8->drm_dev = VAR_7;
 FUNC_3(VAR_7, VAR_3);

 FUNC_2(VAR_3, VAR_8, &VAR_2,
      VAR_0 | VAR_1,
      VAR_6->formats, VAR_6->num_formats, "rotator");

 FUNC_1(VAR_3, "The exynos rotator has been probed successfully\n");

 return 0;
}
