
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned long scratch_mfn; int ppgtt_mm_lock; int ppgtt_mm_lru_list_head; int scratch_page; int * gma_ops; int * pte_ops; } ;
struct intel_gvt {TYPE_4__ gtt; TYPE_3__* dev_priv; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_7__ {TYPE_2__ drm; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,int,int,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct intel_gvt*) ;
 int FUNC_10 (void*) ;

int FUNC_11(struct intel_gvt *VAR_7)
{
 int VAR_8;
 void *VAR_9;
 struct device *VAR_10 = &VAR_7->dev_priv->drm.pdev->dev;
 dma_addr_t VAR_11;

 FUNC_6("init gtt\n");

 VAR_7->gtt.pte_ops = &VAR_6;
 VAR_7->gtt.gma_ops = &VAR_5;

 VAR_9 = (void *)FUNC_5(VAR_1);
 if (!VAR_9) {
  FUNC_7("fail to allocate scratch ggtt page\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_10, FUNC_10(VAR_9), 0,
   4096, VAR_3);
 if (FUNC_3(VAR_10, VAR_11)) {
  FUNC_7("fail to dmamap scratch ggtt page\n");
  FUNC_1(FUNC_10(VAR_9));
  return -VAR_0;
 }

 VAR_7->gtt.scratch_page = FUNC_10(VAR_9);
 VAR_7->gtt.scratch_mfn = (unsigned long)(VAR_11 >> VAR_2);

 if (VAR_4) {
  VAR_8 = FUNC_9(VAR_7);
  if (VAR_8) {
   FUNC_7("fail to initialize SPT oos\n");
   FUNC_4(VAR_10, VAR_11, 4096, VAR_3);
   FUNC_1(VAR_7->gtt.scratch_page);
   return VAR_8;
  }
 }
 FUNC_0(&VAR_7->gtt.ppgtt_mm_lru_list_head);
 FUNC_8(&VAR_7->gtt.ppgtt_mm_lock);
 return 0;
}
