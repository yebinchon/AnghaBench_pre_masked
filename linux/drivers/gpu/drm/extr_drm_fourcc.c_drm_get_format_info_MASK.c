
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_fb_cmd2 {int pixel_format; } ;
struct drm_format_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_3__ {struct drm_format_info* (* get_format_info ) (struct drm_mode_fb_cmd2 const*) ;} ;


 struct drm_format_info* FUNC_0 (int ) ;
 struct drm_format_info* FUNC_1 (struct drm_mode_fb_cmd2 const*) ;

const struct drm_format_info *
FUNC_2(struct drm_device *VAR_0,
      const struct drm_mode_fb_cmd2 *VAR_1)
{
 const struct drm_format_info *VAR_2 = ((void*)0);

 if (VAR_0->mode_config.funcs->get_format_info)
  VAR_2 = VAR_0->mode_config.funcs->get_format_info(VAR_1);

 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_1->pixel_format);

 return VAR_2;
}
