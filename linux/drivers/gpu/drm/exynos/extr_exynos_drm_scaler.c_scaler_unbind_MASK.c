
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp {int dummy; } ;
struct scaler_context {int dev; int drm_dev; struct exynos_drm_ipp ipp; } ;
struct device {int dummy; } ;


 struct scaler_context* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct exynos_drm_ipp*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
   void *VAR_2)
{
 struct scaler_context *VAR_3 = FUNC_0(VAR_0);
 struct exynos_drm_ipp *VAR_4 = &VAR_3->ipp;

 FUNC_1(VAR_0, VAR_4);
 FUNC_2(VAR_3->drm_dev, VAR_3->dev);
}
