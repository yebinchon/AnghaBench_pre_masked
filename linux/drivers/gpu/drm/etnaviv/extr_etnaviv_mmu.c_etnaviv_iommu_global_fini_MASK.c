
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pta_dma; scalar_t__ pta_cpu; } ;
struct etnaviv_iommu_global {scalar_t__ use; int lock; int bad_page_dma; scalar_t__ bad_page_cpu; int dev; TYPE_1__ v2; } ;
struct etnaviv_gpu {TYPE_2__* drm; } ;
struct etnaviv_drm_private {struct etnaviv_iommu_global* mmu_global; } ;
struct TYPE_4__ {struct etnaviv_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct etnaviv_iommu_global*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct etnaviv_gpu *VAR_2)
{
 struct etnaviv_drm_private *VAR_3 = VAR_2->drm->dev_private;
 struct etnaviv_iommu_global *VAR_4 = VAR_3->mmu_global;

 if (--VAR_4->use > 0)
  return;

 if (VAR_4->v2.pta_cpu)
  FUNC_0(VAR_4->dev, VAR_0,
       VAR_4->v2.pta_cpu, VAR_4->v2.pta_dma);

 if (VAR_4->bad_page_cpu)
  FUNC_0(VAR_4->dev, VAR_1,
       VAR_4->bad_page_cpu, VAR_4->bad_page_dma);

 FUNC_2(&VAR_4->lock);
 FUNC_1(VAR_4);

 VAR_3->mmu_global = ((void*)0);
}
