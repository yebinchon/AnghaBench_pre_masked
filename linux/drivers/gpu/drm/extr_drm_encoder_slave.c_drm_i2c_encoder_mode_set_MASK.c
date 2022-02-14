
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {int (* mode_set ) (struct drm_encoder*,struct drm_display_mode*,struct drm_display_mode*) ;} ;


 TYPE_1__* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_display_mode*,struct drm_display_mode*) ;

void FUNC_2(struct drm_encoder *VAR_0,
  struct drm_display_mode *VAR_1,
  struct drm_display_mode *VAR_2)
{
 FUNC_0(VAR_0)->mode_set(VAR_0, VAR_1, VAR_2);
}
