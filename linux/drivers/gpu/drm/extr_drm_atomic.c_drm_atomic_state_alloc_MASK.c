
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_config {TYPE_1__* funcs; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_2__ {struct drm_atomic_state* (* atomic_state_alloc ) (struct drm_device*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_2 (int,int ) ;
 struct drm_atomic_state* FUNC_3 (struct drm_device*) ;

struct drm_atomic_state *
FUNC_4(struct drm_device *VAR_1)
{
 struct drm_mode_config *VAR_2 = &VAR_1->mode_config;

 if (!VAR_2->funcs->atomic_state_alloc) {
  struct drm_atomic_state *VAR_3;

  VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
  if (!VAR_3)
   return ((void*)0);
  if (FUNC_0(VAR_1, VAR_3) < 0) {
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  return VAR_3;
 }

 return VAR_2->funcs->atomic_state_alloc(VAR_1);
}
