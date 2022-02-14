
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shrink_list; int purge_list; int free_list; int obj_lock; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_0)
{
 FUNC_3(&VAR_0->mm.obj_lock);

 FUNC_2(&VAR_0->mm.free_list);

 FUNC_0(&VAR_0->mm.purge_list);
 FUNC_0(&VAR_0->mm.shrink_list);

 FUNC_1(VAR_0);
}
