
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_width; int max_height; int * helper_private; int * funcs; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct drm_device *VAR_2)
{
 FUNC_0(VAR_2);

 VAR_2->mode_config.max_width = 8192;
 VAR_2->mode_config.max_height = 8192;

 VAR_2->mode_config.funcs = &VAR_0;
 VAR_2->mode_config.helper_private = &VAR_1;
}
