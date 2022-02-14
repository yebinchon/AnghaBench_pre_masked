
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_ppgtt_spt {int dummy; } ;
struct intel_vgpu_mm {struct intel_vgpu* vgpu; } ;
struct intel_vgpu {TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* get_pfn ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int dummy; } ;
struct TYPE_3__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_4__ {TYPE_1__ gtt; } ;


 int VAR_0 ;
 struct intel_vgpu_ppgtt_spt* FUNC_0 (struct intel_vgpu*,int ) ;
 int FUNC_1 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_2 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_3 (struct intel_gvt_gtt_entry*) ;

__attribute__((used)) static inline int FUNC_4(struct intel_vgpu_mm *VAR_1,
  struct intel_gvt_gtt_entry *VAR_2, unsigned long VAR_3, bool VAR_4)
{
 struct intel_vgpu *VAR_5 = VAR_1->vgpu;
 struct intel_gvt_gtt_pte_ops *VAR_6 = VAR_5->gvt->gtt.pte_ops;
 struct intel_vgpu_ppgtt_spt *VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6->get_pfn(VAR_2));
 if (!VAR_7)
  return -VAR_0;

 if (!VAR_4)
  FUNC_2(VAR_7, VAR_2, VAR_3);
 else
  FUNC_1(VAR_7, VAR_2, VAR_3);
 return 0;
}
