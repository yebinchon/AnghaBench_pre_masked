
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int virtual_ggtt; } ;
struct intel_vgpu_mm {scalar_t__ type; TYPE_4__* vgpu; TYPE_3__ ggtt_mm; } ;
struct intel_gvt_gtt_pte_ops {int (* get_entry ) (int ,struct intel_gvt_gtt_entry*,unsigned long,int,int ,TYPE_4__*) ;} ;
struct intel_gvt_gtt_entry {int type; } ;
struct TYPE_8__ {TYPE_2__* gvt; } ;
struct TYPE_5__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_6__ {TYPE_1__ gtt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct intel_gvt_gtt_entry*,unsigned long,int,int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu_mm *VAR_2,
  struct intel_gvt_gtt_entry *VAR_3, unsigned long VAR_4)
{
 struct intel_gvt_gtt_pte_ops *VAR_5 = VAR_2->vgpu->gvt->gtt.pte_ops;

 FUNC_0(VAR_2->type != VAR_1);

 VAR_3->type = VAR_0;
 VAR_5->get_entry(VAR_2->ggtt_mm.virtual_ggtt, VAR_3, VAR_4,
      0, 0, VAR_2->vgpu);
}
