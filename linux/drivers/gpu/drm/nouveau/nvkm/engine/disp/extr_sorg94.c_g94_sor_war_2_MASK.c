
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ior {TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_ior*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int ) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_ior *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->disp->engine.subdev.device;
 const u32 VAR_3 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_1))
  return;

 FUNC_2(VAR_2, 0x00e840, 0x80000000, 0x80000000);
 FUNC_2(VAR_2, 0x614300 + VAR_3, 0x03000000, 0x03000000);
 FUNC_2(VAR_2, 0x61c10c + VAR_3, 0x00000001, 0x00000001);

 FUNC_2(VAR_2, 0x61c00c + VAR_3, 0x0f000000, 0x00000000);
 FUNC_2(VAR_2, 0x61c008 + VAR_3, 0xff000000, 0x14000000);
 FUNC_4(VAR_2, 400, VAR_0);
 FUNC_2(VAR_2, 0x61c008 + VAR_3, 0xff000000, 0x00000000);
 FUNC_2(VAR_2, 0x61c00c + VAR_3, 0x0f000000, 0x01000000);

 if (FUNC_3(VAR_2, 0x61c004 + VAR_3) & 0x00000001) {
  u32 VAR_4 = FUNC_3(VAR_2, 0x61c030 + VAR_3);
  u32 VAR_5 = VAR_4 & 0x0000000f;
  FUNC_5(VAR_2, 0x61c040 + VAR_3 + VAR_5 * 4, 0x1f008000);
 }
}
