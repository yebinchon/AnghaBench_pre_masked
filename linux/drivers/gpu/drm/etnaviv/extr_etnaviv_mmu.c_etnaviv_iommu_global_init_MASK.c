
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {void* pta_cpu; int pta_dma; } ;
struct etnaviv_iommu_global {int version; int use; int bad_page_dma; void* bad_page_cpu; int * ops; int lock; struct device* dev; TYPE_3__ v2; } ;
struct TYPE_5__ {int minor_features1; } ;
struct etnaviv_gpu {int dev; TYPE_2__ identity; TYPE_1__* drm; } ;
struct etnaviv_drm_private {struct etnaviv_iommu_global* mmu_global; } ;
struct device {int dummy; } ;
typedef enum etnaviv_iommu_version { ____Placeholder_etnaviv_iommu_version } etnaviv_iommu_version ;
struct TYPE_4__ {struct device* dev; struct etnaviv_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (struct device*,int,void*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct etnaviv_iommu_global*) ;
 struct etnaviv_iommu_global* FUNC_4 (int,int ) ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct etnaviv_gpu *VAR_10)
{
 enum etnaviv_iommu_version VAR_11 = VAR_2;
 struct etnaviv_drm_private *VAR_12 = VAR_10->drm->dev_private;
 struct etnaviv_iommu_global *VAR_13;
 struct device *VAR_14 = VAR_10->drm->dev;

 if (VAR_10->identity.minor_features1 & VAR_7)
  VAR_11 = VAR_3;

 if (VAR_12->mmu_global) {
  if (VAR_12->mmu_global->version != VAR_11) {
   FUNC_0(VAR_10->dev,
    "MMU version doesn't match global version\n");
   return -VAR_1;
  }

  VAR_12->mmu_global->use++;
  return 0;
 }

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->bad_page_cpu = FUNC_1(VAR_14, VAR_6, &VAR_13->bad_page_dma,
         VAR_5);
 if (!VAR_13->bad_page_cpu)
  goto free_global;

 FUNC_5(VAR_13->bad_page_cpu, 0xdead55aa, VAR_6 / sizeof(u32));

 if (VAR_11 == VAR_3) {
  VAR_13->v2.pta_cpu = FUNC_1(VAR_14, VAR_4,
            &VAR_13->v2.pta_dma, VAR_5);
  if (!VAR_13->v2.pta_cpu)
   goto free_bad_page;
 }

 VAR_13->dev = VAR_14;
 VAR_13->version = VAR_11;
 VAR_13->use = 1;
 FUNC_6(&VAR_13->lock);

 if (VAR_11 == VAR_2)
  VAR_13->ops = &VAR_8;
 else
  VAR_13->ops = &VAR_9;

 VAR_12->mmu_global = VAR_13;

 return 0;

free_bad_page:
 FUNC_2(VAR_14, VAR_6, VAR_13->bad_page_cpu, VAR_13->bad_page_dma);
free_global:
 FUNC_3(VAR_13);

 return -VAR_0;
}
