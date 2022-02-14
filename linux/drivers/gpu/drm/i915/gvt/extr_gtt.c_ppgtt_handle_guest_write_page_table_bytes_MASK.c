
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_14__ {TYPE_6__* oos_page; int write_cnt; } ;
struct TYPE_10__ {int type; } ;
struct intel_vgpu_ppgtt_spt {TYPE_7__ guest_page; TYPE_3__ shadow_page; int post_shadow_bitmap; struct intel_vgpu* vgpu; } ;
struct TYPE_12__ {TYPE_4__* scratch_pt; } ;
struct intel_vgpu {TYPE_5__ gtt; TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* set_entry ) (int ,struct intel_gvt_gtt_entry*,unsigned long,int,int ,struct intel_vgpu*) ;int (* set_pfn ) (struct intel_gvt_gtt_entry*,int ) ;} ;
struct intel_gvt_gtt_entry {scalar_t__ type; } ;
struct intel_gvt_device_info {int gtt_entry_size_shift; int gtt_entry_size; } ;
struct TYPE_13__ {int mem; } ;
struct TYPE_11__ {int page_mfn; } ;
struct TYPE_8__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_9__ {struct intel_gvt_device_info device_info; TYPE_1__ gtt; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct intel_vgpu_ppgtt_spt*) ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_3 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_4 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_5 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_6 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_7 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_8 (struct intel_vgpu_ppgtt_spt*,unsigned long) ;
 int FUNC_9 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_10 (struct intel_gvt_gtt_entry*,int ) ;
 int FUNC_11 (int ,struct intel_gvt_gtt_entry*,unsigned long,int,int ,struct intel_vgpu*) ;
 int FUNC_12 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_13(
  struct intel_vgpu_ppgtt_spt *VAR_4,
  u64 VAR_5, void *VAR_6, int VAR_7)
{
 struct intel_vgpu *VAR_8 = VAR_4->vgpu;
 struct intel_gvt_gtt_pte_ops *VAR_9 = VAR_8->gvt->gtt.pte_ops;
 const struct intel_gvt_device_info *VAR_10 = &VAR_8->gvt->device_info;
 struct intel_gvt_gtt_entry VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_13 = (VAR_5 & (VAR_2 - 1)) >> VAR_10->gtt_entry_size_shift;

 FUNC_3(VAR_4, &VAR_11, VAR_13);






 if (VAR_11.type == VAR_1 &&
     (VAR_13 % VAR_0)) {
  FUNC_1("Ignore write to unused PTE entry, index %lu\n",
       VAR_13);
  return 0;
 }

 if (VAR_7 == VAR_10->gtt_entry_size) {
  VAR_14 = FUNC_6(VAR_4, &VAR_11, VAR_13);
  if (VAR_14)
   return VAR_14;
 } else {
  if (!FUNC_12(VAR_13, VAR_4->post_shadow_bitmap)) {
   int VAR_15 = VAR_4->shadow_page.type;

   FUNC_4(VAR_4, &VAR_12, VAR_13);
   VAR_14 = FUNC_5(VAR_4, &VAR_12, VAR_13);
   if (VAR_14)
    return VAR_14;
   VAR_9->set_pfn(&VAR_12, VAR_8->gtt.scratch_pt[VAR_15].page_mfn);
   FUNC_9(VAR_4, &VAR_12, VAR_13);
  }
  FUNC_8(VAR_4, VAR_13);
 }

 if (!VAR_3)
  return 0;

 VAR_4->guest_page.write_cnt++;

 if (VAR_4->guest_page.oos_page)
  VAR_9->set_entry(VAR_4->guest_page.oos_page->mem, &VAR_11, VAR_13,
    0, 0, VAR_8);

 if (FUNC_0(VAR_4)) {
  if (!VAR_4->guest_page.oos_page)
   FUNC_2(VAR_4);

  VAR_14 = FUNC_7(VAR_4);
  if (VAR_14 < 0)
   return VAR_14;
 }
 return 0;
}
