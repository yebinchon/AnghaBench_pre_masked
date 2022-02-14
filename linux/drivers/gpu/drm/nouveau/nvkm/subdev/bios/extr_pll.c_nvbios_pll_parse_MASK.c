
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
struct nvkm_device {int crystal; } ;
struct TYPE_6__ {int chip; } ;
struct nvkm_bios {int bmp_offset; TYPE_3__ version; struct nvkm_subdev subdev; } ;
struct TYPE_5__ {int min_freq; int max_freq; int min_inputfreq; int max_inputfreq; int min_n; int max_n; int min_m; int max_m; } ;
struct TYPE_4__ {int min_freq; int max_freq; int min_inputfreq; int max_inputfreq; int min_n; int max_n; int min_m; int max_m; } ;
struct nvbios_pll {int type; int reg; int max_p; int max_p_usable; int refclk; TYPE_2__ vco1; void* min_p; void* bias_p; TYPE_1__ vco2; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_bios*) ;
 int FUNC_1 (struct nvbios_pll*,int ,int) ;
 void* FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (struct nvkm_bios*,int) ;
 void* FUNC_4 (struct nvkm_bios*,int) ;
 int FUNC_5 (struct nvkm_subdev*,char*,int) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (struct nvkm_device*,int ,int) ;
 int FUNC_8 (struct nvkm_bios*,int,int*,int*,int*) ;
 int FUNC_9 (struct nvkm_bios*,int,int*,int*,int*) ;

