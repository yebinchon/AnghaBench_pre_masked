
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int filp; } ;
struct exynos_drm_gem {unsigned long size; struct drm_gem_object base; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 struct exynos_drm_gem* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_device*,struct drm_gem_object*,unsigned long) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct exynos_drm_gem*) ;
 struct exynos_drm_gem* FUNC_7 (int,int ) ;

__attribute__((used)) static struct exynos_drm_gem *FUNC_8(struct drm_device *VAR_2,
        unsigned long VAR_3)
{
 struct exynos_drm_gem *VAR_4;
 struct drm_gem_object *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_7(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_2(-VAR_0);

 VAR_4->size = VAR_3;
 VAR_5 = &VAR_4->base;

 VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_3);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2->dev, "failed to initialize gem object\n");
  FUNC_6(VAR_4);
  return FUNC_2(VAR_6);
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 < 0) {
  FUNC_5(VAR_5);
  FUNC_6(VAR_4);
  return FUNC_2(VAR_6);
 }

 FUNC_0(VAR_2->dev, "created file object = %pK\n", VAR_5->filp);

 return VAR_4;
}
