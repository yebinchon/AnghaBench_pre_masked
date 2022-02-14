
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_private_state_funcs {int dummy; } ;
struct drm_private_state {int dummy; } ;
struct drm_private_obj {int head; struct drm_private_state_funcs const* funcs; struct drm_private_state* state; int lock; } ;
struct TYPE_2__ {int privobj_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_private_obj*,int ,int) ;

void
FUNC_3(struct drm_device *VAR_0,
       struct drm_private_obj *VAR_1,
       struct drm_private_state *VAR_2,
       const struct drm_private_state_funcs *VAR_3)
{
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 FUNC_0(&VAR_1->lock);

 VAR_1->state = VAR_2;
 VAR_1->funcs = VAR_3;
 FUNC_1(&VAR_1->head, &VAR_0->mode_config.privobj_list);
}
