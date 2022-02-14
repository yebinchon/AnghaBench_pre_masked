
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dev; int cfgopt; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {int page; int mmu_wr; int mmu_rd; TYPE_1__ subdev; } ;
struct gf100_fb {int r100c10; scalar_t__ r100c10_page; TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct gf100_fb* FUNC_3 (struct nvkm_fb*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct nvkm_device*,int ,int,int,int,int *) ;

int
FUNC_7(struct nvkm_fb *VAR_6)
{
 struct gf100_fb *VAR_7 = FUNC_3(VAR_6);
 struct nvkm_device *VAR_8 = VAR_7->base.subdev.device;
 int VAR_9, VAR_10 = 1 << (VAR_7->base.page ? VAR_7->base.page : 17);

 VAR_10 = FUNC_5(VAR_8->cfgopt, "MmuDebugBufferSize", VAR_10);
 VAR_10 = FUNC_4(VAR_10, 0x1000);

 VAR_9 = FUNC_6(VAR_8, VAR_3, VAR_10, 0x1000,
         1, &VAR_7->base.mmu_rd);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_6(VAR_8, VAR_3, VAR_10, 0x1000,
         1, &VAR_7->base.mmu_wr);
 if (VAR_9)
  return VAR_9;

 VAR_7->r100c10_page = FUNC_0(VAR_2 | VAR_5);
 if (VAR_7->r100c10_page) {
  VAR_7->r100c10 = FUNC_1(VAR_8->dev, VAR_7->r100c10_page, 0,
        VAR_4, VAR_0);
  if (FUNC_2(VAR_8->dev, VAR_7->r100c10))
   return -VAR_1;
 }

 return 0;
}
