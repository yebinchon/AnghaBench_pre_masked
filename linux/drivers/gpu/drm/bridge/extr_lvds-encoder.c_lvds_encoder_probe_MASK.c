
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int * funcs; int of_node; } ;
struct lvds_encoder {TYPE_1__ bridge; struct drm_panel* panel_bridge; struct drm_panel* powerdown_gpio; } ;
struct drm_panel {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct drm_panel* FUNC_4 (struct device*,struct drm_panel*,int ) ;
 struct drm_panel* FUNC_5 (struct device*,char*,int ) ;
 struct lvds_encoder* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 struct drm_panel* FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (struct device_node*,char*) ;
 struct device_node* FUNC_10 (int ,int) ;
 struct device_node* FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct device_node*) ;
 int FUNC_13 (struct platform_device*,struct lvds_encoder*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct device_node *VAR_9;
 struct device_node *VAR_10;
 struct device_node *VAR_11;
 struct drm_panel *VAR_12;
 struct lvds_encoder *VAR_13;

 VAR_13 = FUNC_6(VAR_8, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->powerdown_gpio = FUNC_5(VAR_8, "powerdown",
              VAR_5);
 if (FUNC_0(VAR_13->powerdown_gpio)) {
  int VAR_14 = FUNC_1(VAR_13->powerdown_gpio);

  if (VAR_14 != -VAR_3)
   FUNC_3(VAR_8, "powerdown GPIO failure: %d\n", VAR_14);
  return VAR_14;
 }


 VAR_9 = FUNC_10(VAR_8->of_node, 1);
 if (!VAR_9) {
  FUNC_2(VAR_8, "port 1 not found\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_9(VAR_9, "endpoint");
 FUNC_12(VAR_9);
 if (!VAR_10) {
  FUNC_2(VAR_8, "no endpoint for port 1\n");
  return -VAR_2;
 }

 VAR_11 = FUNC_11(VAR_10);
 FUNC_12(VAR_10);
 if (!VAR_11) {
  FUNC_2(VAR_8, "no remote endpoint for port 1\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_8(VAR_11);
 FUNC_12(VAR_11);
 if (FUNC_0(VAR_12)) {
  FUNC_2(VAR_8, "panel not found, deferring probe\n");
  return FUNC_1(VAR_12);
 }

 VAR_13->panel_bridge =
  FUNC_4(VAR_8, VAR_12, VAR_0);
 if (FUNC_0(VAR_13->panel_bridge))
  return FUNC_1(VAR_13->panel_bridge);





 VAR_13->bridge.of_node = VAR_8->of_node;
 VAR_13->bridge.funcs = &VAR_6;
 FUNC_7(&VAR_13->bridge);

 FUNC_13(VAR_7, VAR_13);

 return 0;
}
