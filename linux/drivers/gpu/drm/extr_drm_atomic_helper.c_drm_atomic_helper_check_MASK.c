
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ normalize_zpos; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_atomic_state {int async_update; scalar_t__ legacy_cursor_update; } ;


 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_atomic_state*) ;

int FUNC_5(struct drm_device *VAR_0,
       struct drm_atomic_state *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (VAR_0->mode_config.normalize_zpos) {
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->legacy_cursor_update)
  VAR_1->async_update = !FUNC_0(VAR_0, VAR_1);

 FUNC_4(VAR_1);

 return VAR_2;
}
