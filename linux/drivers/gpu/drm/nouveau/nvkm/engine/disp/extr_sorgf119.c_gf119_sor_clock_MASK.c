
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ high_speed; } ;
struct TYPE_6__ {int link; scalar_t__ proto; } ;
struct nvkm_ior {TYPE_2__ tmds; TYPE_1__ asy; TYPE_4__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {struct nvkm_device* device; } ;
struct TYPE_10__ {TYPE_3__ subdev; } ;
struct TYPE_9__ {TYPE_5__ engine; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_device*,int const,int,int const) ;

void
FUNC_2(struct nvkm_ior *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->disp->engine.subdev.device;
 const u32 VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = VAR_1->asy.link == 3;
 u32 VAR_5 = VAR_1->asy.link == 3;
 if (VAR_1->asy.proto == VAR_0) {
  const u32 VAR_6 = VAR_1->tmds.high_speed ? 0x14 : 0x0a;
  FUNC_1(VAR_2, 0x612300 + VAR_3, 0x007c0000, VAR_6 << 18);
  if (VAR_1->tmds.high_speed)
   VAR_5 = 1;
 }
 FUNC_1(VAR_2, 0x612300 + VAR_3, 0x00000707, (VAR_5 << 8) | VAR_4);
}
