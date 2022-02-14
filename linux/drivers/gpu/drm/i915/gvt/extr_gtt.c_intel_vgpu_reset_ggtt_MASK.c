
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ggtt_mm; } ;
struct intel_vgpu {TYPE_2__ gtt; struct intel_gvt* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* set_present ) (struct intel_gvt_gtt_entry*) ;int (* set_pfn ) (struct intel_gvt_gtt_entry*,int ) ;} ;
struct intel_gvt_gtt_entry {int type; } ;
struct TYPE_3__ {int scratch_mfn; struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct intel_gvt {TYPE_1__ gtt; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct intel_gvt_gtt_entry*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct intel_vgpu*,struct intel_gvt_gtt_entry*) ;
 int FUNC_3 (int ,struct intel_gvt_gtt_entry*,int ) ;
 int FUNC_4 (struct intel_gvt_gtt_entry*,int ) ;
 int FUNC_5 (struct intel_gvt_gtt_entry*) ;
 int FUNC_6 (struct intel_vgpu*) ;
 int FUNC_7 (struct intel_vgpu*) ;
 int FUNC_8 (struct intel_vgpu*) ;
 int FUNC_9 (struct intel_vgpu*) ;

void FUNC_10(struct intel_vgpu *VAR_2, bool VAR_3)
{
 struct intel_gvt *VAR_4 = VAR_2->gvt;
 struct drm_i915_private *VAR_5 = VAR_4->dev_priv;
 struct intel_gvt_gtt_pte_ops *VAR_6 = VAR_2->gvt->gtt.pte_ops;
 struct intel_gvt_gtt_entry VAR_7 = {.type = VAR_0};
 struct intel_gvt_gtt_entry VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 VAR_6->set_pfn(&VAR_7, VAR_4->gtt.scratch_mfn);
 VAR_6->set_present(&VAR_7);

 VAR_9 = FUNC_6(VAR_2) >> VAR_1;
 VAR_10 = FUNC_7(VAR_2) >> VAR_1;
 while (VAR_10--) {
  if (VAR_3) {
   FUNC_0(VAR_2->gtt.ggtt_mm, &VAR_8, VAR_9);
   FUNC_2(VAR_2, &VAR_8);
  }
  FUNC_3(VAR_2->gtt.ggtt_mm, &VAR_7, VAR_9++);
 }

 VAR_9 = FUNC_8(VAR_2) >> VAR_1;
 VAR_10 = FUNC_9(VAR_2) >> VAR_1;
 while (VAR_10--) {
  if (VAR_3) {
   FUNC_0(VAR_2->gtt.ggtt_mm, &VAR_8, VAR_9);
   FUNC_2(VAR_2, &VAR_8);
  }
  FUNC_3(VAR_2->gtt.ggtt_mm, &VAR_7, VAR_9++);
 }

 FUNC_1(VAR_5);
}
