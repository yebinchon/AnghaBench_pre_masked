
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {size_t type; } ;
struct intel_vgpu_ppgtt_spt {TYPE_5__ shadow_page; struct intel_vgpu* vgpu; } ;
struct TYPE_9__ {TYPE_3__* scratch_pt; } ;
struct intel_vgpu {TYPE_4__ gtt; int id; TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {scalar_t__ (* get_pfn ) (struct intel_gvt_gtt_entry*) ;int (* test_present ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {scalar_t__ type; int val64; } ;
struct TYPE_8__ {scalar_t__ page_mfn; } ;
struct TYPE_6__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_7__ {TYPE_1__ gtt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,unsigned long,int ) ;
 int FUNC_4 (char*,...) ;
 struct intel_vgpu_ppgtt_spt* FUNC_5 (struct intel_vgpu*,scalar_t__) ;
 int FUNC_6 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*) ;
 int FUNC_7 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_8 (struct intel_gvt_gtt_entry*) ;
 scalar_t__ FUNC_9 (struct intel_gvt_gtt_entry*) ;
 scalar_t__ FUNC_10 (struct intel_gvt_gtt_entry*) ;
 int FUNC_11 (int ,char*,struct intel_vgpu_ppgtt_spt*,size_t,int ,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct intel_vgpu_ppgtt_spt *VAR_2,
  struct intel_gvt_gtt_entry *VAR_3, unsigned long VAR_4)
{
 struct intel_vgpu *VAR_5 = VAR_2->vgpu;
 struct intel_gvt_gtt_pte_ops *VAR_6 = VAR_5->gvt->gtt.pte_ops;
 int VAR_7;

 FUNC_11(VAR_2->vgpu->id, "remove", VAR_2,
          VAR_2->shadow_page.type, VAR_3->val64, VAR_4);

 FUNC_3("destroy old shadow entry, type %d, index %lu, value %llx\n",
      VAR_3->type, VAR_4, VAR_3->val64);

 if (!VAR_6->test_present(VAR_3))
  return 0;

 if (VAR_6->get_pfn(VAR_3) ==
     VAR_5->gtt.scratch_pt[VAR_2->shadow_page.type].page_mfn)
  return 0;

 if (FUNC_2(FUNC_1(VAR_3->type))) {
  struct intel_vgpu_ppgtt_spt *VAR_8 =
   FUNC_5(VAR_5, VAR_6->get_pfn(VAR_3));
  if (!VAR_8) {
   FUNC_4("fail to find guest page\n");
   VAR_7 = -VAR_0;
   goto fail;
  }
  VAR_7 = FUNC_7(VAR_8);
  if (VAR_7)
   goto fail;
 } else {

  FUNC_0(VAR_3->type == VAR_1,
       "suspicious 64K entry\n");
  FUNC_6(VAR_2, VAR_3);
 }

 return 0;
fail:
 FUNC_4("fail: shadow page %p guest entry 0x%llx type %d\n",
   VAR_2, VAR_3->val64, VAR_3->type);
 return VAR_7;
}
