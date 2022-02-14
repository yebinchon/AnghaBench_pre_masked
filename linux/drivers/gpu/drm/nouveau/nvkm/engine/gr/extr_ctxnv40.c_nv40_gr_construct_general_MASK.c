
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_grctx*,int,int) ;
 int FUNC_1 (struct nvkm_grctx*,int,int) ;
 scalar_t__ FUNC_2 (struct nvkm_device*) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 int VAR_2;

 FUNC_0(VAR_0, 0x4000a4, 1);
 FUNC_1(VAR_0, 0x4000a4, 0x00000008);
 FUNC_0(VAR_0, 0x400144, 58);
 FUNC_1(VAR_0, 0x400144, 0x00000001);
 FUNC_0(VAR_0, 0x400314, 1);
 FUNC_1(VAR_0, 0x400314, 0x00000000);
 FUNC_0(VAR_0, 0x400400, 10);
 FUNC_0(VAR_0, 0x400480, 10);
 FUNC_0(VAR_0, 0x400500, 19);
 FUNC_1(VAR_0, 0x400514, 0x00040000);
 FUNC_1(VAR_0, 0x400524, 0x55555555);
 FUNC_1(VAR_0, 0x400528, 0x55555555);
 FUNC_1(VAR_0, 0x40052c, 0x55555555);
 FUNC_1(VAR_0, 0x400530, 0x55555555);
 FUNC_0(VAR_0, 0x400560, 6);
 FUNC_1(VAR_0, 0x400568, 0x0000ffff);
 FUNC_1(VAR_0, 0x40056c, 0x0000ffff);
 FUNC_0(VAR_0, 0x40057c, 5);
 FUNC_0(VAR_0, 0x400710, 3);
 FUNC_1(VAR_0, 0x400710, 0x20010001);
 FUNC_1(VAR_0, 0x400714, 0x0f73ef00);
 FUNC_0(VAR_0, 0x400724, 1);
 FUNC_1(VAR_0, 0x400724, 0x02008821);
 FUNC_0(VAR_0, 0x400770, 3);
 if (VAR_1->chipset == 0x40) {
  FUNC_0(VAR_0, 0x400814, 4);
  FUNC_0(VAR_0, 0x400828, 5);
  FUNC_0(VAR_0, 0x400840, 5);
  FUNC_1(VAR_0, 0x400850, 0x00000040);
  FUNC_0(VAR_0, 0x400858, 4);
  FUNC_1(VAR_0, 0x400858, 0x00000040);
  FUNC_1(VAR_0, 0x40085c, 0x00000040);
  FUNC_1(VAR_0, 0x400864, 0x80000000);
  FUNC_0(VAR_0, 0x40086c, 9);
  FUNC_1(VAR_0, 0x40086c, 0x80000000);
  FUNC_1(VAR_0, 0x400870, 0x80000000);
  FUNC_1(VAR_0, 0x400874, 0x80000000);
  FUNC_1(VAR_0, 0x400878, 0x80000000);
  FUNC_1(VAR_0, 0x400888, 0x00000040);
  FUNC_1(VAR_0, 0x40088c, 0x80000000);
  FUNC_0(VAR_0, 0x4009c0, 8);
  FUNC_1(VAR_0, 0x4009cc, 0x80000000);
  FUNC_1(VAR_0, 0x4009dc, 0x80000000);
 } else {
  FUNC_0(VAR_0, 0x400840, 20);
  if (FUNC_2(VAR_0->device)) {
   for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
    FUNC_1(VAR_0, 0x400860 + (VAR_2 * 4), 0x00000001);
  }
  FUNC_1(VAR_0, 0x400880, 0x00000040);
  FUNC_1(VAR_0, 0x400884, 0x00000040);
  FUNC_1(VAR_0, 0x400888, 0x00000040);
  FUNC_0(VAR_0, 0x400894, 11);
  FUNC_1(VAR_0, 0x400894, 0x00000040);
  if (!FUNC_2(VAR_0->device)) {
   for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
    FUNC_1(VAR_0, 0x4008a0 + (VAR_2 * 4), 0x80000000);
  }
  FUNC_0(VAR_0, 0x4008e0, 2);
  FUNC_0(VAR_0, 0x4008f8, 2);
  if (VAR_1->chipset == 0x4c ||
      (VAR_1->chipset & 0xf0) == 0x60)
   FUNC_0(VAR_0, 0x4009f8, 1);
 }
 FUNC_0(VAR_0, 0x400a00, 73);
 FUNC_1(VAR_0, 0x400b0c, 0x0b0b0b0c);
 FUNC_0(VAR_0, 0x401000, 4);
 FUNC_0(VAR_0, 0x405004, 1);
 switch (VAR_1->chipset) {
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_0(VAR_0, 0x403448, 1);
  FUNC_1(VAR_0, 0x403448, 0x00001010);
  break;
 default:
  FUNC_0(VAR_0, 0x403440, 1);
  switch (VAR_1->chipset) {
  case 0x40:
   FUNC_1(VAR_0, 0x403440, 0x00000010);
   break;
  case 0x44:
  case 0x46:
  case 0x4a:
   FUNC_1(VAR_0, 0x403440, 0x00003010);
   break;
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x4c:
  case 0x4e:
  case 0x67:
  default:
   FUNC_1(VAR_0, 0x403440, 0x00001010);
   break;
  }
  break;
 }
}
