
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int dummy; } ;
struct drm_bridge {struct drm_bridge* next; TYPE_1__* funcs; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int (* mode_valid ) (struct drm_bridge*,struct drm_display_mode const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_bridge*,struct drm_display_mode const*) ;

enum drm_mode_status FUNC_1(struct drm_bridge *VAR_1,
        const struct drm_display_mode *VAR_2)
{
 enum drm_mode_status VAR_3 = VAR_0;

 if (!VAR_1)
  return VAR_3;

 if (VAR_1->funcs->mode_valid)
  VAR_3 = VAR_1->funcs->mode_valid(VAR_1, VAR_2);

 if (VAR_3 != VAR_0)
  return VAR_3;

 return FUNC_1(VAR_1->next, VAR_2);
}
