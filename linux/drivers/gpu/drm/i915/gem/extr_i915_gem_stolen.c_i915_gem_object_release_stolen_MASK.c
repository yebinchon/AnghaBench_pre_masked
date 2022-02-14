
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_node {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_gem_object {int stolen; TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 struct drm_mm_node* FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*,struct drm_mm_node*) ;
 int FUNC_3 (struct drm_mm_node*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct drm_i915_gem_object *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_4(VAR_0->base.dev);
 struct drm_mm_node *VAR_2 = FUNC_1(&VAR_0->stolen);

 FUNC_0(!VAR_2);

 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_2);
}
