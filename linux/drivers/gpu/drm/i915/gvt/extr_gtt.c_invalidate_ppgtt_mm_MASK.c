
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shadowed; int shadow_pdps; } ;
struct intel_vgpu_mm {TYPE_1__ ppgtt_mm; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int id; struct intel_gvt* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* test_present ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {scalar_t__ val64; int type; } ;
struct intel_gvt_gtt {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct intel_gvt {struct intel_gvt_gtt gtt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_vgpu_mm*,struct intel_gvt_gtt_entry*,int) ;
 int FUNC_2 (struct intel_vgpu*,struct intel_gvt_gtt_entry*) ;
 int FUNC_3 (struct intel_vgpu_mm*,struct intel_gvt_gtt_entry*,int) ;
 int FUNC_4 (struct intel_gvt_gtt_entry*) ;
 int FUNC_5 (int ,char*,int *,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct intel_vgpu_mm *VAR_0)
{
 struct intel_vgpu *VAR_1 = VAR_0->vgpu;
 struct intel_gvt *VAR_2 = VAR_1->gvt;
 struct intel_gvt_gtt *VAR_3 = &VAR_2->gtt;
 struct intel_gvt_gtt_pte_ops *VAR_4 = VAR_3->pte_ops;
 struct intel_gvt_gtt_entry VAR_5;
 int VAR_6;

 if (!VAR_0->ppgtt_mm.shadowed)
  return;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0->ppgtt_mm.shadow_pdps); VAR_6++) {
  FUNC_1(VAR_0, &VAR_5, VAR_6);

  if (!VAR_4->test_present(&VAR_5))
   continue;

  FUNC_2(VAR_1, &VAR_5);
  VAR_5.val64 = 0;
  FUNC_3(VAR_0, &VAR_5, VAR_6);

  FUNC_5(VAR_1->id, "destroy root pointer",
           ((void*)0), VAR_5.type, VAR_5.val64, VAR_6);
 }

 VAR_0->ppgtt_mm.shadowed = 0;
}
