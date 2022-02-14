
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_workload {int ring_id; int dispatched; int status; struct intel_vgpu_workload* req; int wa_ctx; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int vgpu_lock; TYPE_1__* gvt; } ;
struct i915_request {int dummy; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_3__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (struct intel_vgpu_workload*) ;
 struct i915_request* FUNC_1 (struct intel_vgpu_workload**) ;
 int FUNC_2 (char*,int,struct intel_vgpu_workload*) ;
 int FUNC_3 (struct intel_vgpu_workload*) ;
 int FUNC_4 (struct i915_request*) ;
 int FUNC_5 (struct intel_vgpu_workload*) ;
 int FUNC_6 (struct intel_vgpu_workload*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct intel_vgpu_workload*) ;
 int FUNC_10 (struct intel_vgpu_workload*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct intel_vgpu_workload *VAR_0)
{
 struct intel_vgpu *VAR_1 = VAR_0->vgpu;
 struct drm_i915_private *VAR_2 = VAR_1->gvt->dev_priv;
 struct i915_request *VAR_3;
 int VAR_4 = VAR_0->ring_id;
 int VAR_5;

 FUNC_2("ring id %d prepare to dispatch workload %p\n",
  VAR_4, VAR_0);

 FUNC_7(&VAR_1->vgpu_lock);
 FUNC_7(&VAR_2->drm.struct_mutex);

 VAR_5 = FUNC_6(VAR_0);
 if (VAR_5)
  goto err_req;

 VAR_5 = FUNC_5(VAR_0);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_9(VAR_0);
 if (VAR_5) {
  FUNC_11(&VAR_0->wa_ctx);
  goto out;
 }

 VAR_5 = FUNC_10(VAR_0);
out:
 if (VAR_5) {



  VAR_3 = FUNC_1(&VAR_0->req);
  FUNC_4(VAR_3);
 }

 if (!FUNC_0(VAR_0->req)) {
  FUNC_2("ring id %d submit workload to i915 %p\n",
    VAR_4, VAR_0->req);
  FUNC_3(VAR_0->req);
  VAR_0->dispatched = 1;
 }
err_req:
 if (VAR_5)
  VAR_0->status = VAR_5;
 FUNC_8(&VAR_2->drm.struct_mutex);
 FUNC_8(&VAR_1->vgpu_lock);
 return VAR_5;
}
