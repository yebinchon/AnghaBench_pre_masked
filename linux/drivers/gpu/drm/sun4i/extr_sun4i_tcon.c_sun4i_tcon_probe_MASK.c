
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_tcon_quirks {scalar_t__ has_channel_0; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct drm_panel {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct device_node*,int,int ,struct drm_panel**,struct drm_bridge**) ;
 struct sun4i_tcon_quirks* FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 const struct sun4i_tcon_quirks *VAR_4;
 struct drm_bridge *VAR_5;
 struct drm_panel *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(&VAR_2->dev);


 if (VAR_4->has_channel_0) {
  VAR_7 = FUNC_1(VAR_3, 1, 0, &VAR_6, &VAR_5);
  if (VAR_7 == -VAR_0)
   return VAR_7;
 }

 return FUNC_0(&VAR_2->dev, &VAR_1);
}
