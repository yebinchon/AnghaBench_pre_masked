
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 int VAR_2;
 switch (VAR_1->chipset) {
 case 0x50:
  VAR_2 = 0x1000;
  break;
 case 0x86:
 case 0x98:
 case 0xa8:
 case 0xaa:
 case 0xac:
 case 0xaf:
  VAR_2 = 0x1e00;
  break;
 default:
  VAR_2 = 0;
 }
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 if (FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 0x1f, 0);
 else if (VAR_1->chipset >= 0xa0)
  FUNC_1(VAR_0, 0x0f, 0);
 else
  FUNC_1(VAR_0, 0x10, 0);
 FUNC_1(VAR_0, 2, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 4);
 if (VAR_1->chipset >= 0xa0)
  FUNC_1(VAR_0, 1, 0x03020100);
 else
  FUNC_1(VAR_0, 1, 0x00608080);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 2, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0x80);
 if (VAR_2)
  FUNC_1(VAR_0, 1, VAR_2);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 0x1f, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0x80);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0x03020100);
 FUNC_1(VAR_0, 1, 3);
 if (VAR_2)
  FUNC_1(VAR_0, 1, VAR_2);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 3);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 if (VAR_1->chipset == 0x94 || VAR_1->chipset == 0x96)
  FUNC_1(VAR_0, 0x1020, 0);
 else if (VAR_1->chipset < 0xa0)
  FUNC_1(VAR_0, 0xa20, 0);
 else if (!FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 0x210, 0);
 else
  FUNC_1(VAR_0, 0x410, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 3);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
}
