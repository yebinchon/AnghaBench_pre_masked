
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* tv_bottom_margin_property; void* tv_top_margin_property; void* tv_right_margin_property; void* tv_left_margin_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 void* FUNC_0 (struct drm_device*,int ,char*,int ,int) ;

int FUNC_1(struct drm_device *VAR_1)
{
 if (VAR_1->mode_config.tv_left_margin_property)
  return 0;

 VAR_1->mode_config.tv_left_margin_property =
  FUNC_0(VAR_1, 0, "left margin", 0, 100);
 if (!VAR_1->mode_config.tv_left_margin_property)
  return -VAR_0;

 VAR_1->mode_config.tv_right_margin_property =
  FUNC_0(VAR_1, 0, "right margin", 0, 100);
 if (!VAR_1->mode_config.tv_right_margin_property)
  return -VAR_0;

 VAR_1->mode_config.tv_top_margin_property =
  FUNC_0(VAR_1, 0, "top margin", 0, 100);
 if (!VAR_1->mode_config.tv_top_margin_property)
  return -VAR_0;

 VAR_1->mode_config.tv_bottom_margin_property =
  FUNC_0(VAR_1, 0, "bottom margin", 0, 100);
 if (!VAR_1->mode_config.tv_bottom_margin_property)
  return -VAR_0;

 return 0;
}
