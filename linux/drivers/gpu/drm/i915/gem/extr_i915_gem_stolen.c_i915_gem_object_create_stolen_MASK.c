
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_node {int dummy; } ;
struct TYPE_2__ {int stolen; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct drm_i915_gem_object {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 struct drm_i915_gem_object* FUNC_0 (struct drm_i915_private*,struct drm_mm_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*,struct drm_mm_node*,int ,int) ;
 int FUNC_3 (struct drm_i915_private*,struct drm_mm_node*) ;
 int FUNC_4 (struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_5 (int,int ) ;

struct drm_i915_gem_object *
FUNC_6(struct drm_i915_private *VAR_1,
         resource_size_t VAR_2)
{
 struct drm_i915_gem_object *VAR_3;
 struct drm_mm_node *VAR_4;
 int VAR_5;

 if (!FUNC_1(&VAR_1->mm.stolen))
  return ((void*)0);

 if (VAR_2 == 0)
  return ((void*)0);

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_2, 4096);
 if (VAR_5) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_1, VAR_4);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_1, VAR_4);
 FUNC_4(VAR_4);
 return ((void*)0);
}
