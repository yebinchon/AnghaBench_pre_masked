
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_vgpu_mm {scalar_t__ type; TYPE_3__* vgpu; } ;
struct intel_gvt_gtt_pte_ops {int (* get_entry ) (int *,struct intel_gvt_gtt_entry*,unsigned long,int,int ,TYPE_3__*) ;} ;
struct intel_gvt_gtt_entry {int dummy; } ;
struct TYPE_6__ {TYPE_2__* gvt; } ;
struct TYPE_4__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_5__ {TYPE_1__ gtt; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct intel_gvt_gtt_entry*,unsigned long,int,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu_mm *VAR_1,
  struct intel_gvt_gtt_entry *VAR_2, unsigned long VAR_3)
{
 struct intel_gvt_gtt_pte_ops *VAR_4 = VAR_1->vgpu->gvt->gtt.pte_ops;

 FUNC_0(VAR_1->type != VAR_0);

 VAR_4->get_entry(((void*)0), VAR_2, VAR_3, 0, 0, VAR_1->vgpu);
}
