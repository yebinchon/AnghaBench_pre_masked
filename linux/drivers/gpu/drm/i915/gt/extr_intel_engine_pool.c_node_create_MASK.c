
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_pool_node {struct drm_i915_gem_object* obj; int active; struct intel_engine_pool* pool; } ;
struct intel_engine_pool {int dummy; } ;
struct intel_engine_cs {int i915; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 struct intel_engine_pool_node* FUNC_0 (struct drm_i915_gem_object*) ;
 struct intel_engine_pool_node* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_gem_object*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 struct drm_i915_gem_object* FUNC_5 (int ,size_t) ;
 int FUNC_6 (struct intel_engine_pool_node*) ;
 struct intel_engine_pool_node* FUNC_7 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_engine_cs* FUNC_8 (struct intel_engine_pool*) ;

__attribute__((used)) static struct intel_engine_pool_node *
FUNC_9(struct intel_engine_pool *VAR_6, size_t VAR_7)
{
 struct intel_engine_cs *VAR_8 = FUNC_8(VAR_6);
 struct intel_engine_pool_node *VAR_9;
 struct drm_i915_gem_object *VAR_10;

 VAR_9 = FUNC_7(sizeof(*VAR_9),
         VAR_1 | VAR_3 | VAR_2);
 if (!VAR_9)
  return FUNC_1(-VAR_0);

 VAR_9->pool = VAR_6;
 FUNC_4(VAR_8->i915, &VAR_9->active, VAR_4, VAR_5);

 VAR_10 = FUNC_5(VAR_8->i915, VAR_7);
 if (FUNC_2(VAR_10)) {
  FUNC_3(&VAR_9->active);
  FUNC_6(VAR_9);
  return FUNC_0(VAR_10);
 }

 VAR_9->obj = VAR_10;
 return VAR_9;
}
