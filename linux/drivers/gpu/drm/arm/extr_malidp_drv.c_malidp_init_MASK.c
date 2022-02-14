
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malidp_hw_device {int max_line_size; int min_line_size; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct TYPE_2__ {int allow_fb_modifiers; int * helper_private; int * funcs; int max_height; int max_width; int min_height; int min_width; } ;
struct drm_device {TYPE_1__ mode_config; struct malidp_drm* dev_private; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_2)
{
 int VAR_3;
 struct malidp_drm *VAR_4 = VAR_2->dev_private;
 struct malidp_hw_device *VAR_5 = VAR_4->dev;

 FUNC_1(VAR_2);

 VAR_2->mode_config.min_width = VAR_5->min_line_size;
 VAR_2->mode_config.min_height = VAR_5->min_line_size;
 VAR_2->mode_config.max_width = VAR_5->max_line_size;
 VAR_2->mode_config.max_height = VAR_5->max_line_size;
 VAR_2->mode_config.funcs = &VAR_0;
 VAR_2->mode_config.helper_private = &VAR_1;
 VAR_2->mode_config.allow_fb_modifiers = 1;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto crtc_fail;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto crtc_fail;

 return 0;

crtc_fail:
 FUNC_0(VAR_2);
 return VAR_3;
}
