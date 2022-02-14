
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_private_state {int dummy; } ;
struct drm_private_obj {int dummy; } ;
struct drm_atomic_state {int num_private_objs; TYPE_1__* private_objs; } ;
struct TYPE_2__ {struct drm_private_state* old_state; struct drm_private_obj* ptr; } ;



struct drm_private_state *
FUNC_0(struct drm_atomic_state *VAR_0,
         struct drm_private_obj *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_private_objs; VAR_2++)
  if (VAR_1 == VAR_0->private_objs[VAR_2].ptr)
   return VAR_0->private_objs[VAR_2].old_state;

 return ((void*)0);
}
