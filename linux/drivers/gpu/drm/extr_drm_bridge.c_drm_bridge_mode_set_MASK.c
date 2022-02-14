
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int dummy; } ;
struct drm_bridge {struct drm_bridge* next; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* mode_set ) (struct drm_bridge*,struct drm_display_mode const*,struct drm_display_mode const*) ;} ;


 int FUNC_0 (struct drm_bridge*,struct drm_display_mode const*,struct drm_display_mode const*) ;

void FUNC_1(struct drm_bridge *VAR_0,
    const struct drm_display_mode *VAR_1,
    const struct drm_display_mode *VAR_2)
{
 if (!VAR_0)
  return;

 if (VAR_0->funcs->mode_set)
  VAR_0->funcs->mode_set(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_0->next, VAR_1, VAR_2);
}
