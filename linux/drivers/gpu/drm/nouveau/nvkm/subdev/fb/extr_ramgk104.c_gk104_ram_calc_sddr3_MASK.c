
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int ramcfg_11_03_c0; int ramcfg_11_03_30; int rammap_11_11_0c; int ramcfg_11_09; int* timing; int ramcfg_11_03_0f; int timing_20_2c_003f; int timing_20_2c_1fc0; int timing_20_30_f8; scalar_t__ rammap_11_08_01; scalar_t__ ramcfg_DLLoff; int ramcfg_11_07_80; scalar_t__ rammap_11_08_0c; scalar_t__ ramcfg_11_03_f0; int ramcfg_11_01_04; scalar_t__ ramcfg_11_08_01; scalar_t__ ramcfg_11_07_08; scalar_t__ ramcfg_11_07_10; scalar_t__ ramcfg_11_02_40; scalar_t__ ramcfg_11_02_80; scalar_t__ ramcfg_11_07_40; int ramcfg_11_02_04; int ramcfg_11_02_08; } ;
struct nvkm_ram_data {TYPE_4__ bios; } ;
struct gk104_ramfuc {int* r_func2E; int* r_funcMV; } ;
struct TYPE_7__ {int* mr; TYPE_2__* fb; struct nvkm_ram_data* next; } ;
struct gk104_ram {int P1; int N1; int M1; int fN1; int mode; TYPE_3__ base; struct gk104_ramfuc fuc; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gk104_ramfuc*) ;
 int FUNC_2 (struct gk104_ramfuc*) ;
 int FUNC_3 (struct gk104_ramfuc*) ;
 scalar_t__ FUNC_4 (struct gk104_ramfuc*,int) ;
 int FUNC_5 (struct gk104_ramfuc*,int,int,int const) ;
 int FUNC_6 (struct gk104_ramfuc*,int) ;
 int FUNC_7 (struct gk104_ramfuc*,int) ;
 int FUNC_8 (struct gk104_ramfuc*) ;
 int FUNC_9 (struct gk104_ramfuc*,int,int,int,int) ;
 int FUNC_10 (struct gk104_ramfuc*,int,int const) ;

