
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_gem_object {int dummy; } ;
struct TYPE_3__ {int shrink_list; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;


 int FUNC_0 (struct drm_i915_gem_object*,int *) ;
 TYPE_2__* FUNC_1 (struct drm_i915_gem_object*) ;

void FUNC_2(struct drm_i915_gem_object *VAR_0)
{
 FUNC_0(VAR_0,
       &FUNC_1(VAR_0)->mm.shrink_list);
}
