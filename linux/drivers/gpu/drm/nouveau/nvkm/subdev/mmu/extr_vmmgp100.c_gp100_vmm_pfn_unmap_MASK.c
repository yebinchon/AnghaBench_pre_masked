
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm {TYPE_3__* mmu; } ;
struct nvkm_mmu_pt {int memory; scalar_t__ base; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_vmm *VAR_2,
      struct nvkm_mmu_pt *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct device *VAR_6 = VAR_2->mmu->subdev.device->dev;
 dma_addr_t VAR_7;

 FUNC_2(VAR_3->memory);
 while (VAR_5--) {
  u32 VAR_8 = FUNC_3(VAR_3->memory, VAR_3->base + VAR_4 * 8 + 0);
  u32 VAR_9 = FUNC_3(VAR_3->memory, VAR_3->base + VAR_4 * 8 + 4);
  u64 VAR_10 = (u64)VAR_9 << 32 | VAR_8;
  if ((VAR_10 & (3ULL << 1)) != 0) {
   VAR_7 = (VAR_10 >> 8) << 12;
   FUNC_0(VAR_6, VAR_7, VAR_1, VAR_0);
  }
  VAR_4++;
 }
 FUNC_1(VAR_3->memory);
}
