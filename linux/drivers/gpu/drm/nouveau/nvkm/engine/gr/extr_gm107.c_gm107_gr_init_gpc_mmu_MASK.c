
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fb {int mmu_rd; int mmu_wr; } ;
struct nvkm_device {struct nvkm_fb* fb; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_3__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 struct nvkm_fb *VAR_2 = VAR_1->fb;

 FUNC_2(VAR_1, FUNC_0(0x0880), 0x00000000);
 FUNC_2(VAR_1, FUNC_0(0x0890), 0x00000000);
 FUNC_2(VAR_1, FUNC_0(0x0894), 0x00000000);
 FUNC_2(VAR_1, FUNC_0(0x08b4), FUNC_1(VAR_2->mmu_wr) >> 8);
 FUNC_2(VAR_1, FUNC_0(0x08b8), FUNC_1(VAR_2->mmu_rd) >> 8);
}
