
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp {int dummy; } ;
struct gsc_context {int num_formats; int formats; struct drm_device* drm_dev; struct exynos_drm_ipp ipp; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gsc_context* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct exynos_drm_ipp*,int *,int,int ,int ,char*) ;
 int FUNC_3 (struct drm_device*,struct device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct device *VAR_6, void *VAR_7)
{
 struct gsc_context *VAR_8 = FUNC_0(VAR_5);
 struct drm_device *VAR_9 = VAR_7;
 struct exynos_drm_ipp *VAR_10 = &VAR_8->ipp;

 VAR_8->drm_dev = VAR_9;
 VAR_8->drm_dev = VAR_9;
 FUNC_3(VAR_9, VAR_5);

 FUNC_2(VAR_5, VAR_10, &VAR_4,
   VAR_1 | VAR_2 |
   VAR_3 | VAR_0,
   VAR_8->formats, VAR_8->num_formats, "gsc");

 FUNC_1(VAR_5, "The exynos gscaler has been probed successfully\n");

 return 0;
}
