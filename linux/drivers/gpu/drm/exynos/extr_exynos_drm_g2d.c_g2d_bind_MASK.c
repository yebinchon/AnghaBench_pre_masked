
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {struct drm_device* drm_dev; } ;
struct exynos_drm_private {struct device* g2d_dev; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct g2d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 int FUNC_3 (struct drm_device*,struct device*) ;
 int FUNC_4 (struct g2d_data*) ;
 int FUNC_5 (struct g2d_data*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct device *VAR_3, void *VAR_4)
{
 struct g2d_data *VAR_5 = FUNC_1(VAR_2);
 struct drm_device *VAR_6 = VAR_4;
 struct exynos_drm_private *VAR_7 = VAR_6->dev_private;
 int VAR_8;

 VAR_5->drm_dev = VAR_6;


 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2, "cmdlist init failed\n");
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_6, VAR_2);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2, "failed to enable iommu.\n");
  FUNC_4(VAR_5);
  return VAR_8;
 }
 VAR_7->g2d_dev = VAR_2;

 FUNC_2(VAR_2, "The Exynos G2D (ver %d.%d) successfully registered.\n",
   VAR_0, VAR_1);
 return 0;
}
