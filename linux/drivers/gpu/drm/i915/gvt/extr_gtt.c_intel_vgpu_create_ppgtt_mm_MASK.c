
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int root_entry_type; int lru_list; int list; int * guest_pdps; } ;
struct intel_vgpu_mm {TYPE_2__ ppgtt_mm; int type; } ;
struct TYPE_4__ {int ppgtt_mm_list_head; } ;
struct intel_vgpu {TYPE_1__ gtt; struct intel_gvt* gvt; } ;
struct TYPE_6__ {int ppgtt_mm_lock; int ppgtt_mm_lru_list_head; } ;
struct intel_gvt {TYPE_3__ gtt; } ;
typedef enum intel_gvt_gtt_type { ____Placeholder_intel_gvt_gtt_type } intel_gvt_gtt_type ;


 int VAR_0 ;
 struct intel_vgpu_mm* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct intel_vgpu_mm*) ;
 struct intel_vgpu_mm* FUNC_9 (struct intel_vgpu*) ;
 int FUNC_10 (struct intel_vgpu_mm*) ;

struct intel_vgpu_mm *FUNC_11(struct intel_vgpu *VAR_4,
  enum intel_gvt_gtt_type VAR_5, u64 VAR_6[])
{
 struct intel_gvt *VAR_7 = VAR_4->gvt;
 struct intel_vgpu_mm *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_9(VAR_4);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->type = VAR_3;

 FUNC_1(VAR_5 != VAR_1 &&
     VAR_5 != VAR_2);
 VAR_8->ppgtt_mm.root_entry_type = VAR_5;

 FUNC_2(&VAR_8->ppgtt_mm.list);
 FUNC_2(&VAR_8->ppgtt_mm.lru_list);

 if (VAR_5 == VAR_2)
  VAR_8->ppgtt_mm.guest_pdps[0] = VAR_6[0];
 else
  FUNC_5(VAR_8->ppgtt_mm.guest_pdps, VAR_6,
         sizeof(VAR_8->ppgtt_mm.guest_pdps));

 VAR_9 = FUNC_8(VAR_8);
 if (VAR_9) {
  FUNC_3("failed to shadow ppgtt mm\n");
  FUNC_10(VAR_8);
  return FUNC_0(VAR_9);
 }

 FUNC_4(&VAR_8->ppgtt_mm.list, &VAR_4->gtt.ppgtt_mm_list_head);

 FUNC_6(&VAR_7->gtt.ppgtt_mm_lock);
 FUNC_4(&VAR_8->ppgtt_mm.lru_list, &VAR_7->gtt.ppgtt_mm_lru_list_head);
 FUNC_7(&VAR_7->gtt.ppgtt_mm_lock);

 return VAR_8;
}
