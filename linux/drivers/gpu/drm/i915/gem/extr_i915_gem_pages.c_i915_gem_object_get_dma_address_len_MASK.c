
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 unsigned int VAR_0 ;
 struct scatterlist* FUNC_0 (struct drm_i915_gem_object*,unsigned long,unsigned int*) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 unsigned int FUNC_2 (struct scatterlist*) ;

dma_addr_t
FUNC_3(struct drm_i915_gem_object *VAR_1,
        unsigned long VAR_2,
        unsigned int *VAR_3)
{
 struct scatterlist *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5);

 if (VAR_3)
  *VAR_3 = FUNC_2(VAR_4) - (VAR_5 << VAR_0);

 return FUNC_1(VAR_4) + (VAR_5 << VAR_0);
}
