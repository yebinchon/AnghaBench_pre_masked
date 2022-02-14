
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


struct TYPE_12__ {TYPE_5__* scratch_pt; } ;
struct intel_vgpu {TYPE_6__ gtt; TYPE_4__* gvt; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_11__ {int page_mfn; int * page; } ;
struct TYPE_10__ {TYPE_3__* dev_priv; } ;
struct TYPE_8__ {TYPE_1__* pdev; } ;
struct TYPE_9__ {TYPE_2__ drm; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = &VAR_4->gvt->dev_priv->drm.pdev->dev;
 dma_addr_t VAR_7;

 for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->gtt.scratch_pt[VAR_5].page != ((void*)0)) {
   VAR_7 = (dma_addr_t)(VAR_4->gtt.scratch_pt[VAR_5].page_mfn <<
     VAR_2);
   FUNC_1(VAR_6, VAR_7, 4096, VAR_3);
   FUNC_0(VAR_4->gtt.scratch_pt[VAR_5].page);
   VAR_4->gtt.scratch_pt[VAR_5].page = ((void*)0);
   VAR_4->gtt.scratch_pt[VAR_5].page_mfn = 0;
  }
 }

 return 0;
}
