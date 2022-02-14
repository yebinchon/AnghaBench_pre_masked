
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {unsigned long (* get_pfn ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int dummy; } ;
struct TYPE_3__ {unsigned long scratch_mfn; struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_4__ {TYPE_1__ gtt; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,unsigned long) ;
 unsigned long FUNC_1 (struct intel_gvt_gtt_entry*) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu *VAR_1,
  struct intel_gvt_gtt_entry *VAR_2)
{
 struct intel_gvt_gtt_pte_ops *VAR_3 = VAR_1->gvt->gtt.pte_ops;
 unsigned long VAR_4;

 VAR_4 = VAR_3->get_pfn(VAR_2);
 if (VAR_4 != VAR_1->gvt->gtt.scratch_mfn)
  FUNC_0(VAR_1,
      VAR_4 << VAR_0);
}
