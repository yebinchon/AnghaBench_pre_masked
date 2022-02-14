
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_client {int dummy; } ;
struct host1x_client {int * syncpts; int dev; int parent; } ;
struct gr3d {int channel; int group; } ;
struct drm_device {int dev_private; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct drm_device* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct host1x_client*,int) ;
 int FUNC_7 (struct host1x_client*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct host1x_client*,unsigned long) ;
 struct tegra_drm_client* FUNC_10 (struct host1x_client*) ;
 int FUNC_11 (int ,struct tegra_drm_client*) ;
 struct gr3d* FUNC_12 (struct tegra_drm_client*) ;

__attribute__((used)) static int FUNC_13(struct host1x_client *VAR_2)
{
 struct tegra_drm_client *VAR_3 = FUNC_10(VAR_2);
 struct drm_device *VAR_4 = FUNC_3(VAR_2->parent);
 unsigned long VAR_5 = VAR_1;
 struct gr3d *VAR_6 = FUNC_12(VAR_3);
 int VAR_7;

 VAR_6->channel = FUNC_5(VAR_2->dev);
 if (!VAR_6->channel)
  return -VAR_0;

 VAR_2->syncpts[0] = FUNC_9(VAR_2, VAR_5);
 if (!VAR_2->syncpts[0]) {
  VAR_7 = -VAR_0;
  FUNC_2(VAR_2->dev, "failed to request syncpoint: %d\n", VAR_7);
  goto put;
 }

 VAR_6->group = FUNC_6(VAR_2, 0);
 if (FUNC_0(VAR_6->group)) {
  VAR_7 = FUNC_1(VAR_6->group);
  FUNC_2(VAR_2->dev, "failed to attach to domain: %d\n", VAR_7);
  goto free;
 }

 VAR_7 = FUNC_11(VAR_4->dev_private, VAR_3);
 if (VAR_7 < 0) {
  FUNC_2(VAR_2->dev, "failed to register client: %d\n", VAR_7);
  goto detach;
 }

 return 0;

detach:
 FUNC_7(VAR_2, VAR_6->group);
free:
 FUNC_8(VAR_2->syncpts[0]);
put:
 FUNC_4(VAR_6->channel);
 return VAR_7;
}
