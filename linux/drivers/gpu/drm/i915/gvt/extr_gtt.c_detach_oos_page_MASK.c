
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * oos_page; scalar_t__ write_cnt; int type; } ;
struct intel_vgpu_ppgtt_spt {TYPE_1__ guest_page; } ;
struct intel_vgpu_oos_page {int list; int vm_list; struct intel_vgpu_ppgtt_spt* spt; int id; } ;
struct intel_vgpu {int id; struct intel_gvt* gvt; } ;
struct TYPE_4__ {int oos_page_free_list_head; } ;
struct intel_gvt {TYPE_2__ gtt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,int ,struct intel_vgpu_ppgtt_spt*,int ) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu *VAR_0,
  struct intel_vgpu_oos_page *VAR_1)
{
 struct intel_gvt *VAR_2 = VAR_0->gvt;
 struct intel_vgpu_ppgtt_spt *VAR_3 = VAR_1->spt;

 FUNC_2(VAR_0->id, "detach", VAR_1->id,
    VAR_3, VAR_3->guest_page.type);

 VAR_3->guest_page.write_cnt = 0;
 VAR_3->guest_page.oos_page = ((void*)0);
 VAR_1->spt = ((void*)0);

 FUNC_0(&VAR_1->vm_list);
 FUNC_1(&VAR_1->list, &VAR_2->gtt.oos_page_free_list_head);

 return 0;
}
