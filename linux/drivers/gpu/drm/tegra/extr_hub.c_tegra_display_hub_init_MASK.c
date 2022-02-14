
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {struct tegra_display_hub* hub; } ;
struct tegra_display_hub_state {int base; } ;
struct tegra_display_hub {int base; } ;
struct host1x_client {int parent; } ;
struct drm_device {struct tegra_drm* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int *,int *,int *) ;
 struct tegra_display_hub_state* FUNC_2 (int,int ) ;
 int VAR_2 ;
 struct tegra_display_hub* FUNC_3 (struct host1x_client*) ;

__attribute__((used)) static int FUNC_4(struct host1x_client *VAR_3)
{
 struct tegra_display_hub *VAR_4 = FUNC_3(VAR_3);
 struct drm_device *VAR_5 = FUNC_0(VAR_3->parent);
 struct tegra_drm *VAR_6 = VAR_5->dev_private;
 struct tegra_display_hub_state *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_1(VAR_5, &VAR_4->base, &VAR_7->base,
        &VAR_2);

 VAR_6->hub = VAR_4;

 return 0;
}
