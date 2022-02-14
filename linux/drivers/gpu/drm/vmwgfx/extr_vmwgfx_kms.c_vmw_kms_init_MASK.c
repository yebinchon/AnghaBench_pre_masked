
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int texture_max_height; int texture_max_width; struct drm_device* dev; } ;
struct TYPE_2__ {int min_width; int min_height; int max_height; int max_width; int * funcs; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct vmw_private*) ;
 int VAR_0 ;
 int FUNC_3 (struct vmw_private*) ;
 int FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (struct vmw_private*) ;

int FUNC_6(struct vmw_private *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 int VAR_3;

 FUNC_0(VAR_2);
 VAR_2->mode_config.funcs = &VAR_0;
 VAR_2->mode_config.min_width = 1;
 VAR_2->mode_config.min_height = 1;
 VAR_2->mode_config.max_width = VAR_1->texture_max_width;
 VAR_2->mode_config.max_height = VAR_1->texture_max_height;

 FUNC_1(VAR_2);
 FUNC_2(VAR_1);

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  VAR_3 = FUNC_4(VAR_1);
  if (VAR_3)
   VAR_3 = FUNC_3(VAR_1);
 }

 return VAR_3;
}
