
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int ramcfg_11_03_c0; int ramcfg_11_03_30; int rammap_11_11_0c; int ramcfg_11_09; int ramcfg_11_04; int* timing; int ramcfg_11_02_03; int timing_20_30_07; int ramcfg_11_03_0f; int timing_20_2c_003f; int timing_20_2c_1fc0; int timing_20_30_f8; int timing_20_31_0800; int timing_20_31_0780; int timing_20_31_0078; int timing_20_31_0007; int timing_20_31_8000; int timing_20_31_7000; scalar_t__ rammap_11_08_01; scalar_t__ ramcfg_11_07_02; int rammap_11_08_10; scalar_t__ ramcfg_11_07_04; scalar_t__ ramcfg_11_07_08; scalar_t__ ramcfg_11_08_10; scalar_t__ ramcfg_11_01_01; scalar_t__ ramcfg_11_01_10; int ramcfg_11_07_80; scalar_t__ rammap_11_08_0c; scalar_t__ ramcfg_11_03_f0; int ramcfg_11_01_04; scalar_t__ ramcfg_11_01_02; scalar_t__ ramcfg_11_08_20; scalar_t__ ramcfg_11_08_02; scalar_t__ ramcfg_11_08_04; scalar_t__ ramcfg_11_08_08; scalar_t__ ramcfg_11_08_01; scalar_t__ ramcfg_11_01_08; scalar_t__ ramcfg_11_07_10; scalar_t__ ramcfg_11_02_40; scalar_t__ ramcfg_11_02_80; scalar_t__ ramcfg_11_07_40; int ramcfg_11_02_04; int ramcfg_11_02_08; } ;
struct nvkm_ram_data {TYPE_5__ bios; } ;
struct gk104_ramfuc {int* r_func2E; int* r_funcMV; } ;
struct TYPE_9__ {int* mr; int mr1_nuts; TYPE_3__* fb; struct nvkm_ram_data* next; } ;
struct TYPE_6__ {scalar_t__ ramcfg_11_01_10; scalar_t__ ramcfg_11_02_03; scalar_t__ ramcfg_11_01_02; scalar_t__ timing_20_30_07; scalar_t__ ramcfg_11_01_01; scalar_t__ ramcfg_11_08_20; } ;
struct gk104_ram {int from; int mode; TYPE_4__ base; TYPE_1__ diff; struct gk104_ramfuc fuc; } ;
struct TYPE_7__ {int device; } ;
struct TYPE_8__ {TYPE_2__ subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct gk104_ramfuc*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct gk104_ramfuc*) ;
 int FUNC_3 (struct gk104_ramfuc*) ;
 int FUNC_4 (struct gk104_ramfuc*) ;
 scalar_t__ FUNC_5 (struct gk104_ramfuc*,int) ;
 int FUNC_6 (struct gk104_ramfuc*,int,int,int) ;
 int FUNC_7 (struct gk104_ramfuc*,int) ;
 int FUNC_8 (struct gk104_ramfuc*,int) ;
 int FUNC_9 (struct gk104_ram*,int,int,int,int) ;
 int FUNC_10 (struct gk104_ramfuc*,int) ;
 int FUNC_11 (struct gk104_ramfuc*) ;
 int FUNC_12 (struct gk104_ramfuc*,int,int,int,int) ;
 int FUNC_13 (struct gk104_ramfuc*,int,int) ;

