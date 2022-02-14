
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_9__ {TYPE_3__ indirect_ctx; } ;
struct intel_vgpu_workload {int shadow; size_t ring_id; TYPE_4__ wa_ctx; struct intel_vgpu* vgpu; } ;
struct intel_vgpu_submission {int * shadow; int shadow_ctx_desc_updated; } ;
struct intel_vgpu {TYPE_1__* gvt; struct intel_vgpu_submission submission; } ;
struct TYPE_7__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_6__ {struct drm_i915_private* dev_priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct intel_vgpu_workload*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,struct intel_vgpu_workload*) ;
 int FUNC_5 (size_t,int ) ;

int FUNC_6(struct intel_vgpu_workload *VAR_1)
{
 struct intel_vgpu *VAR_2 = VAR_1->vgpu;
 struct intel_vgpu_submission *VAR_3 = &VAR_2->submission;
 struct drm_i915_private *VAR_4 = VAR_2->gvt->dev_priv;
 int VAR_5;

 FUNC_2(&VAR_4->drm.struct_mutex);

 if (VAR_1->shadow)
  return 0;

 if (!FUNC_5(VAR_1->ring_id, VAR_3->shadow_ctx_desc_updated))
  FUNC_4(VAR_3->shadow[VAR_1->ring_id],
       VAR_1);

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5)
  return VAR_5;

 if (VAR_1->ring_id == VAR_0 && VAR_1->wa_ctx.indirect_ctx.size) {
  VAR_5 = FUNC_1(&VAR_1->wa_ctx);
  if (VAR_5)
   goto err_shadow;
 }

 VAR_1->shadow = 1;
 return 0;
err_shadow:
 FUNC_3(&VAR_1->wa_ctx);
 return VAR_5;
}
