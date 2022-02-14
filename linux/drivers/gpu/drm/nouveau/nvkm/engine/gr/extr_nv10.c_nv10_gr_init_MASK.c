
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct nvkm_device {scalar_t__ card_type; int chipset; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct nv10_gr* FUNC_1 (struct nvkm_gr*) ;
 int FUNC_2 (struct nvkm_device*,int ,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

int
FUNC_4(struct nvkm_gr *VAR_12)
{
 struct nv10_gr *VAR_13 = FUNC_1(VAR_12);
 struct nvkm_device *VAR_14 = VAR_13->base.engine.subdev.device;

 FUNC_3(VAR_14, VAR_0 , 0xFFFFFFFF);
 FUNC_3(VAR_14, VAR_1, 0xFFFFFFFF);

 FUNC_3(VAR_14, VAR_2, 0xFFFFFFFF);
 FUNC_3(VAR_14, VAR_2, 0x00000000);
 FUNC_3(VAR_14, VAR_3, 0x00118700);

 FUNC_3(VAR_14, VAR_4, 0x25f92ad9);
 FUNC_3(VAR_14, VAR_5, 0x55DE0830 | (1 << 29) | (1 << 31));

 if (VAR_14->card_type >= VAR_11 && VAR_14->chipset >= 0x17) {
  FUNC_3(VAR_14, VAR_8, 0x1f000000);
  FUNC_3(VAR_14, 0x400a10, 0x03ff3fb6);
  FUNC_3(VAR_14, 0x400838, 0x002f8684);
  FUNC_3(VAR_14, 0x40083c, 0x00115f3f);
  FUNC_3(VAR_14, 0x4006b0, 0x40000020);
 } else {
  FUNC_3(VAR_14, VAR_8, 0x00000000);
 }

 FUNC_3(VAR_14, FUNC_0(0), 0x00000000);
 FUNC_3(VAR_14, FUNC_0(1), 0x00000000);
 FUNC_3(VAR_14, FUNC_0(2), 0x00000000);
 FUNC_3(VAR_14, FUNC_0(3), 0x00000000);
 FUNC_3(VAR_14, FUNC_0(4), 0x00000000);
 FUNC_3(VAR_14, VAR_10, 0xFFFFFFFF);

 FUNC_2(VAR_14, VAR_7, 0xff000000, 0x1f000000);
 FUNC_3(VAR_14, VAR_6, 0x10000100);
 FUNC_3(VAR_14, VAR_9, 0x08000000);
 return 0;
}