int
FUNC_10(struct nvkm_bios *VAR_4, u32 VAR_5, struct nvbios_pll *VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_4->subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 u8 VAR_9, VAR_10;
 u32 VAR_11 = VAR_5;
 u32 VAR_12;

 if (VAR_5 > VAR_3) {
  VAR_11 = VAR_5;
  VAR_12 = FUNC_8(VAR_4, VAR_11, &VAR_5, &VAR_9, &VAR_10);
 } else {
  VAR_12 = FUNC_9(VAR_4, VAR_5, &VAR_11, &VAR_9, &VAR_10);
 }

 if (VAR_9 && !VAR_12)
  return -VAR_1;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->type = VAR_5;
 VAR_6->reg = VAR_11;

 switch (VAR_9) {
 case 0x00:
  break;
 case 0x10:
 case 0x11:
  VAR_6->vco1.min_freq = FUNC_4(VAR_4, VAR_12 + 0);
  VAR_6->vco1.max_freq = FUNC_4(VAR_4, VAR_12 + 4);
  VAR_6->vco2.min_freq = FUNC_4(VAR_4, VAR_12 + 8);
  VAR_6->vco2.max_freq = FUNC_4(VAR_4, VAR_12 + 12);
  VAR_6->vco1.min_inputfreq = FUNC_4(VAR_4, VAR_12 + 16);
  VAR_6->vco2.min_inputfreq = FUNC_4(VAR_4, VAR_12 + 20);
  VAR_6->vco1.max_inputfreq = VAR_2;
  VAR_6->vco2.max_inputfreq = VAR_2;

  VAR_6->max_p = 0x7;
  VAR_6->max_p_usable = 0x6;


  switch (VAR_4->version.chip) {
  case 0x36:
   VAR_6->vco1.min_n = 0x5;
   break;
  default:
   VAR_6->vco1.min_n = 0x1;
   break;
  }
  VAR_6->vco1.max_n = 0xff;
  VAR_6->vco1.min_m = 0x1;
  VAR_6->vco1.max_m = 0xd;







  VAR_6->vco2.min_n = 0x4;
  switch (VAR_4->version.chip) {
  case 0x30:
  case 0x35:
   VAR_6->vco2.max_n = 0x1f;
   break;
  default:
   VAR_6->vco2.max_n = 0x28;
   break;
  }
  VAR_6->vco2.min_m = 0x1;
  VAR_6->vco2.max_m = 0x4;
  break;
 case 0x20:
 case 0x21:
  VAR_6->vco1.min_freq = FUNC_3(VAR_4, VAR_12 + 4) * 1000;
  VAR_6->vco1.max_freq = FUNC_3(VAR_4, VAR_12 + 6) * 1000;
  VAR_6->vco2.min_freq = FUNC_3(VAR_4, VAR_12 + 8) * 1000;
  VAR_6->vco2.max_freq = FUNC_3(VAR_4, VAR_12 + 10) * 1000;
  VAR_6->vco1.min_inputfreq = FUNC_3(VAR_4, VAR_12 + 12) * 1000;
  VAR_6->vco2.min_inputfreq = FUNC_3(VAR_4, VAR_12 + 14) * 1000;
  VAR_6->vco1.max_inputfreq = FUNC_3(VAR_4, VAR_12 + 16) * 1000;
  VAR_6->vco2.max_inputfreq = FUNC_3(VAR_4, VAR_12 + 18) * 1000;
  VAR_6->vco1.min_n = FUNC_2(VAR_4, VAR_12 + 20);
  VAR_6->vco1.max_n = FUNC_2(VAR_4, VAR_12 + 21);
  VAR_6->vco1.min_m = FUNC_2(VAR_4, VAR_12 + 22);
  VAR_6->vco1.max_m = FUNC_2(VAR_4, VAR_12 + 23);
  VAR_6->vco2.min_n = FUNC_2(VAR_4, VAR_12 + 24);
  VAR_6->vco2.max_n = FUNC_2(VAR_4, VAR_12 + 25);
  VAR_6->vco2.min_m = FUNC_2(VAR_4, VAR_12 + 26);
  VAR_6->vco2.max_m = FUNC_2(VAR_4, VAR_12 + 27);

  VAR_6->max_p = FUNC_2(VAR_4, VAR_12 + 29);
  VAR_6->max_p_usable = VAR_6->max_p;
  if (VAR_4->version.chip < 0x60)
   VAR_6->max_p_usable = 0x6;
  VAR_6->bias_p = FUNC_2(VAR_4, VAR_12 + 30);

  if (VAR_10 > 0x22)
   VAR_6->refclk = FUNC_4(VAR_4, VAR_12 + 31);
  break;
 case 0x30:
  VAR_12 = FUNC_3(VAR_4, VAR_12 + 1);

  VAR_6->vco1.min_freq = FUNC_3(VAR_4, VAR_12 + 0) * 1000;
  VAR_6->vco1.max_freq = FUNC_3(VAR_4, VAR_12 + 2) * 1000;
  VAR_6->vco2.min_freq = FUNC_3(VAR_4, VAR_12 + 4) * 1000;
  VAR_6->vco2.max_freq = FUNC_3(VAR_4, VAR_12 + 6) * 1000;
  VAR_6->vco1.min_inputfreq = FUNC_3(VAR_4, VAR_12 + 8) * 1000;
  VAR_6->vco2.min_inputfreq = FUNC_3(VAR_4, VAR_12 + 10) * 1000;
  VAR_6->vco1.max_inputfreq = FUNC_3(VAR_4, VAR_12 + 12) * 1000;
  VAR_6->vco2.max_inputfreq = FUNC_3(VAR_4, VAR_12 + 14) * 1000;
  VAR_6->vco1.min_n = FUNC_2(VAR_4, VAR_12 + 16);
  VAR_6->vco1.max_n = FUNC_2(VAR_4, VAR_12 + 17);
  VAR_6->vco1.min_m = FUNC_2(VAR_4, VAR_12 + 18);
  VAR_6->vco1.max_m = FUNC_2(VAR_4, VAR_12 + 19);
  VAR_6->vco2.min_n = FUNC_2(VAR_4, VAR_12 + 20);
  VAR_6->vco2.max_n = FUNC_2(VAR_4, VAR_12 + 21);
  VAR_6->vco2.min_m = FUNC_2(VAR_4, VAR_12 + 22);
  VAR_6->vco2.max_m = FUNC_2(VAR_4, VAR_12 + 23);
  VAR_6->max_p_usable = VAR_6->max_p = FUNC_2(VAR_4, VAR_12 + 25);
  VAR_6->bias_p = FUNC_2(VAR_4, VAR_12 + 27);
  VAR_6->refclk = FUNC_4(VAR_4, VAR_12 + 28);
  break;
 case 0x40:
  VAR_6->refclk = FUNC_3(VAR_4, VAR_12 + 9) * 1000;
  VAR_12 = FUNC_3(VAR_4, VAR_12 + 1);

  VAR_6->vco1.min_freq = FUNC_3(VAR_4, VAR_12 + 0) * 1000;
  VAR_6->vco1.max_freq = FUNC_3(VAR_4, VAR_12 + 2) * 1000;
  VAR_6->vco1.min_inputfreq = FUNC_3(VAR_4, VAR_12 + 4) * 1000;
  VAR_6->vco1.max_inputfreq = FUNC_3(VAR_4, VAR_12 + 6) * 1000;
  VAR_6->vco1.min_m = FUNC_2(VAR_4, VAR_12 + 8);
  VAR_6->vco1.max_m = FUNC_2(VAR_4, VAR_12 + 9);
  VAR_6->vco1.min_n = FUNC_2(VAR_4, VAR_12 + 10);
  VAR_6->vco1.max_n = FUNC_2(VAR_4, VAR_12 + 11);
  VAR_6->min_p = FUNC_2(VAR_4, VAR_12 + 12);
  VAR_6->max_p = FUNC_2(VAR_4, VAR_12 + 13);
  break;
 case 0x50:
  VAR_6->refclk = FUNC_3(VAR_4, VAR_12 + 1) * 1000;

  VAR_6->vco1.min_freq = FUNC_3(VAR_4, VAR_12 + 5) * 1000;
  VAR_6->vco1.max_freq = FUNC_3(VAR_4, VAR_12 + 7) * 1000;
  VAR_6->vco1.min_inputfreq = FUNC_3(VAR_4, VAR_12 + 9) * 1000;
  VAR_6->vco1.max_inputfreq = FUNC_3(VAR_4, VAR_12 + 11) * 1000;
  VAR_6->vco1.min_m = FUNC_2(VAR_4, VAR_12 + 13);
  VAR_6->vco1.max_m = FUNC_2(VAR_4, VAR_12 + 14);
  VAR_6->vco1.min_n = FUNC_2(VAR_4, VAR_12 + 15);
  VAR_6->vco1.max_n = FUNC_2(VAR_4, VAR_12 + 16);
  VAR_6->min_p = FUNC_2(VAR_4, VAR_12 + 17);
  VAR_6->max_p = FUNC_2(VAR_4, VAR_12 + 18);
  break;
 default:
  FUNC_5(VAR_7, "unknown pll limits version 0x%02x\n", VAR_9);
  return -VAR_0;
 }

 if (!VAR_6->refclk) {
  VAR_6->refclk = VAR_8->crystal;
  if (VAR_4->version.chip == 0x51) {
   u32 VAR_13 = FUNC_6(VAR_8, 0x680524);
   if ((VAR_6->reg == 0x680508 && VAR_13 & 0x20) ||
       (VAR_6->reg == 0x680520 && VAR_13 & 0x80)) {
    if (FUNC_7(VAR_8, 0, 0x27) < 0xa3)
     VAR_6->refclk = 200000;
    else
     VAR_6->refclk = 25000;
   }
  }
 }






 if (!VAR_6->vco1.max_freq) {
  VAR_6->vco1.max_freq = FUNC_4(VAR_4, VAR_4->bmp_offset + 67);
  VAR_6->vco1.min_freq = FUNC_4(VAR_4, VAR_4->bmp_offset + 71);
  if (FUNC_0(VAR_4) < 0x0506) {
   VAR_6->vco1.max_freq = 256000;
   VAR_6->vco1.min_freq = 128000;
  }

  VAR_6->vco1.min_inputfreq = 0;
  VAR_6->vco1.max_inputfreq = VAR_2;
  VAR_6->vco1.min_n = 0x1;
  VAR_6->vco1.max_n = 0xff;
  VAR_6->vco1.min_m = 0x1;

  if (VAR_8->crystal == 13500) {

   if (VAR_4->version.chip < 0x11)
    VAR_6->vco1.min_m = 0x7;
   VAR_6->vco1.max_m = 0xd;
  } else {
   if (VAR_4->version.chip < 0x11)
    VAR_6->vco1.min_m = 0x8;
   VAR_6->vco1.max_m = 0xe;
  }

  if (VAR_4->version.chip < 0x17 ||
      VAR_4->version.chip == 0x1a ||
      VAR_4->version.chip == 0x20)
   VAR_6->max_p = 4;
  else
   VAR_6->max_p = 5;
  VAR_6->max_p_usable = VAR_6->max_p;
 }

 return 0;
}
