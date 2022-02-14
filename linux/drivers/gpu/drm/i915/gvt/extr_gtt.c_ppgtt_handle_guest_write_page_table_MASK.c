
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct intel_vgpu_ppgtt_spt {TYPE_1__ shadow_page; struct intel_vgpu* vgpu; } ;
struct TYPE_10__ {TYPE_4__* scratch_pt; } ;
struct intel_vgpu {TYPE_5__ gtt; TYPE_3__* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* test_present ) (struct intel_gvt_gtt_entry*) ;int (* set_pfn ) (struct intel_gvt_gtt_entry*,int ) ;int (* clear_pse ) (struct intel_gvt_gtt_entry*) ;int (* clear_64k_splited ) (struct intel_gvt_gtt_entry*) ;scalar_t__ (* test_64k_splited ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {scalar_t__ type; int val64; } ;
struct TYPE_9__ {int page_mfn; } ;
struct TYPE_7__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_8__ {TYPE_2__ gtt; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct intel_vgpu_ppgtt_spt*,int ,scalar_t__) ;
 int FUNC_2 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_3 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_4 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_5 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_6 (struct intel_gvt_gtt_entry*) ;
 scalar_t__ FUNC_7 (struct intel_gvt_gtt_entry*) ;
 int FUNC_8 (struct intel_gvt_gtt_entry*) ;
 int FUNC_9 (struct intel_gvt_gtt_entry*,int ) ;
 int FUNC_10 (struct intel_gvt_gtt_entry*) ;
 int FUNC_11 (struct intel_gvt_gtt_entry*,int ) ;
 int FUNC_12 (struct intel_gvt_gtt_entry*,int ) ;

__attribute__((used)) static int FUNC_13(
  struct intel_vgpu_ppgtt_spt *VAR_3,
  struct intel_gvt_gtt_entry *VAR_4, unsigned long VAR_5)
{
 struct intel_vgpu *VAR_6 = VAR_3->vgpu;
 int VAR_7 = VAR_3->shadow_page.type;
 struct intel_gvt_gtt_pte_ops *VAR_8 = VAR_6->gvt->gtt.pte_ops;
 struct intel_gvt_gtt_entry VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = VAR_8->test_present(VAR_4);






 FUNC_2(VAR_3, &VAR_9, VAR_5);

 if (VAR_10) {
  VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (VAR_12)
   goto fail;
 }

 VAR_12 = FUNC_4(VAR_3, &VAR_9, VAR_5);
 if (VAR_12)
  goto fail;

 if (!VAR_10) {

  if (VAR_8->test_64k_splited(&VAR_9) &&
      !(VAR_5 % VAR_0)) {
   FUNC_0("remove splited 64K shadow entries\n");
   for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
    VAR_8->clear_64k_splited(&VAR_9);
    VAR_8->set_pfn(&VAR_9,
     VAR_6->gtt.scratch_pt[VAR_7].page_mfn);
    FUNC_5(VAR_3, &VAR_9, VAR_5 + VAR_11);
   }
  } else if (VAR_9.type == VAR_2 ||
      VAR_9.type == VAR_1) {
   VAR_8->clear_pse(&VAR_9);
   VAR_8->set_pfn(&VAR_9,
         VAR_6->gtt.scratch_pt[VAR_7].page_mfn);
   FUNC_5(VAR_3, &VAR_9, VAR_5);
  } else {
   VAR_8->set_pfn(&VAR_9,
         VAR_6->gtt.scratch_pt[VAR_7].page_mfn);
   FUNC_5(VAR_3, &VAR_9, VAR_5);
  }
 }

 return 0;
fail:
 FUNC_1("fail: shadow page %p guest entry 0x%llx type %d.\n",
   VAR_3, VAR_4->val64, VAR_4->type);
 return VAR_12;
}
