
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gfn; scalar_t__ write_cnt; int type; } ;
struct intel_vgpu_ppgtt_spt {int post_shadow_list; TYPE_2__ guest_page; int post_shadow_bitmap; } ;
struct intel_vgpu_oos_page {int * mem; int id; struct intel_vgpu_ppgtt_spt* spt; } ;
struct intel_vgpu {int id; struct intel_gvt* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* set_entry ) (int *,struct intel_gvt_gtt_entry*,int,int,int ,struct intel_vgpu*) ;int (* get_entry ) (int *,struct intel_gvt_gtt_entry*,int,int,int,struct intel_vgpu*) ;} ;
struct intel_gvt_gtt_entry {scalar_t__ val64; int type; } ;
struct intel_gvt_device_info {int gtt_entry_size_shift; } ;
struct TYPE_3__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct intel_gvt {TYPE_1__ gtt; struct intel_gvt_device_info device_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_vgpu*,struct intel_vgpu_ppgtt_spt*,int,struct intel_gvt_gtt_entry*) ;
 int FUNC_3 (int *,struct intel_gvt_gtt_entry*,int,int,int,struct intel_vgpu*) ;
 int FUNC_4 (int *,struct intel_gvt_gtt_entry*,int,int,int,struct intel_vgpu*) ;
 int FUNC_5 (int *,struct intel_gvt_gtt_entry*,int,int,int ,struct intel_vgpu*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*,int ,struct intel_vgpu_ppgtt_spt*,int ) ;
 int FUNC_8 (int ,int ,struct intel_vgpu_ppgtt_spt*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct intel_vgpu *VAR_2,
  struct intel_vgpu_oos_page *VAR_3)
{
 const struct intel_gvt_device_info *VAR_4 = &VAR_2->gvt->device_info;
 struct intel_gvt *VAR_5 = VAR_2->gvt;
 struct intel_gvt_gtt_pte_ops *VAR_6 = VAR_5->gtt.pte_ops;
 struct intel_vgpu_ppgtt_spt *VAR_7 = VAR_3->spt;
 struct intel_gvt_gtt_entry VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_7(VAR_2->id, "sync", VAR_3->id,
    VAR_7, VAR_7->guest_page.type);

 VAR_8.type = VAR_9.type = FUNC_0(VAR_7->guest_page.type);
 VAR_8.val64 = VAR_9.val64 = 0;

 for (VAR_10 = 0; VAR_10 < (VAR_0 >>
    VAR_4->gtt_entry_size_shift); VAR_10++) {
  VAR_6->get_entry(VAR_3->mem, &VAR_8, VAR_10, 0, 0, VAR_2);
  VAR_6->get_entry(((void*)0), &VAR_9, VAR_10, 1,
          VAR_7->guest_page.gfn << VAR_1, VAR_2);

  if (VAR_8.val64 == VAR_9.val64
   && !FUNC_6(VAR_10, VAR_7->post_shadow_bitmap))
   continue;

  FUNC_8(VAR_2->id, VAR_3->id,
    VAR_7, VAR_7->guest_page.type,
    VAR_9.val64, VAR_10);

  VAR_11 = FUNC_2(VAR_2, VAR_7, VAR_10, &VAR_9);
  if (VAR_11)
   return VAR_11;

  VAR_6->set_entry(VAR_3->mem, &VAR_9, VAR_10, 0, 0, VAR_2);
 }

 VAR_7->guest_page.write_cnt = 0;
 FUNC_1(&VAR_7->post_shadow_list);
 return 0;
}
