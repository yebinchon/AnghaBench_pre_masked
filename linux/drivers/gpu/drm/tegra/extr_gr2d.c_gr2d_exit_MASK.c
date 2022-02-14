
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_client {int dummy; } ;
struct tegra_drm {int dummy; } ;
struct host1x_client {int * syncpts; int parent; } ;
struct gr2d {int channel; int group; } ;
struct drm_device {struct tegra_drm* dev_private; } ;


 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct host1x_client*,int ) ;
 int FUNC_3 (int ) ;
 struct tegra_drm_client* FUNC_4 (struct host1x_client*) ;
 int FUNC_5 (struct tegra_drm*,struct tegra_drm_client*) ;
 struct gr2d* FUNC_6 (struct tegra_drm_client*) ;

__attribute__((used)) static int FUNC_7(struct host1x_client *VAR_0)
{
 struct tegra_drm_client *VAR_1 = FUNC_4(VAR_0);
 struct drm_device *VAR_2 = FUNC_0(VAR_0->parent);
 struct tegra_drm *VAR_3 = VAR_2->dev_private;
 struct gr2d *VAR_4 = FUNC_6(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_5(VAR_3, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_0, VAR_4->group);
 FUNC_3(VAR_0->syncpts[0]);
 FUNC_1(VAR_4->channel);

 return 0;
}
