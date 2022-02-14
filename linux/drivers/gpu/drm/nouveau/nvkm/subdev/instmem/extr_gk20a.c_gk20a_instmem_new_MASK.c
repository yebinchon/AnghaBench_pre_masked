
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_instmem {int subdev; } ;
struct TYPE_5__ {int pgshift; scalar_t__ domain; int mm; int mutex; } ;
struct nvkm_device_tegra {TYPE_3__* func; TYPE_2__ iommu; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct gk20a_instmem {int vaddr_max; int attrs; struct nvkm_instmem base; int iommu_bit; int iommu_pgshift; scalar_t__ domain; int * mm; int * mm_mutex; int vaddr_lru; scalar_t__ vaddr_use; int lock; } ;
struct TYPE_6__ {int iommu_bit; } ;
struct TYPE_4__ {struct nvkm_device_tegra* (* tegra ) (struct nvkm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 struct gk20a_instmem* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct nvkm_device*,int,struct nvkm_instmem*) ;
 struct nvkm_device_tegra* FUNC_5 (struct nvkm_device*) ;

int
FUNC_6(struct nvkm_device *VAR_6, int VAR_7,
    struct nvkm_instmem **VAR_8)
{
 struct nvkm_device_tegra *VAR_9 = VAR_6->func->tegra(VAR_6);
 struct gk20a_instmem *VAR_10;

 if (!(VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_4)))
  return -VAR_3;
 FUNC_4(&VAR_5, VAR_6, VAR_7, &VAR_10->base);
 FUNC_2(&VAR_10->lock);
 *VAR_8 = &VAR_10->base;


 VAR_10->vaddr_use = 0;
 VAR_10->vaddr_max = 0x100000;
 FUNC_0(&VAR_10->vaddr_lru);

 if (VAR_9->iommu.domain) {
  VAR_10->mm_mutex = &VAR_9->iommu.mutex;
  VAR_10->mm = &VAR_9->iommu.mm;
  VAR_10->domain = VAR_9->iommu.domain;
  VAR_10->iommu_pgshift = VAR_9->iommu.pgshift;
  VAR_10->iommu_bit = VAR_9->func->iommu_bit;

  FUNC_3(&VAR_10->base.subdev, "using IOMMU\n");
 } else {
  VAR_10->attrs = VAR_0 |
         VAR_1 |
         VAR_2;

  FUNC_3(&VAR_10->base.subdev, "using DMA API\n");
 }

 return 0;
}
