
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ root_entry_type; } ;
struct intel_vgpu_mm {scalar_t__ type; TYPE_2__ ppgtt_mm; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int id; struct intel_gvt* gvt; } ;
struct intel_gvt_gtt_pte_ops {unsigned long (* get_pfn ) (struct intel_gvt_gtt_entry*) ;int (* test_present ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_gma_ops {unsigned long (* gma_to_pml4_index ) (unsigned long) ;unsigned long (* gma_to_l4_pdp_index ) (unsigned long) ;unsigned long (* gma_to_pde_index ) (unsigned long) ;unsigned long (* gma_to_pte_index ) (unsigned long) ;int (* gma_to_l3_pdp_index ) (unsigned long) ;int (* gma_to_ggtt_pte_index ) (unsigned long) ;} ;
struct intel_gvt_gtt_entry {int dummy; } ;
struct TYPE_3__ {struct intel_gvt_gtt_gma_ops* gma_ops; struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct intel_gvt {TYPE_1__ gtt; } ;


 int FUNC_0 (int) ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct intel_vgpu_mm*,struct intel_gvt_gtt_entry*,int ) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (char*,scalar_t__,unsigned long) ;
 int FUNC_4 (struct intel_vgpu_mm*,struct intel_gvt_gtt_entry*,unsigned long,int) ;
 int FUNC_5 (struct intel_vgpu_mm*,struct intel_gvt_gtt_entry*,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct intel_gvt_gtt_entry*) ;
 unsigned long FUNC_8 (struct intel_gvt_gtt_entry*) ;
 unsigned long FUNC_9 (struct intel_gvt_gtt_entry*) ;
 unsigned long FUNC_10 (unsigned long) ;
 unsigned long FUNC_11 (unsigned long) ;
 unsigned long FUNC_12 (unsigned long) ;
 unsigned long FUNC_13 (unsigned long) ;
 int FUNC_14 (unsigned long) ;
 unsigned long FUNC_15 (unsigned long) ;
 unsigned long FUNC_16 (unsigned long) ;
 int FUNC_17 (int ,char*,int ,scalar_t__,unsigned long,unsigned long) ;
 int FUNC_18 (struct intel_vgpu*,unsigned long) ;

unsigned long FUNC_19(struct intel_vgpu_mm *VAR_5, unsigned long VAR_6)
{
 struct intel_vgpu *VAR_7 = VAR_5->vgpu;
 struct intel_gvt *VAR_8 = VAR_7->gvt;
 struct intel_gvt_gtt_pte_ops *VAR_9 = VAR_8->gtt.pte_ops;
 struct intel_gvt_gtt_gma_ops *VAR_10 = VAR_8->gtt.gma_ops;
 unsigned long VAR_11 = VAR_2;
 unsigned long VAR_12[4];
 struct intel_gvt_gtt_entry VAR_13;
 int VAR_14, VAR_15 = 0;
 int VAR_16;

 FUNC_0(VAR_5->type != VAR_3 &&
     VAR_5->type != VAR_4);

 if (VAR_5->type == VAR_3) {
  if (!FUNC_18(VAR_7, VAR_6))
   goto err;

  FUNC_1(VAR_5, &VAR_13,
   VAR_10->gma_to_ggtt_pte_index(VAR_6));

  VAR_11 = (VAR_9->get_pfn(&VAR_13) << VAR_1)
   + (VAR_6 & ~VAR_0);

  FUNC_17(VAR_7->id, "ggtt", 0, 0, VAR_6, VAR_11);
 } else {
  switch (VAR_5->ppgtt_mm.root_entry_type) {
  case 128:
   FUNC_5(VAR_5, &VAR_13, 0);

   VAR_12[0] = VAR_10->gma_to_pml4_index(VAR_6);
   VAR_12[1] = VAR_10->gma_to_l4_pdp_index(VAR_6);
   VAR_12[2] = VAR_10->gma_to_pde_index(VAR_6);
   VAR_12[3] = VAR_10->gma_to_pte_index(VAR_6);
   VAR_15 = 4;
   break;
  case 129:
   FUNC_5(VAR_5, &VAR_13,
     VAR_10->gma_to_l3_pdp_index(VAR_6));

   VAR_12[0] = VAR_10->gma_to_pde_index(VAR_6);
   VAR_12[1] = VAR_10->gma_to_pte_index(VAR_6);
   VAR_15 = 2;
   break;
  default:
   FUNC_0(1);
  }


  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   VAR_16 = FUNC_4(VAR_5, &VAR_13, VAR_12[VAR_14],
    (VAR_14 == VAR_15 - 1));
   if (VAR_16)
    goto err;

   if (!VAR_9->test_present(&VAR_13)) {
    FUNC_2("GMA 0x%lx is not present\n", VAR_6);
    goto err;
   }
  }

  VAR_11 = (VAR_9->get_pfn(&VAR_13) << VAR_1) +
     (VAR_6 & ~VAR_0);
  FUNC_17(VAR_7->id, "ppgtt", 0,
        VAR_5->ppgtt_mm.root_entry_type, VAR_6, VAR_11);
 }

 return VAR_11;
err:
 FUNC_3("invalid mm type: %d gma %lx\n", VAR_5->type, VAR_6);
 return VAR_2;
}
