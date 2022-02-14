
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_hwsq {struct nvkm_subdev* subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,...) ;
 int FUNC_1 (struct nvkm_hwsq*,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;

void
FUNC_3(struct nvkm_hwsq *VAR_0)
{
 struct nvkm_subdev *VAR_1 = VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3, VAR_4, VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_3 = FUNC_2(VAR_2, 0x610050);
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {

  if (VAR_3 & (2 << (VAR_7 << 3))) {
   VAR_4 = FUNC_2(VAR_2, 0x610b40 + (0x540 * VAR_7));
   VAR_5 = (VAR_4 & 0xffff0000) >> 16;
   VAR_4 &= 0x0000ffff;
   if ((VAR_4 * VAR_5) > VAR_6) {
    VAR_6 = (VAR_4 * VAR_5);
    VAR_8 = VAR_7;
   }
  }
 }

 if (VAR_6 == 0) {
  FUNC_0(VAR_1, "WAIT VBLANK !NO ACTIVE HEAD\n");
  return;
 }

 FUNC_0(VAR_1, "WAIT VBLANK HEAD%d\n", VAR_8);
 FUNC_1(VAR_0, VAR_8 ? 0x3 : 0x1, 0x0);
 FUNC_1(VAR_0, VAR_8 ? 0x3 : 0x1, 0x1);
}
