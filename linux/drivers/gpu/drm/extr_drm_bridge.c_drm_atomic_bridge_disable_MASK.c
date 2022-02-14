
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_bridge {TYPE_1__* funcs; struct drm_bridge* next; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_2__ {int (* disable ) (struct drm_bridge*) ;int (* atomic_disable ) (struct drm_bridge*,struct drm_atomic_state*) ;} ;


 int FUNC_0 (struct drm_bridge*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_bridge*) ;

void FUNC_2(struct drm_bridge *VAR_0,
          struct drm_atomic_state *VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0->next, VAR_1);

 if (VAR_0->funcs->atomic_disable)
  VAR_0->funcs->atomic_disable(VAR_0, VAR_1);
 else if (VAR_0->funcs->disable)
  VAR_0->funcs->disable(VAR_0);
}
