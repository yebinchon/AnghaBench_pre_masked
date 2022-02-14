
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_grctx*,int,int) ;
 int FUNC_1 (struct nvkm_grctx*,int,int) ;
 int FUNC_2 (struct nvkm_device*) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 int VAR_2;

 FUNC_0(VAR_0, 0x402000, 1);
 FUNC_0(VAR_0, 0x402404, VAR_1->chipset == 0x40 ? 1 : 2);
 switch (VAR_1->chipset) {
 case 0x40:
  FUNC_1(VAR_0, 0x402404, 0x00000001);
  break;
 case 0x4c:
 case 0x4e:
 case 0x67:
  FUNC_1(VAR_0, 0x402404, 0x00000020);
  break;
 case 0x46:
 case 0x49:
 case 0x4b:
  FUNC_1(VAR_0, 0x402404, 0x00000421);
  break;
 default:
  FUNC_1(VAR_0, 0x402404, 0x00000021);
 }
 if (VAR_1->chipset != 0x40)
  FUNC_1(VAR_0, 0x402408, 0x030c30c3);
 switch (VAR_1->chipset) {
 case 0x44:
 case 0x46:
 case 0x4a:
 case 0x4c:
 case 0x4e:
 case 0x67:
  FUNC_0(VAR_0, 0x402440, 1);
  FUNC_1(VAR_0, 0x402440, 0x00011001);
  break;
 default:
  break;
 }
 FUNC_0(VAR_0, 0x402480, VAR_1->chipset == 0x40 ? 8 : 9);
 FUNC_1(VAR_0, 0x402488, 0x3e020200);
 FUNC_1(VAR_0, 0x40248c, 0x00ffffff);
 switch (VAR_1->chipset) {
 case 0x40:
  FUNC_1(VAR_0, 0x402490, 0x60103f00);
  break;
 case 0x47:
  FUNC_1(VAR_0, 0x402490, 0x40103f00);
  break;
 case 0x41:
 case 0x42:
 case 0x49:
 case 0x4b:
  FUNC_1(VAR_0, 0x402490, 0x20103f00);
  break;
 default:
  FUNC_1(VAR_0, 0x402490, 0x0c103f00);
  break;
 }
 FUNC_1(VAR_0, 0x40249c, VAR_1->chipset <= 0x43 ?
         0x00020000 : 0x00040000);
 FUNC_0(VAR_0, 0x402500, 31);
 FUNC_1(VAR_0, 0x402530, 0x00008100);
 if (VAR_1->chipset == 0x40)
  FUNC_0(VAR_0, 0x40257c, 6);
 FUNC_0(VAR_0, 0x402594, 16);
 FUNC_0(VAR_0, 0x402800, 17);
 FUNC_1(VAR_0, 0x402800, 0x00000001);
 switch (VAR_1->chipset) {
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_0(VAR_0, 0x402864, 1);
  FUNC_1(VAR_0, 0x402864, 0x00001001);
  FUNC_0(VAR_0, 0x402870, 3);
  FUNC_1(VAR_0, 0x402878, 0x00000003);
  if (VAR_1->chipset != 0x47) {
   FUNC_0(VAR_0, 0x402900, 1);
   FUNC_0(VAR_0, 0x402940, 1);
   FUNC_0(VAR_0, 0x402980, 1);
   FUNC_0(VAR_0, 0x4029c0, 1);
   FUNC_0(VAR_0, 0x402a00, 1);
   FUNC_0(VAR_0, 0x402a40, 1);
   FUNC_0(VAR_0, 0x402a80, 1);
   FUNC_0(VAR_0, 0x402ac0, 1);
  }
  break;
 case 0x40:
  FUNC_0(VAR_0, 0x402844, 1);
  FUNC_1(VAR_0, 0x402844, 0x00000001);
  FUNC_0(VAR_0, 0x402850, 1);
  break;
 default:
  FUNC_0(VAR_0, 0x402844, 1);
  FUNC_1(VAR_0, 0x402844, 0x00001001);
  FUNC_0(VAR_0, 0x402850, 2);
  FUNC_1(VAR_0, 0x402854, 0x00000003);
  break;
 }

 FUNC_0(VAR_0, 0x402c00, 4);
 FUNC_1(VAR_0, 0x402c00, VAR_1->chipset == 0x40 ?
         0x80800001 : 0x00888001);
 switch (VAR_1->chipset) {
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_0(VAR_0, 0x402c20, 40);
  for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
   FUNC_1(VAR_0, 0x402c40 + (VAR_2 * 4), 0xffffffff);
  FUNC_0(VAR_0, 0x4030b8, 13);
  FUNC_1(VAR_0, 0x4030dc, 0x00000005);
  FUNC_1(VAR_0, 0x4030e8, 0x0000ffff);
  break;
 default:
  FUNC_0(VAR_0, 0x402c10, 4);
  if (VAR_1->chipset == 0x40)
   FUNC_0(VAR_0, 0x402c20, 36);
  else
  if (VAR_1->chipset <= 0x42)
   FUNC_0(VAR_0, 0x402c20, 24);
  else
  if (VAR_1->chipset <= 0x4a)
   FUNC_0(VAR_0, 0x402c20, 16);
  else
   FUNC_0(VAR_0, 0x402c20, 8);
  FUNC_0(VAR_0, 0x402cb0, VAR_1->chipset == 0x40 ? 12 : 13);
  FUNC_1(VAR_0, 0x402cd4, 0x00000005);
  if (VAR_1->chipset != 0x40)
   FUNC_1(VAR_0, 0x402ce0, 0x0000ffff);
  break;
 }

 FUNC_0(VAR_0, 0x403400, VAR_1->chipset == 0x40 ? 4 : 3);
 FUNC_0(VAR_0, 0x403410, VAR_1->chipset == 0x40 ? 4 : 3);
 FUNC_0(VAR_0, 0x403420, FUNC_2(VAR_0->device));
 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0->device); VAR_2++)
  FUNC_1(VAR_0, 0x403420 + (VAR_2 * 4), 0x00005555);

 if (VAR_1->chipset != 0x40) {
  FUNC_0(VAR_0, 0x403600, 1);
  FUNC_1(VAR_0, 0x403600, 0x00000001);
 }
 FUNC_0(VAR_0, 0x403800, 1);

 FUNC_0(VAR_0, 0x403c18, 1);
 FUNC_1(VAR_0, 0x403c18, 0x00000001);
 switch (VAR_1->chipset) {
 case 0x46:
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_0(VAR_0, 0x405018, 1);
  FUNC_1(VAR_0, 0x405018, 0x08e00001);
  FUNC_0(VAR_0, 0x405c24, 1);
  FUNC_1(VAR_0, 0x405c24, 0x000e3000);
  break;
 }
 if (VAR_1->chipset != 0x4e)
  FUNC_0(VAR_0, 0x405800, 11);
 FUNC_0(VAR_0, 0x407000, 1);
}
