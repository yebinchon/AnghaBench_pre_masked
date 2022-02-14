
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gfn; int type; struct intel_vgpu_oos_page* oos_page; } ;
struct intel_vgpu_ppgtt_spt {TYPE_2__ guest_page; TYPE_3__* vgpu; } ;
struct intel_vgpu_oos_page {int vm_list; int id; } ;
struct TYPE_4__ {int oos_page_list_head; } ;
struct TYPE_6__ {TYPE_1__ gtt; int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,int ,struct intel_vgpu_ppgtt_spt*,int ) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu_ppgtt_spt *VAR_1)
{
 struct intel_vgpu_oos_page *VAR_2 = VAR_1->guest_page.oos_page;

 if (FUNC_0(!VAR_2, "shadow PPGTT page should have a oos page\n"))
  return -VAR_0;

 FUNC_3(VAR_1->vgpu->id, "set page out of sync", VAR_2->id,
    VAR_1, VAR_1->guest_page.type);

 FUNC_2(&VAR_2->vm_list, &VAR_1->vgpu->gtt.oos_page_list_head);
 return FUNC_1(VAR_1->vgpu, VAR_1->guest_page.gfn);
}
