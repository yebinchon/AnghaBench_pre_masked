
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_vgpu_ppgtt_spt {int dummy; } ;
struct TYPE_8__ {TYPE_3__* scratch_pt; } ;
struct intel_vgpu {TYPE_4__ gtt; TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {scalar_t__ (* get_pfn ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {scalar_t__ type; } ;
typedef enum intel_gvt_gtt_type { ____Placeholder_intel_gvt_gtt_type } intel_gvt_gtt_type ;
struct TYPE_7__ {scalar_t__ page_mfn; } ;
struct TYPE_5__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_6__ {TYPE_1__ gtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,scalar_t__) ;
 struct intel_vgpu_ppgtt_spt* FUNC_5 (struct intel_vgpu*,scalar_t__) ;
 int FUNC_6 (struct intel_vgpu_ppgtt_spt*) ;
 scalar_t__ FUNC_7 (struct intel_gvt_gtt_entry*) ;
 scalar_t__ FUNC_8 (struct intel_gvt_gtt_entry*) ;
 scalar_t__ FUNC_9 (struct intel_gvt_gtt_entry*) ;

__attribute__((used)) static int FUNC_10(struct intel_vgpu *VAR_4,
  struct intel_gvt_gtt_entry *VAR_5)
{
 struct intel_gvt_gtt_pte_ops *VAR_6 = VAR_4->gvt->gtt.pte_ops;
 struct intel_vgpu_ppgtt_spt *VAR_7;
 enum intel_gvt_gtt_type VAR_8;

 FUNC_0(!FUNC_3(FUNC_2(VAR_5->type)));

 if (VAR_5->type != VAR_2
  && VAR_5->type != VAR_3) {
  VAR_8 = FUNC_2(VAR_5->type);

  if (!FUNC_3(VAR_8) ||
    !FUNC_3(VAR_8 + 1)) {
   FUNC_1(1, "Invalid page table type, cur_pt_type is: %d\n", VAR_8);
   return -VAR_0;
  }

  VAR_8 += 1;

  if (VAR_6->get_pfn(VAR_5) ==
   VAR_4->gtt.scratch_pt[VAR_8].page_mfn)
   return 0;
 }
 VAR_7 = FUNC_5(VAR_4, VAR_6->get_pfn(VAR_5));
 if (!VAR_7) {
  FUNC_4("fail to find shadow page: mfn: 0x%lx\n",
    VAR_6->get_pfn(VAR_5));
  return -VAR_1;
 }
 return FUNC_6(VAR_7);
}
