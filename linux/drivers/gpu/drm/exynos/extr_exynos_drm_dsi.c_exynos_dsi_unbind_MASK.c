
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int dsi_host; } ;
struct drm_encoder {int dummy; } ;
struct device {int dummy; } ;


 struct drm_encoder* FUNC_0 (struct device*) ;
 struct exynos_dsi* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
    void *VAR_2)
{
 struct drm_encoder *VAR_3 = FUNC_0(VAR_0);
 struct exynos_dsi *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_3);

 FUNC_3(&VAR_4->dsi_host);
}
