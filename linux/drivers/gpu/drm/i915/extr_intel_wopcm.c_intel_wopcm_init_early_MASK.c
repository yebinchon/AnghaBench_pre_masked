
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_wopcm {int size; } ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_3 (struct intel_wopcm*) ;

void FUNC_4(struct intel_wopcm *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_2);

 if (!FUNC_1(VAR_3))
  return;

 if (FUNC_2(VAR_3) >= 11)
  VAR_2->size = VAR_0;
 else
  VAR_2->size = VAR_1;

 FUNC_0(VAR_3->drm.dev, "WOPCM: %uK\n", VAR_2->size / 1024);
}
