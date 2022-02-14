
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_config {TYPE_1__* funcs; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_atomic_state {struct drm_device* dev; } ;
struct TYPE_2__ {int (* atomic_state_clear ) (struct drm_atomic_state*) ;} ;


 int FUNC_0 (struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;

void FUNC_2(struct drm_atomic_state *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_mode_config *VAR_2 = &VAR_1->mode_config;

 if (VAR_2->funcs->atomic_state_clear)
  VAR_2->funcs->atomic_state_clear(VAR_0);
 else
  FUNC_0(VAR_0);
}
