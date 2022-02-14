
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {TYPE_3__* device; } ;
struct TYPE_12__ {int ramcfg_timing; int rammap_00_16_40; int ramcfg_00_07; int ramcfg_00_06; int ramcfg_00_05; int ramcfg_00_09; int ramcfg_00_08; scalar_t__ ramcfg_00_03_02; scalar_t__ rammap_00_17_02; int ramcfg_DLLoff; scalar_t__ timing_10_ODT; scalar_t__ rammap_00_16_20; scalar_t__ ramcfg_00_04_20; scalar_t__ ramcfg_00_04_04; int ramcfg_00_03_08; scalar_t__ ramcfg_00_03_01; int ramcfg_FBVDDQ; int ramcfg_00_04_02; } ;
struct nvkm_ram_data {int freq; TYPE_5__ bios; } ;
struct nvkm_ram {int dummy; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_9__ {scalar_t__ max_freq; } ;
struct nvbios_pll {int bias_p; TYPE_2__ vco2; } ;
struct nvbios_perfE {int memory; } ;
struct nv50_ramseq {int dummy; } ;
struct TYPE_11__ {int* mr; int type; struct nvkm_ram_data* next; struct nvkm_ram_data target; TYPE_1__* fb; } ;
struct nv50_ram {TYPE_4__ base; struct nv50_ramseq hwsq; } ;
struct TYPE_10__ {int chipset; struct nvkm_bios* bios; } ;
struct TYPE_8__ {struct nvkm_subdev subdev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int* VAR_2 ;
 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,int,int*,int*,int*,int*,int*) ;
 struct nv50_ram* FUNC_1 (struct nvkm_ram*) ;
 int FUNC_2 (struct nv50_ramseq*,int,int) ;
 int FUNC_3 (struct nv50_ram*,int*) ;
 int FUNC_4 (struct nv50_ram*,int*) ;
 int FUNC_5 (struct nvkm_bios*,int ,int*,int*,int*,int*,struct nvbios_perfE*) ;
 int FUNC_6 (struct nvkm_bios*,int,struct nvbios_pll*) ;
 int FUNC_7 (struct nvkm_subdev*) ;
 int FUNC_8 (struct nvkm_bios*,int,int,TYPE_5__*) ;
 int FUNC_9 (struct nvkm_bios*,int,int,int,TYPE_5__*) ;
 int FUNC_10 (struct nvkm_bios*,int,int*,int*,int*,int*,TYPE_5__*) ;
 int FUNC_11 (struct nvkm_subdev*,char*,...) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct nv50_ramseq*) ;
 int FUNC_14 (struct nv50_ramseq*,struct nvkm_subdev*) ;
 int FUNC_15 (struct nv50_ramseq*,int,int,int) ;
 int FUNC_16 (struct nv50_ramseq*,int) ;
 int FUNC_17 (struct nv50_ramseq*,int) ;
 int FUNC_18 (struct nv50_ramseq*,int) ;
 int FUNC_19 (struct nv50_ramseq*,int,int) ;
 int FUNC_20 (struct nv50_ramseq*,int,int) ;
 int FUNC_21 (struct nv50_ramseq*) ;
 int FUNC_22 (struct nv50_ramseq*,int,int) ;

