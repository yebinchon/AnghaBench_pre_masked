
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int size; } ;
struct drm_i915_private {int drm; } ;
struct drm_i915_gem_object {int read_domains; struct drm_mm_node* stolen; int base; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ) ;
 struct drm_i915_gem_object* FUNC_2 () ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,int *) ;
 scalar_t__ FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static struct drm_i915_gem_object *
FUNC_7(struct drm_i915_private *VAR_5,
          struct drm_mm_node *VAR_6)
{
 struct drm_i915_gem_object *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_2();
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_5->drm, &VAR_7->base, VAR_6->size);
 FUNC_4(VAR_7, &VAR_4);

 VAR_7->stolen = VAR_6;
 VAR_7->read_domains = VAR_2 | VAR_3;
 VAR_8 = FUNC_0(VAR_5) ? VAR_0 : VAR_1;
 FUNC_6(VAR_7, VAR_8);

 if (FUNC_5(VAR_7))
  goto cleanup;

 return VAR_7;

cleanup:
 FUNC_3(VAR_7);
 return ((void*)0);
}
