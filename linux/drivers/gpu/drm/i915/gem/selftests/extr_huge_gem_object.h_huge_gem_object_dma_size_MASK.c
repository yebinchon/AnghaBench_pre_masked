
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
typedef int dma_addr_t ;



__attribute__((used)) static inline dma_addr_t
FUNC_0(struct drm_i915_gem_object *VAR_0)
{
 return VAR_0->base.size;
}
