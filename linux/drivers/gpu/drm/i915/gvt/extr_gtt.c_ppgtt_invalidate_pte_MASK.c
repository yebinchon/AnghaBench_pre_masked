
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int type; } ;
struct intel_vgpu_ppgtt_spt {TYPE_5__ shadow_page; struct intel_vgpu* vgpu; } ;
struct TYPE_7__ {TYPE_1__* scratch_pt; } ;
struct intel_vgpu {TYPE_2__ gtt; TYPE_4__* gvt; } ;
struct intel_gvt_gtt_pte_ops {unsigned long (* get_pfn ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int dummy; } ;
struct TYPE_8__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_9__ {TYPE_3__ gtt; } ;
struct TYPE_6__ {unsigned long page_mfn; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,unsigned long) ;
 unsigned long FUNC_1 (struct intel_gvt_gtt_entry*) ;

__attribute__((used)) static inline void FUNC_2(struct intel_vgpu_ppgtt_spt *VAR_1,
  struct intel_gvt_gtt_entry *VAR_2)
{
 struct intel_vgpu *VAR_3 = VAR_1->vgpu;
 struct intel_gvt_gtt_pte_ops *VAR_4 = VAR_3->gvt->gtt.pte_ops;
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->get_pfn(VAR_2);
 VAR_6 = VAR_1->shadow_page.type;


 if (!VAR_5 || VAR_5 == VAR_3->gtt.scratch_pt[VAR_6].page_mfn)
  return;

 FUNC_0(VAR_3, VAR_5 << VAR_0);
}
