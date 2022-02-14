
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int drm; } ;
struct TYPE_2__ {int size; } ;
struct drm_i915_gem_object {scalar_t__ scratch; void* write_domain; void* read_domains; TYPE_1__ base; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *,TYPE_1__*,scalar_t__) ;
 int VAR_7 ;
 struct drm_i915_gem_object* FUNC_5 () ;
 int FUNC_6 (struct drm_i915_gem_object*,int *) ;
 int FUNC_7 (struct drm_i915_gem_object*,unsigned int) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

struct drm_i915_gem_object *
FUNC_9(struct drm_i915_private *VAR_8,
  phys_addr_t VAR_9,
  dma_addr_t VAR_10)
{
 struct drm_i915_gem_object *VAR_11;
 unsigned int VAR_12;

 FUNC_1(!VAR_9 || VAR_9 > VAR_10);
 FUNC_1(!FUNC_3(VAR_9, VAR_6));
 FUNC_1(!FUNC_3(VAR_10, VAR_5));

 if (FUNC_8(VAR_10, VAR_11->base.size))
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_5();
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 FUNC_4(&VAR_8->drm, &VAR_11->base, VAR_10);
 FUNC_6(VAR_11, &VAR_7);

 VAR_11->read_domains = VAR_4;
 VAR_11->write_domain = VAR_4;
 VAR_12 = FUNC_2(VAR_8) ? VAR_2 : VAR_3;
 FUNC_7(VAR_11, VAR_12);
 VAR_11->scratch = VAR_9;

 return VAR_11;
}
