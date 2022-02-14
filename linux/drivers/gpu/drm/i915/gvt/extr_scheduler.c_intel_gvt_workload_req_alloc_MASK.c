
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_workload {size_t ring_id; int req; struct intel_vgpu* vgpu; } ;
struct intel_vgpu_submission {int * shadow; } ;
struct intel_vgpu {TYPE_2__* gvt; struct intel_vgpu_submission submission; } ;
struct i915_request {int dummy; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_4__ {struct drm_i915_private* dev_priv; } ;


 scalar_t__ FUNC_0 (struct i915_request*) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (char*) ;
 struct i915_request* FUNC_3 (int ) ;
 int FUNC_4 (struct i915_request*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct intel_vgpu_workload *VAR_0)
{
 struct intel_vgpu *VAR_1 = VAR_0->vgpu;
 struct intel_vgpu_submission *VAR_2 = &VAR_1->submission;
 struct drm_i915_private *VAR_3 = VAR_1->gvt->dev_priv;
 struct i915_request *VAR_4;

 FUNC_5(&VAR_3->drm.struct_mutex);

 if (VAR_0->req)
  return 0;

 VAR_4 = FUNC_3(VAR_2->shadow[VAR_0->ring_id]);
 if (FUNC_0(VAR_4)) {
  FUNC_2("fail to allocate gem request\n");
  return FUNC_1(VAR_4);
 }

 VAR_0->req = FUNC_4(VAR_4);
 return 0;
}
