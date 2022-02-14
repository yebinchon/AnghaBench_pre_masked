
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
struct nvkm_ior {TYPE_5__* func; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_9__ {int* lanes; } ;
struct TYPE_10__ {TYPE_4__ dp; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_device*,int const) ;
 int FUNC_2 (struct nvkm_device*,int const,int) ;

void
FUNC_3(struct nvkm_ior *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_7 = FUNC_0(VAR_0);
 const u32 VAR_8 = VAR_0->func->dp.lanes[VAR_1] * 8;
 u32 VAR_9[4];

 VAR_5 &= 0x0f;

 VAR_9[0] = FUNC_1(VAR_6, 0x61c118 + VAR_7) & ~(0x000000ff << VAR_8);
 VAR_9[1] = FUNC_1(VAR_6, 0x61c120 + VAR_7) & ~(0x000000ff << VAR_8);
 VAR_9[2] = FUNC_1(VAR_6, 0x61c130 + VAR_7);
 if ((VAR_9[2] & 0x00000f00) < (VAR_5 << 8) || VAR_1 == 0)
  VAR_9[2] = (VAR_9[2] & ~0x00000f00) | (VAR_5 << 8);
 FUNC_2(VAR_6, 0x61c118 + VAR_7, VAR_9[0] | (VAR_3 << VAR_8));
 FUNC_2(VAR_6, 0x61c120 + VAR_7, VAR_9[1] | (VAR_4 << VAR_8));
 FUNC_2(VAR_6, 0x61c130 + VAR_7, VAR_9[2]);
 VAR_9[3] = FUNC_1(VAR_6, 0x61c13c + VAR_7) & ~(0x000000ff << VAR_8);
 FUNC_2(VAR_6, 0x61c13c + VAR_7, VAR_9[3] | (VAR_2 << VAR_8));
}
