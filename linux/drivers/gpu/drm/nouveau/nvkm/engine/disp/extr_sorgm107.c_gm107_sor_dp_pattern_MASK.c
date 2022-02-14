
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int link; } ;
struct nvkm_ior {TYPE_4__ asy; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_device*,int const,int,int const) ;

void
FUNC_2(struct nvkm_ior *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_3 = FUNC_0(VAR_0);
 const u32 VAR_4 = 0x01010101 * VAR_1;
 if (VAR_0->asy.link & 1)
  FUNC_1(VAR_2, 0x61c110 + VAR_3, 0x0f0f0f0f, VAR_4);
 else
  FUNC_1(VAR_2, 0x61c12c + VAR_3, 0x0f0f0f0f, VAR_4);
}
