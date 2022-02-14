
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_map {int* pfn; } ;
struct nvkm_vmm {TYPE_3__* mmu; } ;
struct nvkm_mmu_pt {int memory; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct TYPE_4__ {struct device* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nvkm_mmu_pt*,struct nvkm_vmm*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,int ,int ,int ,int ) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(struct nvkm_vmm *VAR_6, struct nvkm_mmu_pt *VAR_7,
    u32 VAR_8, u32 VAR_9, struct nvkm_vmm_map *VAR_10)
{
 struct device *VAR_11 = VAR_6->mmu->subdev.device->dev;
 dma_addr_t VAR_12;

 FUNC_6(VAR_7->memory);
 while (VAR_9--) {
  u64 VAR_13 = 0;
  if (!(*VAR_10->pfn & VAR_4))
   VAR_13 |= FUNC_0(6);

  if (!(*VAR_10->pfn & VAR_3)) {
   VAR_12 = *VAR_10->pfn >> VAR_2;
   VAR_12 = FUNC_3(VAR_11, FUNC_7(VAR_12), 0,
         VAR_5, VAR_0);
   if (!FUNC_2(FUNC_4(VAR_11, VAR_12))) {
    VAR_13 |= VAR_12 >> 4;
    VAR_13 |= 2ULL << 1;
    VAR_13 |= FUNC_0(3);
    VAR_13 |= FUNC_0(0);
   }
  } else {
   VAR_13 |= (*VAR_10->pfn & VAR_1) >> 4;
   VAR_13 |= FUNC_0(0);
  }

  FUNC_1(VAR_7, VAR_6, VAR_8++ * 8, VAR_13);
  VAR_10->pfn++;
 }
 FUNC_5(VAR_7->memory);
}
