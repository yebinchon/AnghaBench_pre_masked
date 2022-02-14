
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_panel* panel; } ;
struct rockchip_dp_device {TYPE_1__ plat_data; int adp; struct device* dev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,int *) ;
 struct rockchip_dp_device* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int ,int,int ,struct drm_panel**,int *) ;
 int FUNC_4 (struct platform_device*,struct rockchip_dp_device*) ;
 int VAR_3 ;
 int FUNC_5 (struct rockchip_dp_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct drm_panel *VAR_6 = ((void*)0);
 struct rockchip_dp_device *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->of_node, 1, 0, &VAR_6, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_2(VAR_5, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = VAR_5;
 VAR_7->adp = FUNC_0(-VAR_0);
 VAR_7->plat_data.panel = VAR_6;

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(VAR_4, VAR_7);

 return FUNC_1(VAR_5, &VAR_3);
}
