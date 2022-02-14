
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int type; int mfn; int page; int vaddr; } ;
struct intel_vgpu_ppgtt_spt {TYPE_5__ shadow_page; int post_shadow_list; int refcount; struct intel_vgpu* vgpu; } ;
struct TYPE_10__ {int spt_tree; } ;
struct intel_vgpu {TYPE_4__ gtt; TYPE_6__* gvt; } ;
struct device {int dummy; } ;
typedef enum intel_gvt_gtt_type { ____Placeholder_intel_gvt_gtt_type } intel_gvt_gtt_type ;
typedef int dma_addr_t ;
struct TYPE_12__ {TYPE_3__* dev_priv; } ;
struct TYPE_8__ {TYPE_1__* pdev; } ;
struct TYPE_9__ {TYPE_2__ drm; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_vgpu_ppgtt_spt* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct intel_vgpu_ppgtt_spt* FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct device*,int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,int,int ,int ) ;
 int FUNC_7 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int,struct intel_vgpu_ppgtt_spt*) ;
 scalar_t__ FUNC_11 (TYPE_6__*) ;

__attribute__((used)) static struct intel_vgpu_ppgtt_spt *FUNC_12(
  struct intel_vgpu *VAR_7, enum intel_gvt_gtt_type VAR_8)
{
 struct device *VAR_9 = &VAR_7->gvt->dev_priv->drm.pdev->dev;
 struct intel_vgpu_ppgtt_spt *VAR_10 = ((void*)0);
 dma_addr_t VAR_11;
 int VAR_12;

retry:
 VAR_10 = FUNC_2(VAR_2 | VAR_6);
 if (!VAR_10) {
  if (FUNC_11(VAR_7->gvt))
   goto retry;

  FUNC_8("fail to allocate ppgtt shadow page\n");
  return FUNC_0(-VAR_1);
 }

 VAR_10->vgpu = VAR_7;
 FUNC_3(&VAR_10->refcount, 1);
 FUNC_1(&VAR_10->post_shadow_list);




 VAR_10->shadow_page.type = VAR_8;
 VAR_11 = FUNC_4(VAR_9, VAR_10->shadow_page.page,
        0, 4096, VAR_5);
 if (FUNC_5(VAR_9, VAR_11)) {
  FUNC_8("fail to map dma addr\n");
  VAR_12 = -VAR_0;
  goto err_free_spt;
 }
 VAR_10->shadow_page.vaddr = FUNC_9(VAR_10->shadow_page.page);
 VAR_10->shadow_page.mfn = VAR_11 >> VAR_3;

 VAR_12 = FUNC_10(&VAR_7->gtt.spt_tree, VAR_10->shadow_page.mfn, VAR_10);
 if (VAR_12)
  goto err_unmap_dma;

 return VAR_10;

err_unmap_dma:
 FUNC_6(VAR_9, VAR_11, VAR_4, VAR_5);
err_free_spt:
 FUNC_7(VAR_10);
 return FUNC_0(VAR_12);
}
