
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int vma; } ;
struct TYPE_14__ {int path; } ;
struct TYPE_12__ {TYPE_4__ log; TYPE_7__ fw; } ;
struct TYPE_10__ {TYPE_7__ fw; } ;
struct intel_uc {TYPE_5__ guc; TYPE_3__ huc; } ;
struct TYPE_9__ {int has_gt_uc; } ;
struct TYPE_13__ {void* path; } ;
struct i915_error_uc {int guc_log; TYPE_6__ huc_fw; TYPE_6__ guc_fw; } ;
struct i915_gpu_state {TYPE_2__ device_info; struct i915_error_uc uc; struct drm_i915_private* i915; } ;
struct TYPE_8__ {struct intel_uc uc; } ;
struct drm_i915_private {TYPE_1__ gt; } ;
struct compress {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int ,struct compress*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_7__*,int) ;

__attribute__((used)) static void
FUNC_3(struct i915_gpu_state *VAR_1, struct compress *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->i915;
 struct i915_error_uc *VAR_4 = &VAR_1->uc;
 struct intel_uc *VAR_5 = &VAR_3->gt.uc;


 if (!VAR_1->device_info.has_gt_uc)
  return;

 FUNC_2(&VAR_4->guc_fw, &VAR_5->guc.fw, sizeof(VAR_5->guc.fw));
 FUNC_2(&VAR_4->huc_fw, &VAR_5->huc.fw, sizeof(VAR_5->huc.fw));





 VAR_4->guc_fw.path = FUNC_1(VAR_5->guc.fw.path, VAR_0);
 VAR_4->huc_fw.path = FUNC_1(VAR_5->huc.fw.path, VAR_0);
 VAR_4->guc_log = FUNC_0(VAR_3,
           VAR_5->guc.log.vma,
           VAR_2);
}
