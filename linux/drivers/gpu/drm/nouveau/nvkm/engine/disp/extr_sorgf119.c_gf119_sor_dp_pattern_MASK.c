
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_ior {TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 scalar_t__ FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__ const,int,int) ;

void
FUNC_2(struct nvkm_ior *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, 0x61c110 + VAR_3, 0x0f0f0f0f, 0x01010101 * VAR_1);
}