__attribute__((used)) static int
FUNC_11(struct gk104_ram *VAR_5, u32 VAR_6)
{
 struct gk104_ramfuc *VAR_7 = &VAR_5->fuc;
 const u32 VAR_8 = (( VAR_5->P1 << 16) | (VAR_5->N1 << 8) | VAR_5->M1);
 const u32 VAR_9 = VAR_5->fN1 << 16;
 const u32 VAR_10 = VAR_5->fN1;
 struct nvkm_ram_data *VAR_11 = VAR_5->base.next;
 int VAR_12 = !VAR_11->bios.ramcfg_11_02_08;
 int VAR_13 = !VAR_11->bios.ramcfg_11_02_04;
 u32 VAR_14, VAR_15;

 FUNC_5(VAR_7, 0x10f808, 0x40000000, 0x40000000);
 FUNC_3(VAR_7);

 if (FUNC_0(VAR_5->base.fb->subdev.device, VAR_0))
  FUNC_10(VAR_7, 0x62c000, 0x0f0f0000);

 if (VAR_12 == 1 && FUNC_4(VAR_7, VAR_1)) {
  u32 VAR_16 = FUNC_5(VAR_7, VAR_1, 0x3000, VAR_7->r_func2E[1]);
  if (VAR_16 != FUNC_7(VAR_7, VAR_1)) {
   FUNC_10(VAR_7, VAR_3, 1);
   FUNC_6(VAR_7, 20000);
  }
 }

 FUNC_5(VAR_7, 0x10f200, 0x00000800, 0x00000000);
 if (VAR_11->bios.ramcfg_11_03_f0)
  FUNC_5(VAR_7, 0x10f808, 0x04000000, 0x04000000);

 FUNC_10(VAR_7, 0x10f314, 0x00000001);

 if (VAR_11->bios.ramcfg_DLLoff)
  FUNC_1(VAR_7);

 FUNC_10(VAR_7, 0x10f210, 0x00000000);
 FUNC_10(VAR_7, 0x10f310, 0x00000001);
 FUNC_5(VAR_7, 0x10f200, 0x80000000, 0x80000000);
 FUNC_10(VAR_7, 0x10f310, 0x00000001);
 FUNC_5(VAR_7, 0x10f200, 0x80000000, 0x00000000);
 FUNC_6(VAR_7, 1000);

 FUNC_10(VAR_7, 0x10f090, 0x00000060);
 FUNC_10(VAR_7, 0x10f090, 0xc000007e);






 VAR_14 = 0x00010000;
 VAR_15 = 0x00010000;

 if (1) {
  VAR_14 |= 0x800807e0;
  VAR_15 |= 0x800807e0;
  switch (VAR_11->bios.ramcfg_11_03_c0) {
  case 3: VAR_15 &= ~0x00000040; break;
  case 2: VAR_15 &= ~0x00000100; break;
  case 1: VAR_15 &= ~0x80000000; break;
  case 0: VAR_15 &= ~0x00000400; break;
  }

  switch (VAR_11->bios.ramcfg_11_03_30) {
  case 3: VAR_15 &= ~0x00000020; break;
  case 2: VAR_15 &= ~0x00000080; break;
  case 1: VAR_15 &= ~0x00080000; break;
  case 0: VAR_15 &= ~0x00000200; break;
  }
 }

 if (VAR_11->bios.ramcfg_11_02_80)
  VAR_14 |= 0x03000000;
 if (VAR_11->bios.ramcfg_11_02_40)
  VAR_14 |= 0x00002000;
 if (VAR_11->bios.ramcfg_11_07_10)
  VAR_14 |= 0x00004000;
 if (VAR_11->bios.ramcfg_11_07_08)
  VAR_14 |= 0x00000003;
 else
  VAR_14 |= 0x14000000;
 FUNC_5(VAR_7, 0x10f824, VAR_14, VAR_15);

 FUNC_5(VAR_7, 0x132040, 0x00010000, 0x00000000);

 FUNC_5(VAR_7, 0x1373f4, 0x00000000, 0x00010010);
 VAR_15 = FUNC_7(VAR_7, 0x1373ec) & ~0x00030000;
 VAR_15 |= VAR_11->bios.ramcfg_11_03_30 << 16;
 FUNC_10(VAR_7, 0x1373ec, VAR_15);
 FUNC_5(VAR_7, 0x1373f4, 0x00000003, 0x00000000);
 FUNC_5(VAR_7, 0x1373f4, 0x00000010, 0x00000000);


 if ((FUNC_7(VAR_7, 0x132024) & 0xffffffff) != VAR_8 ||
     (FUNC_7(VAR_7, 0x132034) & 0x0000ffff) != VAR_10) {
  FUNC_5(VAR_7, 0x132000, 0x00000001, 0x00000000);
  FUNC_5(VAR_7, 0x132020, 0x00000001, 0x00000000);
  FUNC_10(VAR_7, 0x137320, 0x00000000);
  FUNC_5(VAR_7, 0x132030, 0xffff0000, VAR_9);
  FUNC_5(VAR_7, 0x132034, 0x0000ffff, VAR_10);
  FUNC_10(VAR_7, 0x132024, VAR_8);
  FUNC_5(VAR_7, 0x132028, 0x00080000, 0x00080000);
  FUNC_5(VAR_7, 0x132020, 0x00000001, 0x00000001);
  FUNC_9(VAR_7, 0x137390, 0x00020000, 0x00020000, 64000);
  FUNC_5(VAR_7, 0x132028, 0x00080000, 0x00000000);
 }

 FUNC_5(VAR_7, 0x1373f4, 0x00000010, 0x00000010);
 FUNC_5(VAR_7, 0x1373f4, 0x00000003, 0x00000001);
 FUNC_5(VAR_7, 0x1373f4, 0x00010000, 0x00000000);

 if (FUNC_4(VAR_7, VAR_2)) {
  u32 VAR_17 = FUNC_5(VAR_7, VAR_2, 0x3000, VAR_7->r_funcMV[VAR_13]);
  if (VAR_17 != FUNC_7(VAR_7, VAR_2)) {
   FUNC_10(VAR_7, VAR_3, 1);
   FUNC_6(VAR_7, 64000);
  }
 }

 if (VAR_11->bios.ramcfg_11_02_40 ||
     VAR_11->bios.ramcfg_11_07_10) {
  FUNC_5(VAR_7, 0x132040, 0x00010000, 0x00010000);
  FUNC_6(VAR_7, 20000);
 }

 if (VAR_5->mode != 2) {
  if (VAR_11->bios.ramcfg_11_07_40)
   FUNC_5(VAR_7, 0x10f670, 0x80000000, 0x80000000);
 }

 FUNC_10(VAR_7, 0x10f65c, 0x00000011 * VAR_11->bios.rammap_11_11_0c);
 FUNC_10(VAR_7, 0x10f6b8, 0x01010101 * VAR_11->bios.ramcfg_11_09);
 FUNC_10(VAR_7, 0x10f6bc, 0x01010101 * VAR_11->bios.ramcfg_11_09);

 VAR_14 = 0x00010000;
 VAR_15 = 0x00000000;
 if (!VAR_11->bios.ramcfg_11_02_80)
  VAR_15 |= 0x03000000;
 if (!VAR_11->bios.ramcfg_11_02_40)
  VAR_15 |= 0x00002000;
 if (!VAR_11->bios.ramcfg_11_07_10)
  VAR_15 |= 0x00004000;
 if (!VAR_11->bios.ramcfg_11_07_08)
  VAR_15 |= 0x00000003;
 else
  VAR_15 |= 0x14000000;
 FUNC_5(VAR_7, 0x10f824, VAR_14, VAR_15);
 FUNC_6(VAR_7, 1000);

 if (VAR_11->bios.ramcfg_11_08_01)
  VAR_15 = 0x00100000;
 else
  VAR_15 = 0x00000000;
 FUNC_5(VAR_7, 0x10f82c, 0x00100000, VAR_15);


 FUNC_5(VAR_7, 0x10f248, 0xffffffff, VAR_11->bios.timing[10]);
 FUNC_5(VAR_7, 0x10f290, 0xffffffff, VAR_11->bios.timing[0]);
 FUNC_5(VAR_7, 0x10f294, 0xffffffff, VAR_11->bios.timing[1]);
 FUNC_5(VAR_7, 0x10f298, 0xffffffff, VAR_11->bios.timing[2]);
 FUNC_5(VAR_7, 0x10f29c, 0xffffffff, VAR_11->bios.timing[3]);
 FUNC_5(VAR_7, 0x10f2a0, 0xffffffff, VAR_11->bios.timing[4]);
 FUNC_5(VAR_7, 0x10f2a4, 0xffffffff, VAR_11->bios.timing[5]);
 FUNC_5(VAR_7, 0x10f2a8, 0xffffffff, VAR_11->bios.timing[6]);
 FUNC_5(VAR_7, 0x10f2ac, 0xffffffff, VAR_11->bios.timing[7]);
 FUNC_5(VAR_7, 0x10f2cc, 0xffffffff, VAR_11->bios.timing[8]);
 FUNC_5(VAR_7, 0x10f2e8, 0xffffffff, VAR_11->bios.timing[9]);

 VAR_14 = 0x33f00000;
 VAR_15 = 0x00000000;
 if (!VAR_11->bios.ramcfg_11_01_04)
  VAR_15 |= 0x20200000;
 if (!VAR_11->bios.ramcfg_11_07_80)
  VAR_15 |= 0x12800000;



 if (VAR_11->bios.ramcfg_11_03_f0) {
  if (VAR_11->bios.rammap_11_08_0c) {
   if (!VAR_11->bios.ramcfg_11_07_80)
    VAR_14 |= 0x00000020;
   else
    VAR_15 |= 0x00000020;
   VAR_14 |= 0x08000004;
  }
  VAR_15 |= 0x04000000;
 } else {
  VAR_14 |= 0x44000020;
  VAR_15 |= 0x08000004;
 }

 FUNC_5(VAR_7, 0x10f808, VAR_14, VAR_15);

 FUNC_10(VAR_7, 0x10f870, 0x11111111 * VAR_11->bios.ramcfg_11_03_0f);

 FUNC_5(VAR_7, 0x10f250, 0x000003f0, VAR_11->bios.timing_20_2c_003f << 4);

 VAR_15 = (VAR_11->bios.timing[10] & 0x7f000000) >> 24;
 if (VAR_15 < VAR_11->bios.timing_20_2c_1fc0)
  VAR_15 = VAR_11->bios.timing_20_2c_1fc0;
 FUNC_5(VAR_7, 0x10f24c, 0x7f000000, VAR_15 << 24);

 FUNC_5(VAR_7, 0x10f224, 0x001f0000, VAR_11->bios.timing_20_30_f8 << 16);

 FUNC_10(VAR_7, 0x10f090, 0x4000007f);
 FUNC_6(VAR_7, 1000);

 FUNC_10(VAR_7, 0x10f314, 0x00000001);
 FUNC_10(VAR_7, 0x10f310, 0x00000001);
 FUNC_10(VAR_7, 0x10f210, 0x80000000);
 FUNC_6(VAR_7, 1000);

 if (!VAR_11->bios.ramcfg_DLLoff) {
  FUNC_5(VAR_7, VAR_4[1], 0x1, 0x0);
  FUNC_2(VAR_7);
 }

 FUNC_5(VAR_7, VAR_4[2], 0x00000fff, VAR_5->base.mr[2]);
 FUNC_5(VAR_7, VAR_4[1], 0xffffffff, VAR_5->base.mr[1]);
 FUNC_10(VAR_7, VAR_4[0], VAR_5->base.mr[0]);
 FUNC_6(VAR_7, 1000);

 if (!VAR_11->bios.ramcfg_DLLoff) {
  FUNC_2(VAR_7);
  FUNC_6(VAR_7, 1000);
 }

 if (VAR_12 == 0 && FUNC_4(VAR_7, VAR_1)) {
  u32 VAR_18 = FUNC_5(VAR_7, VAR_1, 0x3000, VAR_7->r_func2E[0]);
  if (VAR_18 != FUNC_7(VAR_7, VAR_1)) {
   FUNC_10(VAR_7, VAR_3, 1);
   FUNC_6(VAR_7, 20000);
  }
 }

 if (VAR_5->mode != 2) {
  FUNC_5(VAR_7, 0x10f830, 0x01000000, 0x01000000);
  FUNC_5(VAR_7, 0x10f830, 0x01000000, 0x00000000);
 }

 FUNC_5(VAR_7, 0x10f200, 0x80000000, 0x80000000);
 FUNC_10(VAR_7, 0x10f318, 0x00000001);
 FUNC_5(VAR_7, 0x10f200, 0x80000000, 0x00000000);
 FUNC_6(VAR_7, 1000);

 FUNC_8(VAR_7);

 if (FUNC_0(VAR_5->base.fb->subdev.device, VAR_0))
  FUNC_10(VAR_7, 0x62c000, 0x0f0f0f00);

 if (VAR_11->bios.rammap_11_08_01)
  VAR_15 = 0x00000800;
 else
  VAR_15 = 0x00000000;
 FUNC_5(VAR_7, 0x10f200, 0x00000800, VAR_15);
 return 0;
}
