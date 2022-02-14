
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vic {int channel; scalar_t__ domain; int dev; } ;
struct tegra_drm_client {int dummy; } ;
struct tegra_drm {scalar_t__ domain; } ;
struct iommu_group {int dummy; } ;
struct host1x_client {int * syncpts; int dev; int parent; } ;
struct drm_device {struct tegra_drm* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct drm_device* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct host1x_client*,int ) ;
 struct tegra_drm_client* FUNC_6 (struct host1x_client*) ;
 int FUNC_7 (scalar_t__,struct iommu_group*) ;
 int FUNC_8 (scalar_t__,struct iommu_group*) ;
 struct iommu_group* FUNC_9 (int ) ;
 int FUNC_10 (struct tegra_drm*,struct tegra_drm_client*) ;
 struct vic* FUNC_11 (struct tegra_drm_client*) ;

__attribute__((used)) static int FUNC_12(struct host1x_client *VAR_1)
{
 struct tegra_drm_client *VAR_2 = FUNC_6(VAR_1);
 struct iommu_group *VAR_3 = FUNC_9(VAR_1->dev);
 struct drm_device *VAR_4 = FUNC_1(VAR_1->parent);
 struct tegra_drm *VAR_5 = VAR_4->dev_private;
 struct vic *VAR_6 = FUNC_11(VAR_2);
 int VAR_7;

 if (VAR_3 && VAR_5->domain) {
  VAR_7 = FUNC_7(VAR_5->domain, VAR_3);
  if (VAR_7 < 0) {
   FUNC_0(VAR_6->dev, "failed to attach to domain: %d\n",
    VAR_7);
   return VAR_7;
  }

  VAR_6->domain = VAR_5->domain;
 }

 VAR_6->channel = FUNC_3(VAR_1->dev);
 if (!VAR_6->channel) {
  VAR_7 = -VAR_0;
  goto detach;
 }

 VAR_1->syncpts[0] = FUNC_5(VAR_1, 0);
 if (!VAR_1->syncpts[0]) {
  VAR_7 = -VAR_0;
  goto free_channel;
 }

 VAR_7 = FUNC_10(VAR_5, VAR_2);
 if (VAR_7 < 0)
  goto free_syncpt;

 return 0;

free_syncpt:
 FUNC_4(VAR_1->syncpts[0]);
free_channel:
 FUNC_2(VAR_6->channel);
detach:
 if (VAR_3 && VAR_5->domain)
  FUNC_8(VAR_5->domain, VAR_3);

 return VAR_7;
}
