
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int bw; int nr; scalar_t__ ef; scalar_t__ mst; } ;
struct nvkm_ior {TYPE_4__ dp; TYPE_3__* disp; } ;
struct nvkm_i2c_aux {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_ior*) ;
 int FUNC_2 (struct nvkm_device*,int const,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_ior *VAR_1, struct nvkm_i2c_aux *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->disp->engine.subdev.device;
 const u32 VAR_4 = FUNC_0(VAR_1);
 const u32 VAR_5 = FUNC_1(VAR_1);
 u32 VAR_6 = 0x00000000;
 u32 VAR_7 = 0x00000000;

 VAR_7 |= VAR_1->dp.bw << 18;
 VAR_6 |= ((1 << VAR_1->dp.nr) - 1) << 16;
 if (VAR_1->dp.mst)
  VAR_6 |= 0x40000000;
 if (VAR_1->dp.ef)
  VAR_6 |= 0x00004000;

 FUNC_2(VAR_3, 0x612300 + VAR_4, 0x007c0000, VAR_7);


 FUNC_3(VAR_3, 40, VAR_0);
 FUNC_2(VAR_3, 0x612300 + VAR_4, 0x00030000, 0x00010000);
 FUNC_2(VAR_3, 0x61c10c + VAR_5, 0x00000003, 0x00000001);

 FUNC_2(VAR_3, 0x61c10c + VAR_5, 0x401f4000, VAR_6);
 return 0;
}
