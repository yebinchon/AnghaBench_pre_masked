
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_2__ {int dirty; } ;
struct drm_i915_gem_object {TYPE_1__ mm; } ;


 int FUNC_0 (struct drm_i915_gem_object*,struct sg_table*) ;
 int FUNC_1 (struct drm_i915_gem_object*,struct sg_table*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_gem_object *VAR_0,
      struct sg_table *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1);

 VAR_0->mm.dirty = 0;
}