__attribute__((used)) static int
FUNC_23(struct nvkm_ram *VAR_3, u32 VAR_4)
{
 struct nv50_ram *VAR_5 = FUNC_1(VAR_3);
 struct nv50_ramseq *VAR_6 = &VAR_5->hwsq;
 struct nvkm_subdev *VAR_7 = &VAR_5->base.fb->subdev;
 struct nvkm_bios *VAR_8 = VAR_7->device->bios;
 struct nvbios_perfE VAR_9;
 struct nvbios_pll VAR_10;
 struct nvkm_ram_data *VAR_11;
 u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18;
 u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31;
 u32 VAR_32[9];

 VAR_11 = &VAR_5->base.target;
 VAR_11->freq = VAR_4;
 VAR_5->base.next = VAR_11;


 VAR_31 = 0;
 do {
  VAR_18 = FUNC_5(VAR_8, VAR_31++, &VAR_12, &VAR_13, &VAR_14,
         &VAR_17, &VAR_9);
  if (!VAR_18 || (VAR_12 < 0x25 || VAR_12 >= 0x40) ||
      (VAR_17 < 2)) {
   FUNC_11(VAR_7, "invalid/missing perftab entry\n");
   return -VAR_0;
  }
 } while (VAR_9.memory < VAR_4);

 FUNC_8(VAR_8, VAR_18, VAR_13, &VAR_11->bios);


 VAR_16 = FUNC_7(VAR_7);
 if (VAR_16 >= VAR_14) {
  FUNC_11(VAR_7, "invalid ramcfg strap\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_9(VAR_8, VAR_18 + VAR_13, VAR_17, VAR_16,
   &VAR_11->bios);
 if (!VAR_18) {
  FUNC_11(VAR_7, "invalid/missing rammap entry ");
  return -VAR_0;
 }


 if (VAR_11->bios.ramcfg_timing != 0xff) {
  VAR_18 = FUNC_10(VAR_8, VAR_11->bios.ramcfg_timing,
     &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_11->bios);
  if (!VAR_18 || VAR_12 != 0x10 || VAR_13 < 0x12) {
   FUNC_11(VAR_7, "invalid/missing timing entry "
     "%02x %04x %02x %02x\n",
     VAR_16, VAR_18, VAR_12, VAR_13);
   return -VAR_0;
  }
  FUNC_3(VAR_5, VAR_32);
 } else {
  FUNC_4(VAR_5, VAR_32);
 }

 VAR_30 = FUNC_14(VAR_6, VAR_7);
 if (VAR_30)
  return VAR_30;


 VAR_5->base.mr[0] = FUNC_18(VAR_6, VAR_2[0]);
 VAR_5->base.mr[1] = FUNC_18(VAR_6, VAR_2[1]);
 VAR_5->base.mr[2] = FUNC_18(VAR_6, VAR_2[2]);

 switch (VAR_5->base.type) {
 case 128:
  VAR_30 = FUNC_12(&VAR_5->base);
  break;
 default:
  VAR_30 = -VAR_1;
  break;
 }

 if (VAR_30) {
  FUNC_11(VAR_7, "Could not calculate MR\n");
  return VAR_30;
 }

 if (VAR_7->device->chipset <= 0x96 && !VAR_11->bios.ramcfg_00_03_02)
  FUNC_15(VAR_6, 0x100710, 0x00000200, 0x00000000);


 FUNC_15(VAR_6, 0x100200, 0x00000800, 0x00000000);

 FUNC_21(VAR_6);
 FUNC_22(VAR_6, 0x611200, 0x00003300);
 FUNC_22(VAR_6, 0x002504, 0x00000001);
 FUNC_16(VAR_6, 8000);
 FUNC_19(VAR_6, 0x10, 0x00);
 FUNC_20(VAR_6, 0x00, 0x01);
 FUNC_16(VAR_6, 2000);

 if (VAR_11->bios.timing_10_ODT)
  FUNC_2(VAR_6, 0x2e, 1);

 FUNC_22(VAR_6, 0x1002d4, 0x00000001);
 FUNC_22(VAR_6, 0x1002d0, 0x00000001);
 FUNC_22(VAR_6, 0x1002d0, 0x00000001);
 FUNC_22(VAR_6, 0x100210, 0x00000000);
 FUNC_22(VAR_6, 0x1002dc, 0x00000001);

 VAR_30 = FUNC_6(VAR_8, 0x004008, &VAR_10);
 VAR_10.vco2.max_freq = 0;
 if (VAR_30 >= 0) {
  VAR_30 = FUNC_0(VAR_7, &VAR_10, VAR_4,
        &VAR_25, &VAR_26, &VAR_27, &VAR_28, &VAR_29);
  if (VAR_30 <= 0)
   VAR_30 = -VAR_0;
 }

 if (VAR_30 < 0)
  return VAR_30;


 if (VAR_4 <= 750000) {
  VAR_19 = 0x00000010;
  VAR_20 = 0x90000000;
 } else {
  VAR_19 = 0x00000000;
  VAR_20 = 0x80000000;
 }

 VAR_20 |= (VAR_10.bias_p << 19) | (VAR_29 << 22) | (VAR_29 << 16);

 FUNC_15(VAR_6, 0x00c040, 0xc000c000, 0x0000c000);


 FUNC_15(VAR_6, 0x004008, 0x00004200, 0x00000200 |
   VAR_11->bios.rammap_00_16_40 << 14);
 FUNC_15(VAR_6, 0x00400c, 0x0000ffff, (VAR_25 << 8) | VAR_26);
 FUNC_15(VAR_6, 0x004008, 0x91ff0000, VAR_20);


 if (VAR_7->device->chipset >= 0x92)
  FUNC_22(VAR_6, 0x100da0, VAR_19);

 FUNC_2(VAR_6, 0x18, !VAR_11->bios.ramcfg_FBVDDQ);
 FUNC_16(VAR_6, 64000);
 FUNC_16(VAR_6, 32000);

 FUNC_15(VAR_6, 0x004008, 0x00002200, 0x00002000);

 FUNC_22(VAR_6, 0x1002dc, 0x00000000);
 FUNC_22(VAR_6, 0x1002d4, 0x00000001);
 FUNC_22(VAR_6, 0x100210, 0x80000000);

 FUNC_16(VAR_6, 12000);

 switch (VAR_5->base.type) {
 case 129:
  FUNC_17(VAR_6, VAR_2[0]);
  FUNC_15(VAR_6, VAR_2[0], 0x000, 0x000);
  break;
 case 128:
  FUNC_17(VAR_6, VAR_2[1]);
  FUNC_22(VAR_6, VAR_2[1], VAR_5->base.mr[1]);
  FUNC_17(VAR_6, VAR_2[0]);
  FUNC_22(VAR_6, VAR_2[0], VAR_5->base.mr[0]);
  break;
 default:
  break;
 }

 FUNC_15(VAR_6, VAR_32[3], 0xffffffff, VAR_32[3]);
 FUNC_15(VAR_6, VAR_32[1], 0xffffffff, VAR_32[1]);
 FUNC_15(VAR_6, VAR_32[6], 0xffffffff, VAR_32[6]);
 FUNC_15(VAR_6, VAR_32[7], 0xffffffff, VAR_32[7]);
 FUNC_15(VAR_6, VAR_32[8], 0xffffffff, VAR_32[8]);
 FUNC_15(VAR_6, VAR_32[0], 0xffffffff, VAR_32[0]);
 FUNC_15(VAR_6, VAR_32[2], 0xffffffff, VAR_32[2]);
 FUNC_15(VAR_6, VAR_32[4], 0xffffffff, VAR_32[4]);
 FUNC_15(VAR_6, VAR_32[5], 0xffffffff, VAR_32[5]);

 if (!VAR_11->bios.ramcfg_00_03_02)
  FUNC_15(VAR_6, 0x10021c, 0x00010000, 0x00000000);
 FUNC_15(VAR_6, 0x100200, 0x00001000, !VAR_11->bios.ramcfg_00_04_02 << 12);


 VAR_21 = FUNC_18(VAR_6, 0x100710) & ~0x00000100;
 VAR_22 = FUNC_18(VAR_6, 0x100714) & ~0xf0000020;
 VAR_23 = FUNC_18(VAR_6, 0x100718) & ~0x00000100;
 VAR_24 = FUNC_18(VAR_6, 0x10071c) & ~0x00000100;
 if (VAR_7->device->chipset <= 0x96) {
  VAR_21 &= ~0x0000006e;
  VAR_22 &= ~0x00000100;

  if (!VAR_11->bios.ramcfg_00_03_08)
   VAR_21 |= 0x00000060;
  if (!VAR_11->bios.ramcfg_FBVDDQ)
   VAR_22 |= 0x00000100;
  if ( VAR_11->bios.ramcfg_00_04_04)
   VAR_21 |= 0x0000000e;
 } else {
  VAR_21 &= ~0x00000001;

  if (!VAR_11->bios.ramcfg_00_03_08)
   VAR_21 |= 0x00000001;
 }

 if ( VAR_11->bios.ramcfg_00_03_01)
  VAR_24 |= 0x00000100;
 if ( VAR_11->bios.ramcfg_00_03_02)
  VAR_21 |= 0x00000100;
 if (!VAR_11->bios.ramcfg_00_03_08)
  VAR_22 |= 0x00000020;
 if ( VAR_11->bios.ramcfg_00_04_04)
  VAR_22 |= 0x70000000;
 if ( VAR_11->bios.ramcfg_00_04_20)
  VAR_23 |= 0x00000100;

 FUNC_15(VAR_6, 0x100714, 0xffffffff, VAR_22);
 FUNC_15(VAR_6, 0x10071c, 0xffffffff, VAR_24);
 FUNC_15(VAR_6, 0x100718, 0xffffffff, VAR_23);
 FUNC_15(VAR_6, 0x100710, 0xffffffff, VAR_21);



 if (VAR_11->bios.rammap_00_16_20) {
  FUNC_22(VAR_6, 0x1005a0, VAR_11->bios.ramcfg_00_07 << 16 |
      VAR_11->bios.ramcfg_00_06 << 8 |
      VAR_11->bios.ramcfg_00_05);
  FUNC_22(VAR_6, 0x1005a4, VAR_11->bios.ramcfg_00_09 << 8 |
      VAR_11->bios.ramcfg_00_08);
  FUNC_15(VAR_6, 0x10053c, 0x00001000, 0x00000000);
 } else {
  FUNC_15(VAR_6, 0x10053c, 0x00001000, 0x00001000);
 }
 FUNC_15(VAR_6, VAR_2[1], 0xffffffff, VAR_5->base.mr[1]);

 if (!VAR_11->bios.timing_10_ODT)
  FUNC_2(VAR_6, 0x2e, 0);


 if (!VAR_11->bios.ramcfg_DLLoff)
  FUNC_13(VAR_6);

 FUNC_19(VAR_6, 0x10, 0x01);
 FUNC_20(VAR_6, 0x00, 0x00);
 FUNC_22(VAR_6, 0x611200, 0x00003330);
 FUNC_22(VAR_6, 0x002504, 0x00000000);

 if (VAR_11->bios.rammap_00_17_02)
  FUNC_15(VAR_6, 0x100200, 0x00000800, 0x00000800);
 if (!VAR_11->bios.rammap_00_16_40)
  FUNC_15(VAR_6, 0x004008, 0x00004000, 0x00000000);
 if (VAR_11->bios.ramcfg_00_03_02)
  FUNC_15(VAR_6, 0x10021c, 0x00010000, 0x00010000);
 if (VAR_7->device->chipset <= 0x96 && VAR_11->bios.ramcfg_00_03_02)
  FUNC_15(VAR_6, 0x100710, 0x00000200, 0x00000200);

 return 0;
}
