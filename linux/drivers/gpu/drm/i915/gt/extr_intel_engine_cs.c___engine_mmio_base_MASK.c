
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct engine_mmio_base {scalar_t__ gen; int base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_2(struct drm_i915_private *VAR_1,
         const struct engine_mmio_base *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_1(VAR_1) >= VAR_2[VAR_3].gen)
   break;

 FUNC_0(VAR_3 == VAR_0);
 FUNC_0(!VAR_2[VAR_3].base);

 return VAR_2[VAR_3].base;
}
