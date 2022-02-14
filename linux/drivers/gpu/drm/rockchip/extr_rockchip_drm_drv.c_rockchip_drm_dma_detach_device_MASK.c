
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_drm_private {struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct iommu_domain*,struct device*) ;
 int VAR_0 ;

void FUNC_1(struct drm_device *VAR_1,
        struct device *VAR_2)
{
 struct rockchip_drm_private *VAR_3 = VAR_1->dev_private;
 struct iommu_domain *VAR_4 = VAR_3->domain;

 if (!VAR_0)
  return;

 FUNC_0(VAR_4, VAR_2);
}
