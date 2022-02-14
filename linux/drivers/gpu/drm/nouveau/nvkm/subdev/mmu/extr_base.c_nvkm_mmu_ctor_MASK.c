
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user; } ;
struct nvkm_mmu_func {TYPE_1__ mmu; int dma_bits; } ;
struct TYPE_4__ {int base; int ctor; } ;
struct nvkm_mmu {TYPE_2__ user; int dma_bits; struct nvkm_mmu_func const* func; int subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_mmu*) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int *) ;
 int VAR_1 ;

void
FUNC_2(const struct nvkm_mmu_func *VAR_2, struct nvkm_device *VAR_3,
       int VAR_4, struct nvkm_mmu *VAR_5)
{
 FUNC_1(&VAR_0, VAR_3, VAR_4, &VAR_5->subdev);
 VAR_5->func = VAR_2;
 VAR_5->dma_bits = VAR_2->dma_bits;
 FUNC_0(VAR_5);
 VAR_5->user.ctor = VAR_1;
 VAR_5->user.base = VAR_2->mmu.user;
}
