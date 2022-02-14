
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * suggested_y_property; int * suggested_x_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct drm_device*,int ,char*,int ,int) ;

int FUNC_1(struct drm_device *VAR_2)
{
 if (VAR_2->mode_config.suggested_x_property && VAR_2->mode_config.suggested_y_property)
  return 0;

 VAR_2->mode_config.suggested_x_property =
  FUNC_0(VAR_2, VAR_0, "suggested X", 0, 0xffffffff);

 VAR_2->mode_config.suggested_y_property =
  FUNC_0(VAR_2, VAR_0, "suggested Y", 0, 0xffffffff);

 if (VAR_2->mode_config.suggested_x_property == ((void*)0) ||
     VAR_2->mode_config.suggested_y_property == ((void*)0))
  return -VAR_1;
 return 0;
}
