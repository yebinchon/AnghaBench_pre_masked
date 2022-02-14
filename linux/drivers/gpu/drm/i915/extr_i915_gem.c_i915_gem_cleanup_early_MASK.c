
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shrink_count; int free_count; int free_list; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_i915_private *VAR_0)
{
 FUNC_3(VAR_0);
 FUNC_0(!FUNC_5(&VAR_0->mm.free_list));
 FUNC_0(FUNC_2(&VAR_0->mm.free_count));
 FUNC_1(VAR_0->mm.shrink_count);

 FUNC_4(VAR_0);
}
