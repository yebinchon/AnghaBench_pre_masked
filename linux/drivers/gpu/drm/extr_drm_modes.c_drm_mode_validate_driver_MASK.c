
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct drm_device {TYPE_2__ mode_config; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_3__ {int (* mode_valid ) (struct drm_device*,struct drm_display_mode const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_display_mode const*) ;
 int FUNC_1 (struct drm_device*,struct drm_display_mode const*) ;

enum drm_mode_status
FUNC_2(struct drm_device *VAR_1,
   const struct drm_display_mode *VAR_2)
{
 enum drm_mode_status VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != VAR_0)
  return VAR_3;

 if (VAR_1->mode_config.funcs->mode_valid)
  return VAR_1->mode_config.funcs->mode_valid(VAR_1, VAR_2);
 else
  return VAR_0;
}
