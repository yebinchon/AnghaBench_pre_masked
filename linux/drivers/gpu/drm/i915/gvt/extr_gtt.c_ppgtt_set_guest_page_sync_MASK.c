
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int gfn; struct intel_vgpu_oos_page* oos_page; } ;
struct intel_vgpu_ppgtt_spt {TYPE_2__* vgpu; TYPE_1__ guest_page; } ;
struct intel_vgpu_oos_page {int vm_list; int id; } ;
struct TYPE_5__ {int id; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,struct intel_vgpu_oos_page*) ;
 int FUNC_3 (int ,char*,int ,struct intel_vgpu_ppgtt_spt*,int ) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu_ppgtt_spt *VAR_0)
{
 struct intel_vgpu_oos_page *VAR_1 = VAR_0->guest_page.oos_page;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->vgpu, VAR_0->guest_page.gfn);
 if (VAR_2)
  return VAR_2;

 FUNC_3(VAR_0->vgpu->id, "set page sync", VAR_1->id,
    VAR_0, VAR_0->guest_page.type);

 FUNC_1(&VAR_1->vm_list);
 return FUNC_2(VAR_0->vgpu, VAR_1);
}
