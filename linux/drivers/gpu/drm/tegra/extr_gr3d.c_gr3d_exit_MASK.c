
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_client {int dummy; } ;
struct host1x_client {int * syncpts; int parent; } ;
struct gr3d {int channel; int group; } ;
struct drm_device {int dev_private; } ;


 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct host1x_client*,int ) ;
 int FUNC_3 (int ) ;
 struct tegra_drm_client* FUNC_4 (struct host1x_client*) ;
 int FUNC_5 (int ,struct tegra_drm_client*) ;
 struct gr3d* FUNC_6 (struct tegra_drm_client*) ;

__attribute__((used)) static int FUNC_7(struct host1x_client *VAR_0)
{
 struct tegra_drm_client *VAR_1 = FUNC_4(VAR_0);
 struct drm_device *VAR_2 = FUNC_0(VAR_0->parent);
 struct gr3d *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_2->dev_private, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_0, VAR_3->group);
 FUNC_3(VAR_0->syncpts[0]);
 FUNC_1(VAR_3->channel);

 return 0;
}