__attribute__((used)) static int
FUNC_14(struct gk104_ram *VAR_5, u32 VAR_6)
{
 struct gk104_ramfuc *VAR_7 = &VAR_5->fuc;
 struct nvkm_ram_data *VAR_8 = VAR_5->base.next;
 int VAR_9 = !VAR_8->bios.ramcfg_11_02_08;
 int VAR_10 = !VAR_8->bios.ramcfg_11_02_04;
 u32 VAR_11, VAR_12;

 FUNC_6(VAR_7, 0x10f808, 0x40000000, 0x40000000);
 FUNC_4(VAR_7);

 if (FUNC_1(VAR_5->base.fb->subdev.device, VAR_0))
  FUNC_13(VAR_7, 0x62c000, 0x0f0f0000);


 if ((VAR_5->base.mr[1] & 0x03c) != 0x030) {
  FUNC_6(VAR_7, VAR_4[1], 0x03c, VAR_5->base.mr[1] & 0x03c);
  FUNC_9(VAR_5, VAR_4[1], 0x03c, VAR_5->base.mr1_nuts & 0x03c, 0x000);
 }

 if (VAR_9 == 1 && FUNC_5(VAR_7, VAR_1)) {
  u32 VAR_13 = FUNC_6(VAR_7, VAR_1, 0x3000, VAR_7->r_func2E[1]);
  if (VAR_13 != FUNC_10(VAR_7, VAR_1)) {
   FUNC_13(VAR_7, VAR_3, 1);
   FUNC_7(VAR_7, 20000);
  }
 }

 FUNC_6(VAR_7, 0x10f200, 0x00000800, 0x00000000);

 FUNC_0(VAR_7, 0x01020000, 0x000c0000);

 FUNC_13(VAR_7, 0x10f210, 0x00000000);
 FUNC_7(VAR_7, 1000);
 FUNC_13(VAR_7, 0x10f310, 0x00000001);
 FUNC_7(VAR_7, 1000);

 FUNC_6(VAR_7, 0x10f200, 0x80000000, 0x80000000);
 FUNC_13(VAR_7, 0x10f314, 0x00000001);
 FUNC_6(VAR_7, 0x10f200, 0x80000000, 0x00000000);
 FUNC_13(VAR_7, 0x10f090, 0x00000061);
 FUNC_13(VAR_7, 0x10f090, 0xc000007f);
 FUNC_7(VAR_7, 1000);

 FUNC_13(VAR_7, 0x10f698, 0x00000000);
 FUNC_13(VAR_7, 0x10f69c, 0x00000000);






 VAR_11 = 0x800f07e0;
 VAR_12 = 0x00030000;
 if (FUNC_10(VAR_7, 0x10f978) & 0x00800000)
  VAR_12 |= 0x00040000;

 if (1) {
  VAR_12 |= 0x800807e0;
  switch (VAR_8->bios.ramcfg_11_03_c0) {
  case 3: VAR_12 &= ~0x00000040; break;
  case 2: VAR_12 &= ~0x00000100; break;
  case 1: VAR_12 &= ~0x80000000; break;
  case 0: VAR_12 &= ~0x00000400; break;
  }

  switch (VAR_8->bios.ramcfg_11_03_30) {
  case 3: VAR_12 &= ~0x00000020; break;
  case 2: VAR_12 &= ~0x00000080; break;
  case 1: VAR_12 &= ~0x00080000; break;
  case 0: VAR_12 &= ~0x00000200; break;
  }
 }

 if (VAR_8->bios.ramcfg_11_02_80)
  VAR_11 |= 0x03000000;
 if (VAR_8->bios.ramcfg_11_02_40)
  VAR_11 |= 0x00002000;
 if (VAR_8->bios.ramcfg_11_07_10)
  VAR_11 |= 0x00004000;
 if (VAR_8->bios.ramcfg_11_07_08)
  VAR_11 |= 0x00000003;
 else {
  VAR_11 |= 0x34000000;
  if (FUNC_10(VAR_7, 0x10f978) & 0x00800000)
   VAR_11 |= 0x40000000;
 }
 FUNC_6(VAR_7, 0x10f824, VAR_11, VAR_12);

 FUNC_6(VAR_7, 0x132040, 0x00010000, 0x00000000);

 if (VAR_5->from == 2 && VAR_5->mode != 2) {
  FUNC_6(VAR_7, 0x10f808, 0x00080000, 0x00000000);
  FUNC_6(VAR_7, 0x10f200, 0x18008000, 0x00008000);
  FUNC_6(VAR_7, 0x10f800, 0x00000000, 0x00000004);
  FUNC_6(VAR_7, 0x10f830, 0x00008000, 0x01040010);
  FUNC_6(VAR_7, 0x10f830, 0x01000000, 0x00000000);
  FUNC_3(VAR_7);
  FUNC_6(VAR_7, 0x1373f0, 0x00000002, 0x00000001);
  FUNC_2(VAR_7);
  FUNC_6(VAR_7, 0x10f830, 0x00c00000, 0x00240001);
 } else
 if (VAR_5->from != 2 && VAR_5->mode != 2) {
  FUNC_3(VAR_7);
  FUNC_2(VAR_7);
 }

 if (FUNC_5(VAR_7, VAR_2)) {
  u32 VAR_14 = FUNC_6(VAR_7, VAR_2, 0x3000, VAR_7->r_funcMV[VAR_10]);
  if (VAR_14 != FUNC_10(VAR_7, VAR_2)) {
   FUNC_13(VAR_7, VAR_3, 1);
   FUNC_7(VAR_7, 64000);
  }
 }

 if (VAR_8->bios.ramcfg_11_02_40 ||
     VAR_8->bios.ramcfg_11_07_10) {
  FUNC_6(VAR_7, 0x132040, 0x00010000, 0x00010000);
  FUNC_7(VAR_7, 20000);
 }

 if (VAR_5->from != 2 && VAR_5->mode == 2) {
  if (0 )
   FUNC_6(VAR_7, 0x10f200, 0x18000000, 0x18000000);
  FUNC_6(VAR_7, 0x10f800, 0x00000004, 0x00000000);
  FUNC_6(VAR_7, 0x1373f0, 0x00000000, 0x00000002);
  FUNC_6(VAR_7, 0x10f830, 0x00800001, 0x00408010);
  FUNC_3(VAR_7);
  FUNC_2(VAR_7);
  FUNC_6(VAR_7, 0x10f808, 0x00000000, 0x00080000);
  FUNC_6(VAR_7, 0x10f200, 0x00808000, 0x00800000);
 } else
 if (VAR_5->from == 2 && VAR_5->mode == 2) {
  FUNC_6(VAR_7, 0x10f800, 0x00000004, 0x00000000);
  FUNC_3(VAR_7);
  FUNC_2(VAR_7);
 }

 if (VAR_5->mode != 2) {
  if (VAR_8->bios.ramcfg_11_07_40)
   FUNC_6(VAR_7, 0x10f670, 0x80000000, 0x80000000);
 }

 FUNC_13(VAR_7, 0x10f65c, 0x00000011 * VAR_8->bios.rammap_11_11_0c);
 FUNC_13(VAR_7, 0x10f6b8, 0x01010101 * VAR_8->bios.ramcfg_11_09);
 FUNC_13(VAR_7, 0x10f6bc, 0x01010101 * VAR_8->bios.ramcfg_11_09);

 if (!VAR_8->bios.ramcfg_11_07_08 && !VAR_8->bios.ramcfg_11_07_04) {
  FUNC_13(VAR_7, 0x10f698, 0x01010101 * VAR_8->bios.ramcfg_11_04);
  FUNC_13(VAR_7, 0x10f69c, 0x01010101 * VAR_8->bios.ramcfg_11_04);
 } else
 if (!VAR_8->bios.ramcfg_11_07_08) {
  FUNC_13(VAR_7, 0x10f698, 0x00000000);
  FUNC_13(VAR_7, 0x10f69c, 0x00000000);
 }

 if (VAR_5->mode != 2) {
  u32 VAR_15 = 0x01000100 * VAR_8->bios.ramcfg_11_04;
  FUNC_8(VAR_7, 0x10f694);
  FUNC_6(VAR_7, 0x10f694, 0xff00ff00, VAR_15);
 }

 if (VAR_5->mode == 2 && VAR_8->bios.ramcfg_11_08_10)
  VAR_12 = 0x00000080;
 else
  VAR_12 = 0x00000000;
 FUNC_6(VAR_7, 0x10f60c, 0x00000080, VAR_12);

 VAR_11 = 0x00070000;
 VAR_12 = 0x00000000;
 if (!VAR_8->bios.ramcfg_11_02_80)
  VAR_12 |= 0x03000000;
 if (!VAR_8->bios.ramcfg_11_02_40)
  VAR_12 |= 0x00002000;
 if (!VAR_8->bios.ramcfg_11_07_10)
  VAR_12 |= 0x00004000;
 if (!VAR_8->bios.ramcfg_11_07_08)
  VAR_12 |= 0x00000003;
 else
  VAR_12 |= 0x74000000;
 FUNC_6(VAR_7, 0x10f824, VAR_11, VAR_12);

 if (VAR_8->bios.ramcfg_11_01_08)
  VAR_12 = 0x00000000;
 else
  VAR_12 = 0x00001000;
 FUNC_6(VAR_7, 0x10f200, 0x00001000, VAR_12);

 if (FUNC_10(VAR_7, 0x10f670) & 0x80000000) {
  FUNC_7(VAR_7, 10000);
  FUNC_6(VAR_7, 0x10f670, 0x80000000, 0x00000000);
 }

 if (VAR_8->bios.ramcfg_11_08_01)
  VAR_12 = 0x00100000;
 else
  VAR_12 = 0x00000000;
 FUNC_6(VAR_7, 0x10f82c, 0x00100000, VAR_12);

 VAR_12 = 0x00000000;
 if (VAR_8->bios.ramcfg_11_08_08)
  VAR_12 |= 0x00002000;
 if (VAR_8->bios.ramcfg_11_08_04)
  VAR_12 |= 0x00001000;
 if (VAR_8->bios.ramcfg_11_08_02)
  VAR_12 |= 0x00004000;
 FUNC_6(VAR_7, 0x10f830, 0x00007000, VAR_12);


 FUNC_6(VAR_7, 0x10f248, 0xffffffff, VAR_8->bios.timing[10]);
 FUNC_6(VAR_7, 0x10f290, 0xffffffff, VAR_8->bios.timing[0]);
 FUNC_6(VAR_7, 0x10f294, 0xffffffff, VAR_8->bios.timing[1]);
 FUNC_6(VAR_7, 0x10f298, 0xffffffff, VAR_8->bios.timing[2]);
 FUNC_6(VAR_7, 0x10f29c, 0xffffffff, VAR_8->bios.timing[3]);
 FUNC_6(VAR_7, 0x10f2a0, 0xffffffff, VAR_8->bios.timing[4]);
 FUNC_6(VAR_7, 0x10f2a4, 0xffffffff, VAR_8->bios.timing[5]);
 FUNC_6(VAR_7, 0x10f2a8, 0xffffffff, VAR_8->bios.timing[6]);
 FUNC_6(VAR_7, 0x10f2ac, 0xffffffff, VAR_8->bios.timing[7]);
 FUNC_6(VAR_7, 0x10f2cc, 0xffffffff, VAR_8->bios.timing[8]);
 FUNC_6(VAR_7, 0x10f2e8, 0xffffffff, VAR_8->bios.timing[9]);

 VAR_12 = VAR_11 = 0x00000000;
 if (VAR_5->diff.ramcfg_11_08_20) {
  if (VAR_8->bios.ramcfg_11_08_20)
   VAR_12 |= 0x01000000;
  VAR_11 |= 0x01000000;
 }
 FUNC_6(VAR_7, 0x10f200, VAR_11, VAR_12);

 VAR_12 = VAR_11 = 0x00000000;
 if (VAR_5->diff.ramcfg_11_02_03) {
  VAR_12 |= VAR_8->bios.ramcfg_11_02_03 << 8;
  VAR_11 |= 0x00000300;
 }
 if (VAR_5->diff.ramcfg_11_01_10) {
  if (VAR_8->bios.ramcfg_11_01_10)
   VAR_12 |= 0x70000000;
  VAR_11 |= 0x70000000;
 }
 FUNC_6(VAR_7, 0x10f604, VAR_11, VAR_12);

 VAR_12 = VAR_11 = 0x00000000;
 if (VAR_5->diff.timing_20_30_07) {
  VAR_12 |= VAR_8->bios.timing_20_30_07 << 28;
  VAR_11 |= 0x70000000;
 }
 if (VAR_5->diff.ramcfg_11_01_01) {
  if (VAR_8->bios.ramcfg_11_01_01)
   VAR_12 |= 0x00000100;
  VAR_11 |= 0x00000100;
 }
 FUNC_6(VAR_7, 0x10f614, VAR_11, VAR_12);

 VAR_12 = VAR_11 = 0x00000000;
 if (VAR_5->diff.timing_20_30_07) {
  VAR_12 |= VAR_8->bios.timing_20_30_07 << 28;
  VAR_11 |= 0x70000000;
 }
 if (VAR_5->diff.ramcfg_11_01_02) {
  if (VAR_8->bios.ramcfg_11_01_02)
   VAR_12 |= 0x00000100;
  VAR_11 |= 0x00000100;
 }
 FUNC_6(VAR_7, 0x10f610, VAR_11, VAR_12);

 VAR_11 = 0x33f00000;
 VAR_12 = 0x00000000;
 if (!VAR_8->bios.ramcfg_11_01_04)
  VAR_12 |= 0x20200000;
 if (!VAR_8->bios.ramcfg_11_07_80)
  VAR_12 |= 0x12800000;



 if (VAR_8->bios.ramcfg_11_03_f0) {
  if (VAR_8->bios.rammap_11_08_0c) {
   if (!VAR_8->bios.ramcfg_11_07_80)
    VAR_11 |= 0x00000020;
   else
    VAR_12 |= 0x00000020;
   VAR_11 |= 0x00000004;
  }
 } else {
  VAR_11 |= 0x40000020;
  VAR_12 |= 0x00000004;
 }

 FUNC_6(VAR_7, 0x10f808, VAR_11, VAR_12);

 FUNC_13(VAR_7, 0x10f870, 0x11111111 * VAR_8->bios.ramcfg_11_03_0f);

 VAR_12 = VAR_11 = 0x00000000;
 if (VAR_5->diff.ramcfg_11_02_03) {
  VAR_12 |= VAR_8->bios.ramcfg_11_02_03;
  VAR_11 |= 0x00000003;
 }
 if (VAR_5->diff.ramcfg_11_01_10) {
  if (VAR_8->bios.ramcfg_11_01_10)
   VAR_12 |= 0x00000004;
  VAR_11 |= 0x00000004;
 }

 if ((FUNC_6(VAR_7, 0x100770, VAR_11, VAR_12) & VAR_11 & 4) != (VAR_12 & 4)) {
  FUNC_6(VAR_7, 0x100750, 0x00000008, 0x00000008);
  FUNC_13(VAR_7, 0x100710, 0x00000000);
  FUNC_12(VAR_7, 0x100710, 0x80000000, 0x80000000, 200000);
 }

 VAR_12 = VAR_8->bios.timing_20_30_07 << 8;
 if (VAR_8->bios.ramcfg_11_01_01)
  VAR_12 |= 0x80000000;
 FUNC_6(VAR_7, 0x100778, 0x00000700, VAR_12);

 FUNC_6(VAR_7, 0x10f250, 0x000003f0, VAR_8->bios.timing_20_2c_003f << 4);
 VAR_12 = (VAR_8->bios.timing[10] & 0x7f000000) >> 24;
 if (VAR_12 < VAR_8->bios.timing_20_2c_1fc0)
  VAR_12 = VAR_8->bios.timing_20_2c_1fc0;
 FUNC_6(VAR_7, 0x10f24c, 0x7f000000, VAR_12 << 24);
 FUNC_6(VAR_7, 0x10f224, 0x001f0000, VAR_8->bios.timing_20_30_f8 << 16);

 FUNC_6(VAR_7, 0x10fec4, 0x041e0f07, VAR_8->bios.timing_20_31_0800 << 26 |
         VAR_8->bios.timing_20_31_0780 << 17 |
         VAR_8->bios.timing_20_31_0078 << 8 |
         VAR_8->bios.timing_20_31_0007);
 FUNC_6(VAR_7, 0x10fec8, 0x00000027, VAR_8->bios.timing_20_31_8000 << 5 |
         VAR_8->bios.timing_20_31_7000);

 FUNC_13(VAR_7, 0x10f090, 0x4000007e);
 FUNC_7(VAR_7, 2000);
 FUNC_13(VAR_7, 0x10f314, 0x00000001);
 FUNC_13(VAR_7, 0x10f310, 0x00000001);
 FUNC_13(VAR_7, 0x10f210, 0x80000000);

 if (VAR_8->bios.ramcfg_11_08_10 && (VAR_5->mode == 2) ) {
  u32 VAR_16 = FUNC_6(VAR_7, 0x10f294, 0xff000000, 0x24000000);
  FUNC_0(VAR_7, 0xbc0e0000, 0xa4010000);
  FUNC_7(VAR_7, 1000);
  FUNC_13(VAR_7, 0x10f294, VAR_16);
 }

 FUNC_6(VAR_7, VAR_4[3], 0xfff, VAR_5->base.mr[3]);
 FUNC_13(VAR_7, VAR_4[0], VAR_5->base.mr[0]);
 FUNC_6(VAR_7, VAR_4[8], 0xfff, VAR_5->base.mr[8]);
 FUNC_7(VAR_7, 1000);
 FUNC_6(VAR_7, VAR_4[1], 0xfff, VAR_5->base.mr[1]);
 FUNC_6(VAR_7, VAR_4[5], 0xfff, VAR_5->base.mr[5] & ~0x004);
 FUNC_6(VAR_7, VAR_4[6], 0xfff, VAR_5->base.mr[6]);
 FUNC_6(VAR_7, VAR_4[7], 0xfff, VAR_5->base.mr[7]);

 if (VAR_9 == 0 && FUNC_5(VAR_7, VAR_1)) {
  u32 VAR_17 = FUNC_6(VAR_7, VAR_1, 0x3000, VAR_7->r_func2E[0]);
  if (VAR_17 != FUNC_10(VAR_7, VAR_1)) {
   FUNC_13(VAR_7, VAR_3, 1);
   FUNC_7(VAR_7, 20000);
  }
 }

 FUNC_6(VAR_7, 0x10f200, 0x80000000, 0x80000000);
 FUNC_13(VAR_7, 0x10f318, 0x00000001);
 FUNC_6(VAR_7, 0x10f200, 0x80000000, 0x00000000);
 FUNC_7(VAR_7, 1000);
 FUNC_9(VAR_5, 0x10f200, 0x18808800, 0x00000000, 0x18808800);

 VAR_12 = FUNC_10(VAR_7, 0x10f978);
 VAR_12 &= ~0x00046144;
 VAR_12 |= 0x0000000b;
 if (!VAR_8->bios.ramcfg_11_07_08) {
  if (!VAR_8->bios.ramcfg_11_07_04)
   VAR_12 |= 0x0000200c;
  else
   VAR_12 |= 0x00000000;
 } else {
  VAR_12 |= 0x00040044;
 }
 FUNC_13(VAR_7, 0x10f978, VAR_12);

 if (VAR_5->mode == 1) {
  VAR_12 = FUNC_10(VAR_7, 0x10f830) | 0x00000001;
  FUNC_13(VAR_7, 0x10f830, VAR_12);
 }

 if (!VAR_8->bios.ramcfg_11_07_08) {
  VAR_12 = 0x88020000;
  if ( VAR_8->bios.ramcfg_11_07_04)
   VAR_12 |= 0x10000000;
  if (!VAR_8->bios.rammap_11_08_10)
   VAR_12 |= 0x00080000;
 } else {
  VAR_12 = 0xa40e0000;
 }
 FUNC_0(VAR_7, 0xbc0f0000, VAR_12);
 if (1)
  FUNC_7(VAR_7, 1000);

 if (VAR_5->mode == 2) {
  FUNC_6(VAR_7, 0x10f800, 0x00000004, 0x00000004);
 }


 if (FUNC_6(VAR_7, VAR_4[5], 0x004, VAR_5->base.mr[5]) != VAR_5->base.mr[5])
  FUNC_7(VAR_7, 1000);

 if (VAR_5->mode != 2) {
  FUNC_6(VAR_7, 0x10f830, 0x01000000, 0x01000000);
  FUNC_6(VAR_7, 0x10f830, 0x01000000, 0x00000000);
 }

 if (VAR_8->bios.ramcfg_11_07_02)
  FUNC_0(VAR_7, 0x80020000, 0x01000000);

 FUNC_11(VAR_7);

 if (FUNC_1(VAR_5->base.fb->subdev.device, VAR_0))
  FUNC_13(VAR_7, 0x62c000, 0x0f0f0f00);

 if (VAR_8->bios.rammap_11_08_01)
  VAR_12 = 0x00000800;
 else
  VAR_12 = 0x00000000;
 FUNC_6(VAR_7, 0x10f200, 0x00000800, VAR_12);
 FUNC_9(VAR_5, 0x10f200, 0x18808800, VAR_12, 0x18808800);
 return 0;
}
