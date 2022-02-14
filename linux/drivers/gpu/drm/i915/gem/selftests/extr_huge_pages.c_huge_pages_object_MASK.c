
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct drm_i915_private {int drm; } ;
struct TYPE_3__ {unsigned int page_mask; } ;
struct TYPE_4__ {int size; } ;
struct drm_i915_gem_object {TYPE_1__ mm; int cache_level; void* read_domains; void* write_domain; TYPE_2__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;
 int VAR_6 ;
 struct drm_i915_gem_object* FUNC_6 () ;
 int FUNC_7 (struct drm_i915_gem_object*,int *) ;
 scalar_t__ FUNC_8 (int,int ) ;

__attribute__((used)) static struct drm_i915_gem_object *
FUNC_9(struct drm_i915_private *VAR_7,
    u64 VAR_8,
    unsigned int VAR_9)
{
 struct drm_i915_gem_object *VAR_10;

 FUNC_2(!VAR_8);
 FUNC_2(!FUNC_3(VAR_8, FUNC_0(FUNC_4(VAR_9))));

 if (VAR_8 >> VAR_5 > VAR_4)
  return FUNC_1(-VAR_0);

 if (FUNC_8(VAR_8, VAR_10->base.size))
  return FUNC_1(-VAR_0);

 VAR_10 = FUNC_6();
 if (!VAR_10)
  return FUNC_1(-VAR_1);

 FUNC_5(&VAR_7->drm, &VAR_10->base, VAR_8);
 FUNC_7(VAR_10, &VAR_6);

 VAR_10->write_domain = VAR_3;
 VAR_10->read_domains = VAR_3;
 VAR_10->cache_level = VAR_2;

 VAR_10->mm.page_mask = VAR_9;

 return VAR_10;
}
