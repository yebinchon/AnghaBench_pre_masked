
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preferred_depth; int * helper_private; int max_height; int max_width; int min_height; int min_width; int * funcs; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct vkms_device {struct drm_device drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vkms_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct vkms_device *VAR_6)
{
 struct drm_device *VAR_7 = &VAR_6->drm;

 FUNC_0(VAR_7);
 VAR_7->mode_config.funcs = &VAR_5;
 VAR_7->mode_config.min_width = VAR_1;
 VAR_7->mode_config.min_height = VAR_3;
 VAR_7->mode_config.max_width = VAR_0;
 VAR_7->mode_config.max_height = VAR_2;
 VAR_7->mode_config.preferred_depth = 24;
 VAR_7->mode_config.helper_private = &VAR_4;

 return FUNC_1(VAR_6, 0);
}
