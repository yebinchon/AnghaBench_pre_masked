
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ramfuc_reg {int addr; int data; } ;
struct ramfuc {int memx; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_3__ subdev; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct ramfuc base; } ;
struct TYPE_4__ {struct nvkm_fb* fb; } ;
struct gk104_ram {int pnuts; TYPE_2__ fuc; TYPE_1__ base; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_2(struct gk104_ram *VAR_0, struct ramfuc_reg *VAR_1,
        u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct nvkm_fb *VAR_5 = VAR_0->base.fb;
 struct ramfuc *VAR_6 = &VAR_0->fuc.base;
 struct nvkm_device *VAR_7 = VAR_5->subdev.device;
 u32 VAR_8 = 0x110000 + (VAR_1->addr & 0xfff);
 u32 VAR_9 = VAR_2 | VAR_4;
 u32 VAR_10 = (VAR_3 & VAR_2) | (VAR_1->data & VAR_4);
 u32 VAR_11;

 for (VAR_11 = 0; VAR_11 < 16; VAR_11++, VAR_8 += 0x1000) {
  if (VAR_0->pnuts & (1 << VAR_11)) {
   u32 VAR_12 = FUNC_1(VAR_7, VAR_8);
   u32 VAR_13 = (VAR_12 & ~VAR_9) | VAR_10;
   FUNC_0(VAR_6->memx, VAR_8, VAR_13);
  }
 }
}
