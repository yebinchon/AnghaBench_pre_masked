
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int nr; int bw; scalar_t__ ef; } ;
struct nvkm_ior {TYPE_1__ dp; TYPE_4__* disp; } ;
struct nvkm_i2c_aux {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_2__ subdev; } ;
struct TYPE_8__ {TYPE_3__ engine; } ;


 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_ior*) ;
 int FUNC_2 (struct nvkm_device*,int const,int,int) ;

int
FUNC_3(struct nvkm_ior *VAR_0, struct nvkm_i2c_aux *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_3 = FUNC_0(VAR_0);
 const u32 VAR_4 = FUNC_1(VAR_0);
 u32 VAR_5 = 0x00000000;
 u32 VAR_6 = 0x00000000;

 VAR_5 |= ((1 << VAR_0->dp.nr) - 1) << 16;
 if (VAR_0->dp.ef)
  VAR_5 |= 0x00004000;
 if (VAR_0->dp.bw > 0x06)
  VAR_6 |= 0x00040000;

 FUNC_2(VAR_2, 0x614300 + VAR_3, 0x000c0000, VAR_6);
 FUNC_2(VAR_2, 0x61c10c + VAR_4, 0x001f4000, VAR_5);
 return 0;
}
