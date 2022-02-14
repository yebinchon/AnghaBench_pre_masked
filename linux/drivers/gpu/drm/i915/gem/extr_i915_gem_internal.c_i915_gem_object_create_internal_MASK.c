
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int drm; } ;
struct TYPE_2__ {int size; } ;
struct drm_i915_gem_object {void* write_domain; void* read_domains; TYPE_1__ base; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 void* VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 struct drm_i915_gem_object* FUNC_5 () ;
 int FUNC_6 (struct drm_i915_gem_object*,int *) ;
 int VAR_6 ;
 int FUNC_7 (struct drm_i915_gem_object*,unsigned int) ;
 scalar_t__ FUNC_8 (int ,int ) ;

struct drm_i915_gem_object *
FUNC_9(struct drm_i915_private *VAR_7,
    phys_addr_t VAR_8)
{
 struct drm_i915_gem_object *VAR_9;
 unsigned int VAR_10;

 FUNC_1(!VAR_8);
 FUNC_1(!FUNC_3(VAR_8, VAR_5));

 if (FUNC_8(VAR_8, VAR_9->base.size))
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_5();
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 FUNC_4(&VAR_7->drm, &VAR_9->base, VAR_8);
 FUNC_6(VAR_9, &VAR_6);

 VAR_9->read_domains = VAR_4;
 VAR_9->write_domain = VAR_4;

 VAR_10 = FUNC_2(VAR_7) ? VAR_2 : VAR_3;
 FUNC_7(VAR_9, VAR_10);

 return VAR_9;
}
