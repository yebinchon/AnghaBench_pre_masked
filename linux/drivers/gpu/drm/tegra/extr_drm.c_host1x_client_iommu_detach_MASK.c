
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {struct iommu_group* group; int domain; } ;
struct iommu_group {int dummy; } ;
struct host1x_client {int parent; } ;
struct drm_device {struct tegra_drm* dev_private; } ;


 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iommu_group*) ;
 int FUNC_2 (struct iommu_group*) ;

void FUNC_3(struct host1x_client *VAR_0,
    struct iommu_group *VAR_1)
{
 struct drm_device *VAR_2 = FUNC_0(VAR_0->parent);
 struct tegra_drm *VAR_3 = VAR_2->dev_private;

 if (VAR_1) {
  if (VAR_1 == VAR_3->group) {
   FUNC_1(VAR_3->domain, VAR_1);
   VAR_3->group = ((void*)0);
  }

  FUNC_2(VAR_1);
 }
}
