
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_3__ {TYPE_2__ subdev; } ;
struct nvkm_pm {TYPE_1__ engine; } ;
struct nvkm_perfdom {scalar_t__ addr; void* clk; } ;
struct nvkm_perfctr {int slot; void* ctr; } ;
struct nvkm_device {int dummy; } ;


 void* FUNC_0 (struct nvkm_device*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_pm *VAR_0, struct nvkm_perfdom *VAR_1,
    struct nvkm_perfctr *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->engine.subdev.device;

 switch (VAR_2->slot) {
 case 0: VAR_2->ctr = FUNC_0(VAR_3, 0x00a700 + VAR_1->addr); break;
 case 1: VAR_2->ctr = FUNC_0(VAR_3, 0x00a6c0 + VAR_1->addr); break;
 case 2: VAR_2->ctr = FUNC_0(VAR_3, 0x00a680 + VAR_1->addr); break;
 case 3: VAR_2->ctr = FUNC_0(VAR_3, 0x00a740 + VAR_1->addr); break;
 }
 VAR_1->clk = FUNC_0(VAR_3, 0x00a600 + VAR_1->addr);
}
