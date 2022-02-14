
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


struct intel_vgpu_gtt {TYPE_7__* scratch_pt; } ;
struct intel_vgpu {int id; TYPE_6__* gvt; struct intel_vgpu_gtt gtt; } ;
struct intel_gvt_gtt_pte_ops {int (* set_entry ) (void*,struct intel_gvt_gtt_entry*,int,int,int ,struct intel_vgpu*) ;int (* set_pfn ) (struct intel_gvt_gtt_entry*,unsigned long) ;} ;
struct intel_gvt_gtt_entry {int val64; int type; } ;
struct device {int dummy; } ;
typedef enum intel_gvt_gtt_type { ____Placeholder_intel_gvt_gtt_type } intel_gvt_gtt_type ;
typedef int dma_addr_t ;
struct TYPE_14__ {unsigned long page_mfn; int page; } ;
struct TYPE_9__ {int gtt_entry_size_shift; } ;
struct TYPE_8__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_13__ {TYPE_5__* dev_priv; TYPE_2__ device_info; TYPE_1__ gtt; } ;
struct TYPE_11__ {TYPE_3__* pdev; } ;
struct TYPE_12__ {TYPE_4__ drm; } ;
struct TYPE_10__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int,unsigned long) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct intel_gvt_gtt_entry*,int ,int) ;
 int FUNC_9 (struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_10 (void*,struct intel_gvt_gtt_entry*,int,int,int ,struct intel_vgpu*) ;
 int FUNC_11 (void*) ;

__attribute__((used)) static int FUNC_12(struct intel_vgpu *VAR_12,
  enum intel_gvt_gtt_type VAR_13)
{
 struct intel_vgpu_gtt *VAR_14 = &VAR_12->gtt;
 struct intel_gvt_gtt_pte_ops *VAR_15 = VAR_12->gvt->gtt.pte_ops;
 int VAR_16 = VAR_7 >>
    VAR_12->gvt->device_info.gtt_entry_size_shift;
 void *VAR_17;
 int VAR_18;
 struct device *VAR_19 = &VAR_12->gvt->dev_priv->drm.pdev->dev;
 dma_addr_t VAR_20;

 if (FUNC_0(VAR_13 < VAR_5 || VAR_13 >= VAR_3))
  return -VAR_0;

 VAR_17 = (void *)FUNC_5(VAR_2);
 if (!VAR_17) {
  FUNC_7("fail to allocate scratch page\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_2(VAR_19, FUNC_11(VAR_17), 0,
   4096, VAR_8);
 if (FUNC_3(VAR_19, VAR_20)) {
  FUNC_7("fail to dmamap scratch_pt\n");
  FUNC_1(FUNC_11(VAR_17));
  return -VAR_1;
 }
 VAR_14->scratch_pt[VAR_13].page_mfn =
  (unsigned long)(VAR_20 >> VAR_6);
 VAR_14->scratch_pt[VAR_13].page = FUNC_11(VAR_17);
 FUNC_6("vgpu%d create scratch_pt: type %d mfn=0x%lx\n",
   VAR_12->id, VAR_13, VAR_14->scratch_pt[VAR_13].page_mfn);
 if (VAR_13 > VAR_5) {
  struct intel_gvt_gtt_entry VAR_21;

  FUNC_8(&VAR_21, 0, sizeof(struct intel_gvt_gtt_entry));
  VAR_21.type = FUNC_4(VAR_13 - 1);
  VAR_15->set_pfn(&VAR_21, VAR_14->scratch_pt[VAR_13 - 1].page_mfn);




  VAR_21.val64 |= VAR_10 | VAR_11;
  if (VAR_13 == VAR_4)
   VAR_21.val64 |= VAR_9;

  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++)
   VAR_15->set_entry(VAR_17, &VAR_21, VAR_18, 0, 0, VAR_12);
 }

 return 0;
}
