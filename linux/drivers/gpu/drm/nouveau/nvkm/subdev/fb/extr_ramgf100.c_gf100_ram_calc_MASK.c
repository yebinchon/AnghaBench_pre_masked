
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_ram {int dummy; } ;
struct nvkm_device {struct nvkm_bios* bios; struct nvkm_clk* clk; } ;
struct nvkm_clk {int dummy; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ramcfg {int dummy; } ;
struct gf100_ramfuc {int dummy; } ;
struct TYPE_6__ {int refclk; } ;
struct TYPE_4__ {TYPE_2__* fb; } ;
struct gf100_ram {TYPE_3__ mempll; TYPE_3__ refpll; TYPE_1__ base; struct gf100_ramfuc fuc; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gf100_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (struct gf100_ramfuc*,int) ;
 int FUNC_2 (struct nvkm_subdev*,TYPE_3__*,int,int*,int *,int*,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct nvkm_subdev*) ;
 int FUNC_6 (struct nvkm_bios*,int,int*,int*,int*,int*,struct nvbios_ramcfg*) ;
 int FUNC_7 (struct nvkm_bios*,int) ;
 int FUNC_8 (struct nvkm_bios*,int,int*,int*,int*,int*) ;
 int FUNC_9 (struct nvkm_clk*,int ) ;
 int FUNC_10 (struct nvkm_subdev*,char*) ;
 int FUNC_11 (struct gf100_ramfuc*,TYPE_2__*) ;
 int FUNC_12 (struct gf100_ramfuc*,int,int,int) ;
 int FUNC_13 (struct gf100_ramfuc*,int) ;
 int FUNC_14 (struct gf100_ramfuc*,int) ;
 int FUNC_15 (struct gf100_ramfuc*,int) ;
 int FUNC_16 (struct gf100_ramfuc*,int,int,int,int) ;
 int FUNC_17 (struct gf100_ramfuc*,int,int) ;

int
FUNC_18(struct nvkm_ram *VAR_4, u32 VAR_5)
{
 struct gf100_ram *VAR_6 = FUNC_0(VAR_4);
 struct gf100_ramfuc *VAR_7 = &VAR_6->fuc;
 struct nvkm_subdev *VAR_8 = &VAR_6->base.fb->subdev;
 struct nvkm_device *VAR_9 = VAR_8->device;
 struct nvkm_clk *VAR_10 = VAR_9->clk;
 struct nvkm_bios *VAR_11 = VAR_9->bios;
 struct nvbios_ramcfg VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16;
 struct {
  u32 data;
  u8 size;
 } VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28;


 VAR_17.data = FUNC_6(VAR_11, VAR_5 / 1000, &VAR_13, &VAR_17.size,
          &VAR_14, &VAR_18.size, &VAR_12);
 if (!VAR_17.data || VAR_13 != 0x10 || VAR_17.size < 0x0e) {
  FUNC_10(VAR_8, "invalid/missing rammap entry\n");
  return -VAR_0;
 }


 VAR_16 = FUNC_5(VAR_8);
 if (VAR_16 >= VAR_14) {
  FUNC_10(VAR_8, "invalid ramcfg strap\n");
  return -VAR_0;
 }

 VAR_18.data = VAR_17.data + VAR_17.size + (VAR_16 * VAR_18.size);
 if (!VAR_18.data || VAR_13 != 0x10 || VAR_18.size < 0x0e) {
  FUNC_10(VAR_8, "invalid/missing ramcfg entry\n");
  return -VAR_0;
 }


 VAR_16 = FUNC_7(VAR_11, VAR_18.data + 0x01);
 if (VAR_16 != 0xff) {
  VAR_19.data = FUNC_8(VAR_11, VAR_16, &VAR_13, &VAR_19.size,
           &VAR_14, &VAR_15);
  if (!VAR_19.data || VAR_13 != 0x10 || VAR_19.size < 0x19) {
   FUNC_10(VAR_8, "invalid/missing timing entry\n");
   return -VAR_0;
  }
 } else {
  VAR_19.data = 0;
 }

 VAR_28 = FUNC_11(VAR_7, VAR_6->base.fb);
 if (VAR_28)
  return VAR_28;


 VAR_23 = !!(FUNC_15(VAR_7, 0x1373f0) & 0x00000002);


 if (!(FUNC_15(VAR_7, 0x137300) & 0x00000100))
  VAR_20 = FUNC_9(VAR_10, VAR_2);
 else
  VAR_20 = FUNC_9(VAR_10, VAR_3);
 VAR_21 = FUNC_3(FUNC_4((VAR_20 * 2) / VAR_5, (u32)65), (u32)2) - 2;
 VAR_22 = (VAR_20 * 2) / (VAR_21 + 2);
 VAR_24 = VAR_5 != VAR_22;

 FUNC_12(VAR_7, 0x137360, 0x00000002, 0x00000000);

 if ((FUNC_15(VAR_7, 0x132000) & 0x00000002) || 0 ) {
  FUNC_14(VAR_7, 0x132000);
  FUNC_12(VAR_7, 0x132000, 0x00000002, 0x00000002);
  FUNC_12(VAR_7, 0x132000, 0x00000002, 0x00000000);
 }

 if (VAR_24 == 1) {
  FUNC_14(VAR_7, 0x10fe20);
  FUNC_12(VAR_7, 0x10fe20, 0x00000002, 0x00000002);
  FUNC_12(VAR_7, 0x10fe20, 0x00000002, 0x00000000);
 }


 FUNC_17(VAR_7, 0x132100, 0x00000001);

 if (VAR_24 == 1 && VAR_23 == 0) {

  VAR_28 = FUNC_2(VAR_8, &VAR_6->refpll, VAR_6->mempll.refclk,
         &VAR_25, ((void*)0), &VAR_26, &VAR_27);
  if (VAR_28 <= 0) {
   FUNC_10(VAR_8, "unable to calc refpll\n");
   return VAR_28 ? VAR_28 : -VAR_1;
  }

  FUNC_17(VAR_7, 0x10fe20, 0x20010000);
  FUNC_17(VAR_7, 0x137320, 0x00000003);
  FUNC_17(VAR_7, 0x137330, 0x81200006);
  FUNC_17(VAR_7, 0x10fe24, (VAR_27 << 16) | (VAR_25 << 8) | VAR_26);
  FUNC_17(VAR_7, 0x10fe20, 0x20010001);
  FUNC_16(VAR_7, 0x137390, 0x00020000, 0x00020000, 64000);


  VAR_28 = FUNC_2(VAR_8, &VAR_6->mempll, VAR_5,
         &VAR_25, ((void*)0), &VAR_26, &VAR_27);
  if (VAR_28 <= 0) {
   FUNC_10(VAR_8, "unable to calc refpll\n");
   return VAR_28 ? VAR_28 : -VAR_1;
  }

  FUNC_17(VAR_7, 0x10fe20, 0x20010005);
  FUNC_17(VAR_7, 0x132004, (VAR_27 << 16) | (VAR_25 << 8) | VAR_26);
  FUNC_17(VAR_7, 0x132000, 0x18010101);
  FUNC_16(VAR_7, 0x137390, 0x00000002, 0x00000002, 64000);
 } else
 if (VAR_24 == 0) {
  FUNC_17(VAR_7, 0x137300, 0x00000003);
 }

 if (VAR_23 == 0) {
  FUNC_14(VAR_7, 0x10fb04);
  FUNC_12(VAR_7, 0x10fb04, 0x0000ffff, 0x00000000);
  FUNC_14(VAR_7, 0x10fb08);
  FUNC_12(VAR_7, 0x10fb08, 0x0000ffff, 0x00000000);
  FUNC_17(VAR_7, 0x10f988, 0x2004ff00);
  FUNC_17(VAR_7, 0x10f98c, 0x003fc040);
  FUNC_17(VAR_7, 0x10f990, 0x20012001);
  FUNC_17(VAR_7, 0x10f998, 0x00011a00);
  FUNC_17(VAR_7, 0x13d8f4, 0x00000000);
 } else {
  FUNC_17(VAR_7, 0x10f988, 0x20010000);
  FUNC_17(VAR_7, 0x10f98c, 0x00000000);
  FUNC_17(VAR_7, 0x10f990, 0x20012001);
  FUNC_17(VAR_7, 0x10f998, 0x00010a00);
 }

 if (VAR_23 == 0) {

 }


 FUNC_17(VAR_7, 0x100b0c, 0x00080012);


 FUNC_17(VAR_7, 0x611200, 0x00003300);



 FUNC_12(VAR_7, 0x10f200, 0x00000800, 0x00000000);
 FUNC_17(VAR_7, 0x10f210, 0x00000000);
 FUNC_13(VAR_7, 1000);
 if (VAR_24 == 0)
  FUNC_1(VAR_7, 0x000c1001);
 FUNC_17(VAR_7, 0x10f310, 0x00000001);
 FUNC_13(VAR_7, 1000);
 FUNC_17(VAR_7, 0x10f090, 0x00000061);
 FUNC_17(VAR_7, 0x10f090, 0xc000007f);
 FUNC_13(VAR_7, 1000);

 if (VAR_23 == 0) {
  FUNC_17(VAR_7, 0x10f824, 0x00007fd4);
 } else {
  FUNC_17(VAR_7, 0x1373ec, 0x00020404);
 }

 if (VAR_24 == 0) {
  FUNC_12(VAR_7, 0x10f808, 0x00080000, 0x00000000);
  FUNC_12(VAR_7, 0x10f200, 0x00008000, 0x00008000);
  FUNC_17(VAR_7, 0x10f830, 0x41500010);
  FUNC_12(VAR_7, 0x10f830, 0x01000000, 0x00000000);
  FUNC_12(VAR_7, 0x132100, 0x00000100, 0x00000100);
  FUNC_17(VAR_7, 0x10f050, 0xff000090);
  FUNC_17(VAR_7, 0x1373ec, 0x00020f0f);
  FUNC_17(VAR_7, 0x1373f0, 0x00000003);
  FUNC_17(VAR_7, 0x137310, 0x81201616);
  FUNC_17(VAR_7, 0x132100, 0x00000001);

  FUNC_17(VAR_7, 0x10f830, 0x00300017);
  FUNC_17(VAR_7, 0x1373f0, 0x00000001);
  FUNC_17(VAR_7, 0x10f824, 0x00007e77);
  FUNC_17(VAR_7, 0x132000, 0x18030001);
  FUNC_17(VAR_7, 0x10f090, 0x4000007e);
  FUNC_13(VAR_7, 2000);
  FUNC_17(VAR_7, 0x10f314, 0x00000001);
  FUNC_17(VAR_7, 0x10f210, 0x80000000);
  FUNC_17(VAR_7, 0x10f338, 0x00300220);
  FUNC_17(VAR_7, 0x10f300, 0x0000011d);
  FUNC_13(VAR_7, 1000);
  FUNC_17(VAR_7, 0x10f290, 0x02060505);
  FUNC_17(VAR_7, 0x10f294, 0x34208288);
  FUNC_17(VAR_7, 0x10f298, 0x44050411);
  FUNC_17(VAR_7, 0x10f29c, 0x0000114c);
  FUNC_17(VAR_7, 0x10f2a0, 0x42e10069);
  FUNC_17(VAR_7, 0x10f614, 0x40044f77);
  FUNC_17(VAR_7, 0x10f610, 0x40044f77);
  FUNC_17(VAR_7, 0x10f344, 0x00600009);
  FUNC_13(VAR_7, 1000);
  FUNC_17(VAR_7, 0x10f348, 0x00700008);
  FUNC_17(VAR_7, 0x61c140, 0x19240000);
  FUNC_17(VAR_7, 0x10f830, 0x00300017);
  FUNC_1(VAR_7, 0x80021001);
  FUNC_1(VAR_7, 0x80081001);
  FUNC_17(VAR_7, 0x10f340, 0x00500004);
  FUNC_13(VAR_7, 1000);
  FUNC_17(VAR_7, 0x10f830, 0x01300017);
  FUNC_17(VAR_7, 0x10f830, 0x00300017);


  FUNC_17(VAR_7, 0x100b0c, 0x00080028);
  FUNC_17(VAR_7, 0x611200, 0x00003330);
 } else {
  FUNC_17(VAR_7, 0x10f800, 0x00001800);
  FUNC_17(VAR_7, 0x13d8f4, 0x00000000);
  FUNC_17(VAR_7, 0x1373ec, 0x00020404);
  FUNC_17(VAR_7, 0x1373f0, 0x00000003);
  FUNC_17(VAR_7, 0x10f830, 0x40700010);
  FUNC_17(VAR_7, 0x10f830, 0x40500010);
  FUNC_17(VAR_7, 0x13d8f4, 0x00000000);
  FUNC_17(VAR_7, 0x1373f8, 0x00000000);
  FUNC_17(VAR_7, 0x132100, 0x00000101);
  FUNC_17(VAR_7, 0x137310, 0x89201616);
  FUNC_17(VAR_7, 0x10f050, 0xff000090);
  FUNC_17(VAR_7, 0x1373ec, 0x00030404);
  FUNC_17(VAR_7, 0x1373f0, 0x00000002);

  FUNC_17(VAR_7, 0x132100, 0x00000001);
  FUNC_17(VAR_7, 0x1373f8, 0x00002000);
  FUNC_13(VAR_7, 2000);
  FUNC_17(VAR_7, 0x10f808, 0x7aaa0050);
  FUNC_17(VAR_7, 0x10f830, 0x00500010);
  FUNC_17(VAR_7, 0x10f200, 0x00ce1000);
  FUNC_17(VAR_7, 0x10f090, 0x4000007e);
  FUNC_13(VAR_7, 2000);
  FUNC_17(VAR_7, 0x10f314, 0x00000001);
  FUNC_17(VAR_7, 0x10f210, 0x80000000);
  FUNC_17(VAR_7, 0x10f338, 0x00300200);
  FUNC_17(VAR_7, 0x10f300, 0x0000084d);
  FUNC_13(VAR_7, 1000);
  FUNC_17(VAR_7, 0x10f290, 0x0b343825);
  FUNC_17(VAR_7, 0x10f294, 0x3483028e);
  FUNC_17(VAR_7, 0x10f298, 0x440c0600);
  FUNC_17(VAR_7, 0x10f29c, 0x0000214c);
  FUNC_17(VAR_7, 0x10f2a0, 0x42e20069);
  FUNC_17(VAR_7, 0x10f200, 0x00ce0000);
  FUNC_17(VAR_7, 0x10f614, 0x60044e77);
  FUNC_17(VAR_7, 0x10f610, 0x60044e77);
  FUNC_17(VAR_7, 0x10f340, 0x00500000);
  FUNC_13(VAR_7, 1000);
  FUNC_17(VAR_7, 0x10f344, 0x00600228);
  FUNC_13(VAR_7, 1000);
  FUNC_17(VAR_7, 0x10f348, 0x00700000);
  FUNC_17(VAR_7, 0x13d8f4, 0x00000000);
  FUNC_17(VAR_7, 0x61c140, 0x09a40000);

  FUNC_1(VAR_7, 0x800e1008);

  FUNC_13(VAR_7, 1000);
  FUNC_17(VAR_7, 0x10f800, 0x00001804);


  FUNC_17(VAR_7, 0x13d8f4, 0x00000000);
  FUNC_17(VAR_7, 0x100b0c, 0x00080028);
  FUNC_17(VAR_7, 0x611200, 0x00003330);
  FUNC_13(VAR_7, 100000);
  FUNC_17(VAR_7, 0x10f9b0, 0x05313f41);
  FUNC_17(VAR_7, 0x10f9b4, 0x00002f50);

  FUNC_1(VAR_7, 0x010c1001);
 }

 FUNC_12(VAR_7, 0x10f200, 0x00000800, 0x00000800);


 if (VAR_24 == 0)
  FUNC_12(VAR_7, 0x132000, 0x00000001, 0x00000000);

 return 0;
}
