
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int crtc; } ;
struct exynos_dp_device {struct drm_encoder encoder; } ;
struct analogix_dp_plat_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct exynos_dp_device* FUNC_1 (struct analogix_dp_plat_data*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct analogix_dp_plat_data *VAR_1,
    bool VAR_2)
{
 struct exynos_dp_device *VAR_3 = FUNC_1(VAR_1);
 struct drm_encoder *VAR_4 = &VAR_3->encoder;

 if (!VAR_4->crtc)
  return -VAR_0;

 FUNC_0(FUNC_2(VAR_4->crtc), VAR_2);

 return 0;
}
