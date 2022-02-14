
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_atomic_state* suspend_state; } ;
struct drm_device {TYPE_1__ mode_config; int fb_helper; } ;
struct drm_atomic_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;

int FUNC_6(struct drm_device *VAR_0)
{
 struct drm_atomic_state *VAR_1;

 if (!VAR_0)
  return 0;

 FUNC_4(VAR_0);
 FUNC_3(VAR_0->fb_helper, 1);
 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_0->fb_helper, 0);
  FUNC_5(VAR_0);
  return FUNC_1(VAR_1);
 }

 VAR_0->mode_config.suspend_state = VAR_1;

 return 0;
}
