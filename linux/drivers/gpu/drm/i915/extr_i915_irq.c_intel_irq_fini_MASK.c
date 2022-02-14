
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * remap_info; } ;
struct drm_i915_private {TYPE_1__ l3_parity; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct drm_i915_private *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  FUNC_2(VAR_1->l3_parity.remap_info[VAR_2]);
}
