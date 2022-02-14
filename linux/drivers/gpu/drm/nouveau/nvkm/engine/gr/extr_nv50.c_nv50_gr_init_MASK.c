
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct nvkm_device {int chipset; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv50_gr {int size; TYPE_3__ base; } ;


 struct nv50_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (struct nvkm_device*,int *) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

int
FUNC_4(struct nvkm_gr *VAR_0)
{
 struct nv50_gr *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.engine.subdev.device;
 int VAR_3, VAR_4, VAR_5;


 FUNC_3(VAR_2, 0x40008c, 0x00000004);


 FUNC_3(VAR_2, 0x400804, 0xc0000000);
 FUNC_3(VAR_2, 0x406800, 0xc0000000);
 FUNC_3(VAR_2, 0x400c04, 0xc0000000);
 FUNC_3(VAR_2, 0x401800, 0xc0000000);
 FUNC_3(VAR_2, 0x405018, 0xc0000000);
 FUNC_3(VAR_2, 0x402000, 0xc0000000);

 VAR_4 = FUNC_2(VAR_2, 0x001540);
 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  if (!(VAR_4 & (1 << VAR_5)))
   continue;

  if (VAR_2->chipset < 0xa0) {
   FUNC_3(VAR_2, 0x408900 + (VAR_5 << 12), 0xc0000000);
   FUNC_3(VAR_2, 0x408e08 + (VAR_5 << 12), 0xc0000000);
   FUNC_3(VAR_2, 0x408314 + (VAR_5 << 12), 0xc0000000);
  } else {
   FUNC_3(VAR_2, 0x408600 + (VAR_5 << 11), 0xc0000000);
   FUNC_3(VAR_2, 0x408708 + (VAR_5 << 11), 0xc0000000);
   FUNC_3(VAR_2, 0x40831c + (VAR_5 << 11), 0xc0000000);
  }
 }

 FUNC_3(VAR_2, 0x400108, 0xffffffff);
 FUNC_3(VAR_2, 0x400138, 0xffffffff);
 FUNC_3(VAR_2, 0x400100, 0xffffffff);
 FUNC_3(VAR_2, 0x40013c, 0xffffffff);
 FUNC_3(VAR_2, 0x400500, 0x00010001);


 VAR_3 = FUNC_1(VAR_2, &VAR_1->size);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_2, 0x400824, 0x00000000);
 FUNC_3(VAR_2, 0x400828, 0x00000000);
 FUNC_3(VAR_2, 0x40082c, 0x00000000);
 FUNC_3(VAR_2, 0x400830, 0x00000000);
 FUNC_3(VAR_2, 0x40032c, 0x00000000);
 FUNC_3(VAR_2, 0x400330, 0x00000000);


 switch (VAR_2->chipset & 0xf0) {
 case 0x50:
 case 0x80:
 case 0x90:
  FUNC_3(VAR_2, 0x402ca8, 0x00000800);
  break;
 case 0xa0:
 default:
  if (VAR_2->chipset == 0xa0 ||
      VAR_2->chipset == 0xaa ||
      VAR_2->chipset == 0xac) {
   FUNC_3(VAR_2, 0x402ca8, 0x00000802);
  } else {
   FUNC_3(VAR_2, 0x402cc0, 0x00000000);
   FUNC_3(VAR_2, 0x402ca8, 0x00000002);
  }

  break;
 }


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  FUNC_3(VAR_2, 0x402c20 + (VAR_5 * 0x10), 0x00000000);
  FUNC_3(VAR_2, 0x402c24 + (VAR_5 * 0x10), 0x00000000);
  FUNC_3(VAR_2, 0x402c28 + (VAR_5 * 0x10), 0x00000000);
  FUNC_3(VAR_2, 0x402c2c + (VAR_5 * 0x10), 0x00000000);
 }

 return 0;
}
