
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {struct nvkm_device* device; } ;
struct nvkm_mmu {TYPE_3__* vmm; TYPE_4__ subdev; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_7__ {int null; TYPE_2__* pd; } ;
struct TYPE_6__ {TYPE_1__** pt; } ;
struct TYPE_5__ {struct nvkm_memory* memory; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_memory*) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_mmu *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 struct nvkm_memory *VAR_2 = VAR_0->vmm->pd->pt[0]->memory;
 u32 VAR_3;





 VAR_3 = FUNC_3(VAR_1, 0x10020c);
 VAR_3 -= ((FUNC_1(VAR_2) >> 19) + 1) << 19;

 FUNC_4(VAR_1, 0x100850, 0x80000000);
 FUNC_4(VAR_1, 0x100818, VAR_0->vmm->null);
 FUNC_4(VAR_1, 0x100804, (FUNC_2(VAR_2) / 4) * 4096);
 FUNC_4(VAR_1, 0x100850, 0x00008000);
 FUNC_0(VAR_1, 0x10008c, 0x00000200, 0x00000200);
 FUNC_4(VAR_1, 0x100820, 0x00000000);
 FUNC_4(VAR_1, 0x10082c, 0x00000001);
 FUNC_4(VAR_1, 0x100800, VAR_3 | 0x00000010);
}
