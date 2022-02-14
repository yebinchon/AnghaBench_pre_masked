
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_drm_private {int domain; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,struct device*) ;
 int VAR_0 ;

int FUNC_2(struct drm_device *VAR_1,
       struct device *VAR_2)
{
 struct rockchip_drm_private *VAR_3 = VAR_1->dev_private;
 int VAR_4;

 if (!VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_3->domain, VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_2, "Failed to attach iommu device\n");
  return VAR_4;
 }

 return 0;
}
