
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_vgpu_gtt {TYPE_2__* ggtt_mm; int post_shadow_list_head; int oos_page_list_head; int ppgtt_mm_list_head; int spt_tree; } ;
struct intel_vgpu {struct intel_vgpu_gtt gtt; } ;
struct TYPE_5__ {int partial_pte_list; } ;
struct TYPE_6__ {TYPE_1__ ggtt_mm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct intel_vgpu*) ;
 int FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (struct intel_vgpu*) ;
 int FUNC_7 (struct intel_vgpu*,int) ;

int FUNC_8(struct intel_vgpu *VAR_1)
{
 struct intel_vgpu_gtt *VAR_2 = &VAR_1->gtt;

 FUNC_1(&VAR_2->spt_tree, VAR_0);

 FUNC_0(&VAR_2->ppgtt_mm_list_head);
 FUNC_0(&VAR_2->oos_page_list_head);
 FUNC_0(&VAR_2->post_shadow_list_head);

 VAR_2->ggtt_mm = FUNC_6(VAR_1);
 if (FUNC_2(VAR_2->ggtt_mm)) {
  FUNC_5("fail to create mm for ggtt.\n");
  return FUNC_3(VAR_2->ggtt_mm);
 }

 FUNC_7(VAR_1, 0);

 FUNC_0(&VAR_2->ggtt_mm->ggtt_mm.partial_pte_list);

 return FUNC_4(VAR_1);
}
