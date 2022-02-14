
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int skip_connector; struct drm_panel* panel; } ;
struct exynos_dp_device {struct drm_bridge* ptn_bridge; TYPE_1__ plat_data; } ;
struct drm_panel {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (struct device*,int *) ;
 struct exynos_dp_device* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int ,int ,int ,struct drm_panel**,struct drm_bridge**) ;
 int VAR_2 ;
 struct drm_panel* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (struct platform_device*,struct exynos_dp_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct device_node *VAR_5;
 struct exynos_dp_device *VAR_6;
 struct drm_panel *VAR_7;
 struct drm_bridge *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(&VAR_3->dev, sizeof(struct exynos_dp_device),
     VAR_1);
 if (!VAR_6)
  return -VAR_0;






 FUNC_8(VAR_3, VAR_6);


 VAR_5 = FUNC_7(VAR_4->of_node, "panel", 0);
 if (VAR_5) {
  VAR_6->plat_data.panel = FUNC_5(VAR_5);

  FUNC_6(VAR_5);
  if (FUNC_0(VAR_6->plat_data.panel))
   return FUNC_1(VAR_6->plat_data.panel);

  goto out;
 }

 VAR_9 = FUNC_4(VAR_4->of_node, 0, 0, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_6->plat_data.panel = VAR_7;
 VAR_6->plat_data.skip_connector = !!VAR_8;
 VAR_6->ptn_bridge = VAR_8;

out:
 return FUNC_2(&VAR_3->dev, &VAR_2);
}
