
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gfn; int type; struct intel_vgpu_oos_page* oos_page; } ;
struct intel_vgpu_ppgtt_spt {TYPE_2__ guest_page; TYPE_3__* vgpu; } ;
struct intel_vgpu_oos_page {int id; int list; struct intel_vgpu_ppgtt_spt* spt; int mem; } ;
struct TYPE_4__ {int oos_page_use_list_head; } ;
struct intel_gvt {TYPE_1__ gtt; } ;
struct TYPE_6__ {int id; struct intel_gvt* gvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,int ,struct intel_vgpu_ppgtt_spt*,int ) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu_oos_page *VAR_2,
  struct intel_vgpu_ppgtt_spt *VAR_3)
{
 struct intel_gvt *VAR_4 = VAR_3->vgpu->gvt;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->vgpu,
   VAR_3->guest_page.gfn << VAR_0,
   VAR_2->mem, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_2->spt = VAR_3;
 VAR_3->guest_page.oos_page = VAR_2;

 FUNC_1(&VAR_2->list, &VAR_4->gtt.oos_page_use_list_head);

 FUNC_2(VAR_3->vgpu->id, "attach", VAR_2->id,
    VAR_3, VAR_3->guest_page.type);
 return 0;
}
