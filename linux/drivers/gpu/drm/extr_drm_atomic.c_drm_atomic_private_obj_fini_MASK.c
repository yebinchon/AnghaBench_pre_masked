
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_private_obj {int lock; int state; TYPE_1__* funcs; int head; } ;
struct TYPE_2__ {int (* atomic_destroy_state ) (struct drm_private_obj*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_private_obj*,int ) ;

void
FUNC_3(struct drm_private_obj *VAR_0)
{
 FUNC_1(&VAR_0->head);
 VAR_0->funcs->atomic_destroy_state(VAR_0, VAR_0->state);
 FUNC_0(&VAR_0->lock);
}
