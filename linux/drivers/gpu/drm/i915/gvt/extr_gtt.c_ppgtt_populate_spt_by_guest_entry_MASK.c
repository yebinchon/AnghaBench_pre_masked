
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; int vaddr; } ;
struct TYPE_7__ {int pde_ips; int gfn; } ;
struct intel_vgpu_ppgtt_spt {TYPE_4__ shadow_page; TYPE_3__ guest_page; } ;
struct intel_vgpu {int id; TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* get_pfn ) (struct intel_gvt_gtt_entry*) ;scalar_t__ (* test_ips ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int type; int val64; } ;
struct TYPE_5__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_6__ {TYPE_1__ gtt; } ;


 int VAR_0 ;
 struct intel_vgpu_ppgtt_spt* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_3 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,struct intel_vgpu_ppgtt_spt*,int ,int ) ;
 int FUNC_9 (struct intel_vgpu*,int ) ;
 struct intel_vgpu_ppgtt_spt* FUNC_10 (struct intel_vgpu*,int ) ;
 struct intel_vgpu_ppgtt_spt* FUNC_11 (struct intel_vgpu*,int,int ,int) ;
 int FUNC_12 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_13 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_14 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_15 (struct intel_vgpu_ppgtt_spt*) ;
 scalar_t__ FUNC_16 (struct intel_gvt_gtt_entry*) ;
 int FUNC_17 (struct intel_gvt_gtt_entry*) ;
 int FUNC_18 (struct intel_gvt_gtt_entry*) ;
 int FUNC_19 (int ,char*,struct intel_vgpu_ppgtt_spt*,int ,int ) ;
 scalar_t__ FUNC_20 (struct intel_vgpu*) ;

__attribute__((used)) static struct intel_vgpu_ppgtt_spt *FUNC_21(
  struct intel_vgpu *VAR_2, struct intel_gvt_gtt_entry *VAR_3)
{
 struct intel_gvt_gtt_pte_ops *VAR_4 = VAR_2->gvt->gtt.pte_ops;
 struct intel_vgpu_ppgtt_spt *VAR_5 = ((void*)0);
 bool VAR_6 = 0;
 int VAR_7;

 FUNC_1(!FUNC_6(FUNC_5(VAR_3->type)));

 if (VAR_3->type == VAR_1)
  VAR_6 = FUNC_20(VAR_2) && VAR_4->test_ips(VAR_3);

 VAR_5 = FUNC_10(VAR_2, VAR_4->get_pfn(VAR_3));
 if (VAR_5) {
  FUNC_13(VAR_5);

  if (VAR_6 != VAR_5->guest_page.pde_ips) {
   VAR_5->guest_page.pde_ips = VAR_6;

   FUNC_7("reshadow PDE since ips changed\n");
   FUNC_4(VAR_5->shadow_page.vaddr);
   VAR_7 = FUNC_14(VAR_5);
   if (VAR_7) {
    FUNC_15(VAR_5);
    goto err;
   }
  }
 } else {
  int VAR_8 = FUNC_5(VAR_3->type);

  if (!FUNC_6(VAR_8)) {
   VAR_7 = -VAR_0;
   goto err;
  }

  VAR_5 = FUNC_11(VAR_2, VAR_8, VAR_4->get_pfn(VAR_3), VAR_6);
  if (FUNC_2(VAR_5)) {
   VAR_7 = FUNC_3(VAR_5);
   goto err;
  }

  VAR_7 = FUNC_9(VAR_2, VAR_5->guest_page.gfn);
  if (VAR_7)
   goto err_free_spt;

  VAR_7 = FUNC_14(VAR_5);
  if (VAR_7)
   goto err_free_spt;

  FUNC_19(VAR_2->id, "new", VAR_5, VAR_5->guest_page.gfn,
     VAR_5->shadow_page.type);
 }
 return VAR_5;

err_free_spt:
 FUNC_12(VAR_5);
 VAR_5 = ((void*)0);
err:
 FUNC_8("fail: shadow page %p guest entry 0x%llx type %d\n",
       VAR_5, VAR_3->val64, VAR_3->type);
 return FUNC_0(VAR_7);
}
