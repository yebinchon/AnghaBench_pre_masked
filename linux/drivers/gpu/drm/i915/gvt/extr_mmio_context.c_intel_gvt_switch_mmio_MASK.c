
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int uncore; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct intel_vgpu*,struct intel_vgpu*,int) ;

void FUNC_5(struct intel_vgpu *VAR_1,
      struct intel_vgpu *VAR_2, int VAR_3)
{
 struct drm_i915_private *VAR_4;

 if (FUNC_0(!VAR_1 && !VAR_2))
  return;

 FUNC_1("switch ring %d from %s to %s\n", VAR_3,
         VAR_1 ? "vGPU" : "host", VAR_2 ? "vGPU" : "HOST");

 VAR_4 = VAR_1 ? VAR_1->gvt->dev_priv : VAR_2->gvt->dev_priv;






 FUNC_2(&VAR_4->uncore, VAR_0);
 FUNC_4(VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_4->uncore, VAR_0);
}
