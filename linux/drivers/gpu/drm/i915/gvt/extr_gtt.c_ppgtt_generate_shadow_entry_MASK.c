
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mfn; } ;
struct intel_vgpu_ppgtt_spt {TYPE_1__ shadow_page; TYPE_4__* vgpu; } ;
struct intel_gvt_gtt_pte_ops {int (* set_pfn ) (struct intel_gvt_gtt_entry*,int ) ;int (* clear_ips ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {scalar_t__ type; int val64; } ;
struct TYPE_8__ {TYPE_3__* gvt; } ;
struct TYPE_6__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_7__ {TYPE_2__ gtt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_gvt_gtt_entry*) ;
 int FUNC_1 (struct intel_gvt_gtt_entry*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct intel_gvt_gtt_entry *VAR_1,
  struct intel_vgpu_ppgtt_spt *VAR_2, struct intel_gvt_gtt_entry *VAR_3)
{
 struct intel_gvt_gtt_pte_ops *VAR_4 = VAR_2->vgpu->gvt->gtt.pte_ops;

 VAR_1->type = VAR_3->type;
 VAR_1->val64 = VAR_3->val64;


 if (VAR_1->type == VAR_0)
  VAR_4->clear_ips(VAR_1);

 VAR_4->set_pfn(VAR_1, VAR_2->shadow_page.mfn);
}
