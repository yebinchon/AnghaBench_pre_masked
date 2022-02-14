
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {int (* mode_fixup ) (struct drm_encoder*,struct drm_display_mode const*,struct drm_display_mode*) ;} ;


 TYPE_1__* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_display_mode const*,struct drm_display_mode*) ;

bool FUNC_2(struct drm_encoder *VAR_0,
  const struct drm_display_mode *VAR_1,
  struct drm_display_mode *VAR_2)
{
 if (!FUNC_0(VAR_0)->mode_fixup)
  return 1;

 return FUNC_0(VAR_0)->mode_fixup(VAR_0, VAR_1, VAR_2);
}
