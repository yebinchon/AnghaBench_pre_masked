
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fb {TYPE_3__* func; } ;
struct nvkm_device {int therm; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct gf100_fb {int r100c10; scalar_t__ r100c10_page; TYPE_2__ base; } ;
struct TYPE_6__ {int clkgate_pack; } ;


 struct gf100_fb* FUNC_0 (struct nvkm_fb*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_fb *VAR_0)
{
 struct gf100_fb *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.subdev.device;

 if (VAR_1->r100c10_page)
  FUNC_2(VAR_2, 0x100c10, VAR_1->r100c10 >> 8);

 if (VAR_0->func->clkgate_pack) {
  FUNC_1(VAR_2->therm,
     VAR_0->func->clkgate_pack);
 }
}
