
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt {int vgpu_idr; int idle_vgpu; } ;
struct drm_i915_private {int * gvt; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct intel_gvt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_gvt*) ;
 int FUNC_4 (struct intel_gvt*) ;
 int FUNC_5 (struct intel_gvt*) ;
 int FUNC_6 (struct intel_gvt*) ;
 int FUNC_7 (struct intel_gvt*) ;
 int FUNC_8 (struct intel_gvt*) ;
 int FUNC_9 (struct intel_gvt*) ;
 int FUNC_10 (struct intel_gvt*) ;
 int FUNC_11 (struct intel_gvt*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct intel_gvt*) ;
 int FUNC_14 (int *) ;
 struct intel_gvt* FUNC_15 (struct drm_i915_private*) ;

void FUNC_16(struct drm_i915_private *VAR_0)
{
 struct intel_gvt *VAR_1 = FUNC_15(VAR_0);

 if (FUNC_0(!VAR_1))
  return;

 FUNC_12(VAR_1->idle_vgpu);
 FUNC_10(VAR_1);
 FUNC_8(VAR_1);

 FUNC_11(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_7(VAR_1);
 FUNC_9(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_13(VAR_1);
 FUNC_6(VAR_1);
 FUNC_2(&VAR_1->vgpu_idr);

 FUNC_14(VAR_0->gvt);
 VAR_0->gvt = ((void*)0);
}
