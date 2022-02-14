
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_node {int dummy; } ;
struct TYPE_2__ {int stolen_lock; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_0,
     struct drm_mm_node *VAR_1)
{
 FUNC_1(&VAR_0->mm.stolen_lock);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_0->mm.stolen_lock);
}
