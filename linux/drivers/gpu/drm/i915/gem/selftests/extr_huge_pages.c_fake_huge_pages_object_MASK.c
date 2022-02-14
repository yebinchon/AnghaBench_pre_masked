
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
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct drm_i915_gem_object* FUNC_4 () ;
 int FUNC_5 (struct drm_i915_gem_object*,int *) ;
 scalar_t__ FUNC_6 (int,int ) ;

__attribute__((used)) static struct drm_i915_gem_object *
FUNC_7(struct drm_i915_private *VAR_9, u64 VAR_10, bool VAR_11)
{
 struct drm_i915_gem_object *VAR_12;

 FUNC_1(!VAR_10);
 FUNC_1(!FUNC_2(VAR_10, VAR_4));

 if (VAR_10 >> VAR_5 > VAR_6)
  return FUNC_0(-VAR_0);

 if (FUNC_6(VAR_10, VAR_12->base.size))
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_4();
 if (!VAR_12)
  return FUNC_0(-VAR_1);

 FUNC_3(&VAR_9->drm, &VAR_12->base, VAR_10);

 if (VAR_11)
  FUNC_5(VAR_12, &VAR_8);
 else
  FUNC_5(VAR_12, &VAR_7);

 VAR_12->write_domain = VAR_3;
 VAR_12->read_domains = VAR_3;
 VAR_12->cache_level = VAR_2;

 return VAR_12;
}
