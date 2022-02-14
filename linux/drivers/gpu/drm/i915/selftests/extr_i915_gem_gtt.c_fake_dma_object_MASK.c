
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct drm_i915_private {int drm; } ;
struct TYPE_2__ {int size; } ;
struct drm_i915_gem_object {int cache_level; void* read_domains; void* write_domain; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int VAR_5 ;
 struct drm_i915_gem_object* FUNC_4 () ;
 int FUNC_5 (struct drm_i915_gem_object*,int *) ;
 scalar_t__ FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static struct drm_i915_gem_object *
FUNC_10(struct drm_i915_private *VAR_6, u64 VAR_7)
{
 struct drm_i915_gem_object *VAR_8;

 FUNC_1(!VAR_7);
 FUNC_1(!FUNC_2(VAR_7, VAR_4));

 if (FUNC_9(VAR_7, VAR_8->base.size))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_4();
 if (!VAR_8)
  goto err;

 FUNC_3(&VAR_6->drm, &VAR_8->base, VAR_7);
 FUNC_5(VAR_8, &VAR_5);

 VAR_8->write_domain = VAR_3;
 VAR_8->read_domains = VAR_3;
 VAR_8->cache_level = VAR_2;


 if (FUNC_6(VAR_8))
  goto err_obj;

 FUNC_8(VAR_8);
 return VAR_8;

err_obj:
 FUNC_7(VAR_8);
err:
 return FUNC_0(-VAR_1);
}
