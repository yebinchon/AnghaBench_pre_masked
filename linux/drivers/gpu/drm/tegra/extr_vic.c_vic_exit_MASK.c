
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vic {int * domain; int channel; } ;
struct tegra_drm_client {int dummy; } ;
struct tegra_drm {int dummy; } ;
struct iommu_group {int dummy; } ;
struct host1x_client {int * syncpts; int parent; int dev; } ;
struct drm_device {struct tegra_drm* dev_private; } ;


 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tegra_drm_client* FUNC_3 (struct host1x_client*) ;
 int FUNC_4 (int *,struct iommu_group*) ;
 struct iommu_group* FUNC_5 (int ) ;
 int FUNC_6 (struct tegra_drm*,struct tegra_drm_client*) ;
 struct vic* FUNC_7 (struct tegra_drm_client*) ;

__attribute__((used)) static int FUNC_8(struct host1x_client *VAR_0)
{
 struct tegra_drm_client *VAR_1 = FUNC_3(VAR_0);
 struct iommu_group *VAR_2 = FUNC_5(VAR_0->dev);
 struct drm_device *VAR_3 = FUNC_0(VAR_0->parent);
 struct tegra_drm *VAR_4 = VAR_3->dev_private;
 struct vic *VAR_5 = FUNC_7(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_6(VAR_4, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(VAR_0->syncpts[0]);
 FUNC_1(VAR_5->channel);

 if (VAR_5->domain) {
  FUNC_4(VAR_5->domain, VAR_2);
  VAR_5->domain = ((void*)0);
 }

 return 0;
}
