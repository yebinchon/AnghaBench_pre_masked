
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nvkm_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 int VAR_2, VAR_3 = 2;
 switch (VAR_1->chipset) {
  case 0x98:
  case 0xaa:
   VAR_3 = 1;
   break;
  case 0x50:
  case 0x84:
  case 0x86:
  case 0x92:
  case 0x94:
  case 0x96:
  case 0xa8:
  case 0xac:
   VAR_3 = 2;
   break;
  case 0xa0:
  case 0xa3:
  case 0xa5:
  case 0xaf:
   VAR_3 = 3;
   break;
 }
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  FUNC_2(VAR_0, 1, 0);
  FUNC_2(VAR_0, 1, 0x80);
  FUNC_2(VAR_0, 1, 0x80007004);
  FUNC_2(VAR_0, 1, 0x04000400);
  if (VAR_1->chipset >= 0xa0)
   FUNC_2(VAR_0, 1, 0xc0);
  FUNC_2(VAR_0, 1, 0x1000);
  FUNC_2(VAR_0, 1, 0);
  FUNC_2(VAR_0, 1, 0);
  if (VAR_1->chipset == 0x86 || VAR_1->chipset == 0x98 || VAR_1->chipset == 0xa8 || FUNC_1(VAR_1->chipset)) {
   FUNC_2(VAR_0, 1, 0xe00);
   FUNC_2(VAR_0, 1, 0x1e00);
  }
  FUNC_2(VAR_0, 1, 1);
  FUNC_2(VAR_0, 1, 0);
  FUNC_2(VAR_0, 1, 0);
  if (VAR_1->chipset == 0x50)
   FUNC_2(VAR_0, 2, 0x1000);
  FUNC_2(VAR_0, 1, 1);
  FUNC_2(VAR_0, 1, 0);
  FUNC_2(VAR_0, 1, 4);
  FUNC_2(VAR_0, 1, 2);
  if (FUNC_1(VAR_1->chipset))
   FUNC_2(VAR_0, 0xb, 0);
  else if (VAR_1->chipset >= 0xa0)
   FUNC_2(VAR_0, 0xc, 0);
  else
   FUNC_2(VAR_0, 0xa, 0);
 }
 FUNC_2(VAR_0, 1, 0x08100c12);
 FUNC_2(VAR_0, 1, 0);
 if (VAR_1->chipset >= 0xa0) {
  FUNC_2(VAR_0, 1, 0x1fe21);
 }
 FUNC_2(VAR_0, 3, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 4, 0xffff);
 FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 1, 0x10001);
 FUNC_2(VAR_0, 1, 0x10001);
 FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0x1fe21);
 FUNC_2(VAR_0, 1, 0);
 if (FUNC_0(VAR_1->chipset))
  FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0x08100c12);
 FUNC_2(VAR_0, 1, 4);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 2);
 FUNC_2(VAR_0, 1, 0x11);
 FUNC_2(VAR_0, 7, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0xfac6881);
 FUNC_2(VAR_0, 1, 0);
 if (FUNC_0(VAR_1->chipset))
  FUNC_2(VAR_0, 1, 3);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 4);
 FUNC_2(VAR_0, 8, 0);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 2);
 FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 1, 2);
 FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 1, 1);
 if (FUNC_0(VAR_1->chipset)) {
  FUNC_2(VAR_0, 1, 0);
  FUNC_2(VAR_0, 8, 2);
  FUNC_2(VAR_0, 8, 1);
  FUNC_2(VAR_0, 8, 1);
  FUNC_2(VAR_0, 8, 2);
  FUNC_2(VAR_0, 8, 1);
  FUNC_2(VAR_0, 8, 1);
  FUNC_2(VAR_0, 8, 1);
  FUNC_2(VAR_0, 1, 0);
  FUNC_2(VAR_0, 1, 0);
 }
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 4);

 if (VAR_1->chipset == 0x50)
  FUNC_2(VAR_0, 0x3a0, 0);
 else if (VAR_1->chipset < 0x94)
  FUNC_2(VAR_0, 0x3a2, 0);
 else if (VAR_1->chipset == 0x98 || VAR_1->chipset == 0xaa)
  FUNC_2(VAR_0, 0x39f, 0);
 else
  FUNC_2(VAR_0, 0x3a3, 0);
 FUNC_2(VAR_0, 1, 0x11);
 FUNC_2(VAR_0, 1, 0);
 FUNC_2(VAR_0, 1, 1);
 FUNC_2(VAR_0, 0x2d, 0);
}
