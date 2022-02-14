
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shadow_pdps; int guest_pdps; int root_entry_type; } ;
struct intel_vgpu_mm {scalar_t__ type; TYPE_4__* vgpu; TYPE_1__ ppgtt_mm; } ;
struct intel_gvt_gtt_pte_ops {int (* get_entry ) (int ,struct intel_gvt_gtt_entry*,unsigned long,int,int ,TYPE_4__*) ;} ;
struct intel_gvt_gtt_entry {int type; } ;
struct TYPE_8__ {TYPE_3__* gvt; } ;
struct TYPE_6__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_7__ {TYPE_2__ gtt; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct intel_gvt_gtt_entry*,unsigned long,int,int ,TYPE_4__*) ;
 int FUNC_2 (struct intel_gvt_gtt_pte_ops*,struct intel_gvt_gtt_entry*,int) ;

__attribute__((used)) static void FUNC_3(struct intel_vgpu_mm *VAR_1,
  struct intel_gvt_gtt_entry *VAR_2, unsigned long VAR_3,
  bool VAR_4)
{
 struct intel_gvt_gtt_pte_ops *VAR_5 = VAR_1->vgpu->gvt->gtt.pte_ops;

 FUNC_0(VAR_1->type != VAR_0);

 VAR_2->type = VAR_1->ppgtt_mm.root_entry_type;
 VAR_5->get_entry(VAR_4 ? VAR_1->ppgtt_mm.guest_pdps :
      VAR_1->ppgtt_mm.shadow_pdps,
      VAR_2, VAR_3, 0, 0, VAR_1->vgpu);
 FUNC_2(VAR_5, VAR_2, 0);
}
