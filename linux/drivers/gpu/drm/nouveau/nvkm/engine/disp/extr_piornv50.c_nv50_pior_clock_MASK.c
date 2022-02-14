
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

__attribute__((used)) static void
FUNC_2(struct nvkm_ior *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, 0x614380 + VAR_2, 0x00000707, 0x00000001);
}
