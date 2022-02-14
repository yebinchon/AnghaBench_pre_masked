
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; TYPE_2__* fb; } ;
struct TYPE_4__ {TYPE_1__* ram; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct nvkm_grctx*,int,int) ;
 int FUNC_3 (struct nvkm_grctx*,int,int) ;
 int FUNC_4 (struct nvkm_grctx*) ;
 int FUNC_5 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_grctx *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->device;
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 u32 VAR_7 = FUNC_5(VAR_2, 0x1540);


 FUNC_2(VAR_1, 0x400808, 7);
 FUNC_3(VAR_1, 0x400814, 0x00000030);
 FUNC_2(VAR_1, 0x400834, 0x32);
 if (VAR_2->chipset == 0x50) {
  FUNC_3(VAR_1, 0x400834, 0xff400040);
  FUNC_3(VAR_1, 0x400838, 0xfff00080);
  FUNC_3(VAR_1, 0x40083c, 0xfff70090);
  FUNC_3(VAR_1, 0x400840, 0xffe806a8);
 }
 FUNC_3(VAR_1, 0x400844, 0x00000002);
 if (FUNC_0(VAR_2->chipset))
  FUNC_3(VAR_1, 0x400894, 0x00001000);
 FUNC_3(VAR_1, 0x4008e8, 0x00000003);
 FUNC_3(VAR_1, 0x4008ec, 0x00001000);
 if (VAR_2->chipset == 0x50)
  FUNC_2(VAR_1, 0x400908, 0xb);
 else if (VAR_2->chipset < 0xa0)
  FUNC_2(VAR_1, 0x400908, 0xc);
 else
  FUNC_2(VAR_1, 0x400908, 0xe);

 if (VAR_2->chipset >= 0xa0)
  FUNC_2(VAR_1, 0x400b00, 0x1);
 if (FUNC_0(VAR_2->chipset)) {
  FUNC_2(VAR_1, 0x400b10, 0x1);
  FUNC_3(VAR_1, 0x400b10, 0x0001629d);
  FUNC_2(VAR_1, 0x400b20, 0x1);
  FUNC_3(VAR_1, 0x400b20, 0x0001629d);
 }

 FUNC_4(VAR_1);


 FUNC_2(VAR_1, 0x400c08, 0x2);
 FUNC_3(VAR_1, 0x400c08, 0x0000fe0c);


 if (VAR_2->chipset < 0xa0) {
  FUNC_2(VAR_1, 0x401008, 0x4);
  FUNC_3(VAR_1, 0x401014, 0x00001000);
 } else if (!FUNC_0(VAR_2->chipset)) {
  FUNC_2(VAR_1, 0x401008, 0x5);
  FUNC_3(VAR_1, 0x401018, 0x00001000);
 } else {
  FUNC_2(VAR_1, 0x401008, 0x5);
  FUNC_3(VAR_1, 0x401018, 0x00004000);
 }


 FUNC_2(VAR_1, 0x401400, 0x8);
 FUNC_2(VAR_1, 0x401424, 0x3);
 if (VAR_2->chipset == 0x50)
  FUNC_3(VAR_1, 0x40142c, 0x0001fd87);
 else
  FUNC_3(VAR_1, 0x40142c, 0x00000187);
 FUNC_2(VAR_1, 0x401540, 0x5);
 FUNC_3(VAR_1, 0x401550, 0x00001018);


 FUNC_2(VAR_1, 0x401814, 0x1);
 FUNC_3(VAR_1, 0x401814, 0x000000ff);
 if (VAR_2->chipset == 0x50) {
  FUNC_2(VAR_1, 0x40181c, 0xe);
  FUNC_3(VAR_1, 0x401850, 0x00000004);
 } else if (VAR_2->chipset < 0xa0) {
  FUNC_2(VAR_1, 0x40181c, 0xf);
  FUNC_3(VAR_1, 0x401854, 0x00000004);
 } else {
  FUNC_2(VAR_1, 0x40181c, 0x13);
  FUNC_3(VAR_1, 0x401864, 0x00000004);
 }


 FUNC_2(VAR_1, 0x401c00, 0x1);
 switch (VAR_2->chipset) {
 case 0x50:
  FUNC_3(VAR_1, 0x401c00, 0x0001005f);
  break;
 case 0x84:
 case 0x86:
 case 0x94:
  FUNC_3(VAR_1, 0x401c00, 0x044d00df);
  break;
 case 0x92:
 case 0x96:
 case 0x98:
 case 0xa0:
 case 0xaa:
 case 0xac:
  FUNC_3(VAR_1, 0x401c00, 0x042500df);
  break;
 case 0xa3:
 case 0xa5:
 case 0xa8:
 case 0xaf:
  FUNC_3(VAR_1, 0x401c00, 0x142500df);
  break;
 }




 FUNC_2(VAR_1, 0x402400, 0x1);
 if (VAR_2->chipset == 0x50)
  FUNC_2(VAR_1, 0x402408, 0x1);
 else
  FUNC_2(VAR_1, 0x402408, 0x2);
 FUNC_3(VAR_1, 0x402408, 0x00000600);


 FUNC_2(VAR_1, 0x402800, 0x1);
 if (VAR_2->chipset == 0x50)
  FUNC_3(VAR_1, 0x402800, 0x00000006);


 FUNC_2(VAR_1, 0x402c08, 0x6);
 if (VAR_2->chipset != 0x50)
  FUNC_3(VAR_1, 0x402c14, 0x01000000);
 FUNC_3(VAR_1, 0x402c18, 0x000000ff);
 if (VAR_2->chipset == 0x50)
  FUNC_2(VAR_1, 0x402ca0, 0x1);
 else
  FUNC_2(VAR_1, 0x402ca0, 0x2);
 if (VAR_2->chipset < 0xa0)
  FUNC_3(VAR_1, 0x402ca0, 0x00000400);
 else if (!FUNC_0(VAR_2->chipset))
  FUNC_3(VAR_1, 0x402ca0, 0x00000800);
 else
  FUNC_3(VAR_1, 0x402ca0, 0x00000400);
 FUNC_2(VAR_1, 0x402cac, 0x4);


 FUNC_2(VAR_1, 0x403004, 0x1);
 FUNC_3(VAR_1, 0x403004, 0x00000001);


 if (VAR_2->chipset >= 0xa0) {
  FUNC_2(VAR_1, 0x403404, 0x1);
  FUNC_3(VAR_1, 0x403404, 0x00000001);
 }


 FUNC_2(VAR_1, 0x405000, 0x1);
 switch (VAR_2->chipset) {
 case 0x50:
  FUNC_3(VAR_1, 0x405000, 0x00300080);
  break;
 case 0x84:
 case 0xa0:
 case 0xa3:
 case 0xa5:
 case 0xa8:
 case 0xaa:
 case 0xac:
 case 0xaf:
  FUNC_3(VAR_1, 0x405000, 0x000e0080);
  break;
 case 0x86:
 case 0x92:
 case 0x94:
 case 0x96:
 case 0x98:
  FUNC_3(VAR_1, 0x405000, 0x00000080);
  break;
 }
 FUNC_2(VAR_1, 0x405014, 0x1);
 FUNC_3(VAR_1, 0x405014, 0x00000004);
 FUNC_2(VAR_1, 0x40501c, 0x1);
 FUNC_2(VAR_1, 0x405024, 0x1);
 FUNC_2(VAR_1, 0x40502c, 0x1);


 if (VAR_2->chipset == 0x50)
  FUNC_2(VAR_1, 0x4063e0, 0x1);


 if (VAR_2->chipset < 0x90) {
  FUNC_2(VAR_1, 0x406814, 0x2b);
  FUNC_3(VAR_1, 0x406818, 0x00000f80);
  FUNC_3(VAR_1, 0x406860, 0x007f0080);
  FUNC_3(VAR_1, 0x40689c, 0x007f0080);
 } else {
  FUNC_2(VAR_1, 0x406814, 0x4);
  if (VAR_2->chipset == 0x98)
   FUNC_3(VAR_1, 0x406818, 0x00000f80);
  else
   FUNC_3(VAR_1, 0x406818, 0x00001f80);
  if (FUNC_0(VAR_2->chipset))
   FUNC_3(VAR_1, 0x40681c, 0x00000030);
  FUNC_2(VAR_1, 0x406830, 0x3);
 }


 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_7 & (1<<(VAR_3+16))) {
   FUNC_2(VAR_1, 0x407000 + (VAR_3<<8), 3);
   if (VAR_2->chipset == 0x50)
    FUNC_3(VAR_1, 0x407000 + (VAR_3<<8), 0x1b74f820);
   else if (VAR_2->chipset != 0xa5)
    FUNC_3(VAR_1, 0x407000 + (VAR_3<<8), 0x3b74f821);
   else
    FUNC_3(VAR_1, 0x407000 + (VAR_3<<8), 0x7b74f821);
   FUNC_3(VAR_1, 0x407004 + (VAR_3<<8), 0x89058001);

   if (VAR_2->chipset == 0x50) {
    FUNC_2(VAR_1, 0x407010 + (VAR_3<<8), 1);
   } else if (VAR_2->chipset < 0xa0) {
    FUNC_2(VAR_1, 0x407010 + (VAR_3<<8), 2);
    FUNC_3(VAR_1, 0x407010 + (VAR_3<<8), 0x00001000);
    FUNC_3(VAR_1, 0x407014 + (VAR_3<<8), 0x0000001f);
   } else {
    FUNC_2(VAR_1, 0x407010 + (VAR_3<<8), 3);
    FUNC_3(VAR_1, 0x407010 + (VAR_3<<8), 0x00001000);
    if (VAR_2->chipset != 0xa5)
     FUNC_3(VAR_1, 0x407014 + (VAR_3<<8), 0x000000ff);
    else
     FUNC_3(VAR_1, 0x407014 + (VAR_3<<8), 0x000001ff);
   }

   FUNC_2(VAR_1, 0x407080 + (VAR_3<<8), 4);
   if (VAR_2->chipset != 0xa5)
    FUNC_3(VAR_1, 0x407080 + (VAR_3<<8), 0x027c10fa);
   else
    FUNC_3(VAR_1, 0x407080 + (VAR_3<<8), 0x827c10fa);
   if (VAR_2->chipset == 0x50)
    FUNC_3(VAR_1, 0x407084 + (VAR_3<<8), 0x000000c0);
   else
    FUNC_3(VAR_1, 0x407084 + (VAR_3<<8), 0x400000c0);
   FUNC_3(VAR_1, 0x407088 + (VAR_3<<8), 0xb7892080);

   if (VAR_2->chipset < 0xa0)
    FUNC_2(VAR_1, 0x407094 + (VAR_3<<8), 1);
   else if (!FUNC_0(VAR_2->chipset))
    FUNC_2(VAR_1, 0x407094 + (VAR_3<<8), 3);
   else {
    FUNC_2(VAR_1, 0x407094 + (VAR_3<<8), 4);
    FUNC_3(VAR_1, 0x4070a0 + (VAR_3<<8), 1);
   }
  }
 }

 FUNC_2(VAR_1, 0x407c00, 0x3);
 if (VAR_2->chipset < 0x90)
  FUNC_3(VAR_1, 0x407c00, 0x00010040);
 else if (VAR_2->chipset < 0xa0)
  FUNC_3(VAR_1, 0x407c00, 0x00390040);
 else
  FUNC_3(VAR_1, 0x407c00, 0x003d0040);
 FUNC_3(VAR_1, 0x407c08, 0x00000022);
 if (VAR_2->chipset >= 0xa0) {
  FUNC_2(VAR_1, 0x407c10, 0x3);
  FUNC_2(VAR_1, 0x407c20, 0x1);
  FUNC_2(VAR_1, 0x407c2c, 0x1);
 }

 if (VAR_2->chipset < 0xa0) {
  FUNC_2(VAR_1, 0x407d00, 0x9);
 } else {
  FUNC_2(VAR_1, 0x407d00, 0x15);
 }
 if (VAR_2->chipset == 0x98)
  FUNC_3(VAR_1, 0x407d08, 0x00380040);
 else {
  if (VAR_2->chipset < 0x90)
   FUNC_3(VAR_1, 0x407d08, 0x00010040);
  else if (VAR_2->chipset < 0xa0)
   FUNC_3(VAR_1, 0x407d08, 0x00390040);
  else {
   if (VAR_2->fb->ram->type != VAR_0)
    FUNC_3(VAR_1, 0x407d08, 0x003d0040);
   else
    FUNC_3(VAR_1, 0x407d08, 0x003c0040);
  }
  FUNC_3(VAR_1, 0x407d0c, 0x00000022);
 }


 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if (VAR_7 & (1<<VAR_3)) {
   if (VAR_2->chipset < 0xa0)
    VAR_6 = 0x408000 + (VAR_3<<12);
   else
    VAR_6 = 0x408000 + (VAR_3<<11);
   if (VAR_2->chipset < 0xa0)
    VAR_5 = VAR_6 + 0xc00;
   else
    VAR_5 = VAR_6 + 0x80;
   FUNC_2(VAR_1, VAR_5 + 0x00, 1);
   FUNC_3(VAR_1, VAR_5 + 0x00, 0x0000ff0a);
   FUNC_2(VAR_1, VAR_5 + 0x08, 1);


   for (VAR_4 = 0; VAR_4 < (VAR_2->chipset < 0xa0 ? 2 : 4); VAR_4++) {
    if (!(VAR_7 & (1 << (VAR_4+24)))) continue;
    if (VAR_2->chipset < 0xa0)
     VAR_5 = VAR_6 + 0x200 + (VAR_4<<7);
    else
     VAR_5 = VAR_6 + 0x100 + (VAR_4<<7);
    FUNC_2(VAR_1, VAR_5, 0x20);
    FUNC_3(VAR_1, VAR_5 + 0x00, 0x01800000);
    FUNC_3(VAR_1, VAR_5 + 0x04, 0x00160000);
    FUNC_3(VAR_1, VAR_5 + 0x08, 0x01800000);
    FUNC_3(VAR_1, VAR_5 + 0x18, 0x0003ffff);
    switch (VAR_2->chipset) {
    case 0x50:
     FUNC_3(VAR_1, VAR_5 + 0x1c, 0x00080000);
     break;
    case 0x84:
     FUNC_3(VAR_1, VAR_5 + 0x1c, 0x00880000);
     break;
    case 0x86:
     FUNC_3(VAR_1, VAR_5 + 0x1c, 0x018c0000);
     break;
    case 0x92:
    case 0x96:
    case 0x98:
     FUNC_3(VAR_1, VAR_5 + 0x1c, 0x118c0000);
     break;
    case 0x94:
     FUNC_3(VAR_1, VAR_5 + 0x1c, 0x10880000);
     break;
    case 0xa0:
    case 0xa5:
     FUNC_3(VAR_1, VAR_5 + 0x1c, 0x310c0000);
     break;
    case 0xa3:
    case 0xa8:
    case 0xaa:
    case 0xac:
    case 0xaf:
     FUNC_3(VAR_1, VAR_5 + 0x1c, 0x300c0000);
     break;
    }
    FUNC_3(VAR_1, VAR_5 + 0x40, 0x00010401);
    if (VAR_2->chipset == 0x50)
     FUNC_3(VAR_1, VAR_5 + 0x48, 0x00000040);
    else
     FUNC_3(VAR_1, VAR_5 + 0x48, 0x00000078);
    FUNC_3(VAR_1, VAR_5 + 0x50, 0x000000bf);
    FUNC_3(VAR_1, VAR_5 + 0x58, 0x00001210);
    if (VAR_2->chipset == 0x50)
     FUNC_3(VAR_1, VAR_5 + 0x5c, 0x00000080);
    else
     FUNC_3(VAR_1, VAR_5 + 0x5c, 0x08000080);
    if (VAR_2->chipset >= 0xa0)
     FUNC_3(VAR_1, VAR_5 + 0x68, 0x0000003e);
   }

   if (VAR_2->chipset < 0xa0)
    FUNC_2(VAR_1, VAR_6 + 0x300, 0x4);
   else
    FUNC_2(VAR_1, VAR_6 + 0x300, 0x5);
   if (VAR_2->chipset == 0x50)
    FUNC_3(VAR_1, VAR_6 + 0x304, 0x00007070);
   else if (VAR_2->chipset < 0xa0)
    FUNC_3(VAR_1, VAR_6 + 0x304, 0x00027070);
   else if (!FUNC_0(VAR_2->chipset))
    FUNC_3(VAR_1, VAR_6 + 0x304, 0x01127070);
   else
    FUNC_3(VAR_1, VAR_6 + 0x304, 0x05127070);

   if (VAR_2->chipset < 0xa0)
    FUNC_2(VAR_1, VAR_6 + 0x318, 1);
   else
    FUNC_2(VAR_1, VAR_6 + 0x320, 1);
   if (VAR_2->chipset == 0x50)
    FUNC_3(VAR_1, VAR_6 + 0x318, 0x0003ffff);
   else if (VAR_2->chipset < 0xa0)
    FUNC_3(VAR_1, VAR_6 + 0x318, 0x03ffffff);
   else
    FUNC_3(VAR_1, VAR_6 + 0x320, 0x07ffffff);

   if (VAR_2->chipset < 0xa0)
    FUNC_2(VAR_1, VAR_6 + 0x324, 5);
   else
    FUNC_2(VAR_1, VAR_6 + 0x328, 4);

   if (VAR_2->chipset < 0xa0) {
    FUNC_2(VAR_1, VAR_6 + 0x340, 9);
    VAR_5 = VAR_6 + 0x340;
   } else if (!FUNC_0(VAR_2->chipset)) {
    FUNC_2(VAR_1, VAR_6 + 0x33c, 0xb);
    VAR_5 = VAR_6 + 0x344;
   } else {
    FUNC_2(VAR_1, VAR_6 + 0x33c, 0xd);
    VAR_5 = VAR_6 + 0x344;
   }
   FUNC_3(VAR_1, VAR_5 + 0x0, 0x00120407);
   FUNC_3(VAR_1, VAR_5 + 0x4, 0x05091507);
   if (VAR_2->chipset == 0x84)
    FUNC_3(VAR_1, VAR_5 + 0x8, 0x05100202);
   else
    FUNC_3(VAR_1, VAR_5 + 0x8, 0x05010202);
   FUNC_3(VAR_1, VAR_5 + 0xc, 0x00030201);
   if (VAR_2->chipset == 0xa3)
    FUNC_2(VAR_1, VAR_6 + 0x36c, 1);

   FUNC_2(VAR_1, VAR_6 + 0x400, 2);
   FUNC_3(VAR_1, VAR_6 + 0x404, 0x00000040);
   FUNC_2(VAR_1, VAR_6 + 0x40c, 2);
   FUNC_3(VAR_1, VAR_6 + 0x40c, 0x0d0c0b0a);
   FUNC_3(VAR_1, VAR_6 + 0x410, 0x00141210);

   if (VAR_2->chipset < 0xa0)
    VAR_5 = VAR_6 + 0x800;
   else
    VAR_5 = VAR_6 + 0x500;
   FUNC_2(VAR_1, VAR_5, 6);
   FUNC_3(VAR_1, VAR_5 + 0x0, 0x000001f0);
   FUNC_3(VAR_1, VAR_5 + 0x4, 0x00000001);
   FUNC_3(VAR_1, VAR_5 + 0x8, 0x00000003);
   if (VAR_2->chipset == 0x50 || FUNC_1(VAR_2->chipset))
    FUNC_3(VAR_1, VAR_5 + 0xc, 0x00008000);
   FUNC_3(VAR_1, VAR_5 + 0x14, 0x00039e00);
   FUNC_2(VAR_1, VAR_5 + 0x1c, 2);
   if (VAR_2->chipset == 0x50)
    FUNC_3(VAR_1, VAR_5 + 0x1c, 0x00000040);
   else
    FUNC_3(VAR_1, VAR_5 + 0x1c, 0x00000100);
   FUNC_3(VAR_1, VAR_5 + 0x20, 0x00003800);

   if (VAR_2->chipset >= 0xa0) {
    FUNC_2(VAR_1, VAR_6 + 0x54c, 2);
    if (!FUNC_0(VAR_2->chipset))
     FUNC_3(VAR_1, VAR_6 + 0x54c, 0x003fe006);
    else
     FUNC_3(VAR_1, VAR_6 + 0x54c, 0x003fe007);
    FUNC_3(VAR_1, VAR_6 + 0x550, 0x003fe000);
   }

   if (VAR_2->chipset < 0xa0)
    VAR_5 = VAR_6 + 0xa00;
   else
    VAR_5 = VAR_6 + 0x680;
   FUNC_2(VAR_1, VAR_5, 1);
   FUNC_3(VAR_1, VAR_5, 0x00404040);

   if (VAR_2->chipset < 0xa0)
    VAR_5 = VAR_6 + 0xe00;
   else
    VAR_5 = VAR_6 + 0x700;
   FUNC_2(VAR_1, VAR_5, 2);
   if (VAR_2->chipset < 0xa0)
    FUNC_3(VAR_1, VAR_5, 0x0077f005);
   else if (VAR_2->chipset == 0xa5)
    FUNC_3(VAR_1, VAR_5, 0x6cf7f007);
   else if (VAR_2->chipset == 0xa8)
    FUNC_3(VAR_1, VAR_5, 0x6cfff007);
   else if (VAR_2->chipset == 0xac)
    FUNC_3(VAR_1, VAR_5, 0x0cfff007);
   else
    FUNC_3(VAR_1, VAR_5, 0x0cf7f007);
   if (VAR_2->chipset == 0x50)
    FUNC_3(VAR_1, VAR_5 + 0x4, 0x00007fff);
   else if (VAR_2->chipset < 0xa0)
    FUNC_3(VAR_1, VAR_5 + 0x4, 0x003f7fff);
   else
    FUNC_3(VAR_1, VAR_5 + 0x4, 0x02bf7fff);
   FUNC_2(VAR_1, VAR_5 + 0x2c, 1);
   if (VAR_2->chipset == 0x50) {
    FUNC_2(VAR_1, VAR_5 + 0x50, 9);
    FUNC_3(VAR_1, VAR_5 + 0x54, 0x000003ff);
    FUNC_3(VAR_1, VAR_5 + 0x58, 0x00000003);
    FUNC_3(VAR_1, VAR_5 + 0x5c, 0x00000003);
    FUNC_3(VAR_1, VAR_5 + 0x60, 0x000001ff);
    FUNC_3(VAR_1, VAR_5 + 0x64, 0x0000001f);
    FUNC_3(VAR_1, VAR_5 + 0x68, 0x0000000f);
    FUNC_3(VAR_1, VAR_5 + 0x6c, 0x0000000f);
   } else if (VAR_2->chipset < 0xa0) {
    FUNC_2(VAR_1, VAR_5 + 0x50, 1);
    FUNC_2(VAR_1, VAR_5 + 0x70, 1);
   } else {
    FUNC_2(VAR_1, VAR_5 + 0x50, 1);
    FUNC_2(VAR_1, VAR_5 + 0x60, 5);
   }
  }
 }
}
