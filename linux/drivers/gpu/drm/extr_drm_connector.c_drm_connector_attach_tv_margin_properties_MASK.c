
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_bottom_margin_property; int tv_top_margin_property; int tv_right_margin_property; int tv_left_margin_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {int base; struct drm_device* dev; } ;


 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_0(&VAR_0->base,
       VAR_1->mode_config.tv_left_margin_property,
       0);
 FUNC_0(&VAR_0->base,
       VAR_1->mode_config.tv_right_margin_property,
       0);
 FUNC_0(&VAR_0->base,
       VAR_1->mode_config.tv_top_margin_property,
       0);
 FUNC_0(&VAR_0->base,
       VAR_1->mode_config.tv_bottom_margin_property,
       0);
}
