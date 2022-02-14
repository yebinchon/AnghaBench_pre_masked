
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {int mmu_rd; int mmu_wr; TYPE_1__ subdev; } ;
struct gf100_fb {int r100c10; TYPE_2__ base; scalar_t__ r100c10_page; } ;


 struct gf100_fb* FUNC_0 (struct nvkm_fb*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

void
FUNC_6(struct nvkm_fb *VAR_0)
{
 struct gf100_fb *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.subdev.device;

 if (VAR_1->r100c10_page)
  FUNC_5(VAR_2, 0x100c10, VAR_1->r100c10 >> 8);

 FUNC_5(VAR_2, 0x100cc8, FUNC_3(VAR_1->base.mmu_wr) >> 8);
 FUNC_5(VAR_2, 0x100ccc, FUNC_3(VAR_1->base.mmu_rd) >> 8);
 FUNC_2(VAR_2, 0x100cc4, 0x00060000,
    FUNC_1(FUNC_4(VAR_1->base.mmu_rd) >> 16, (u64)2) << 17);
}
