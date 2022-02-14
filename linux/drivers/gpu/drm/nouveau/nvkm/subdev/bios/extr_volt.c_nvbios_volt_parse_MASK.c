
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_volt {int vidmask; int ranged; int base; int step; int min; int max; int pwm_freq; int pwm_range; void* type; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvbios_volt*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 void* FUNC_4 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_5 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct nvkm_bios*,int*,int*,int*,int*) ;

u32
FUNC_7(struct nvkm_bios *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6,
    struct nvbios_volt *VAR_7)
{
 u32 VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_7, 0x00, sizeof(*VAR_7));
 switch (!!VAR_8 * *VAR_3) {
 case 0x12:
  VAR_7->type = VAR_0;
  VAR_7->vidmask = FUNC_3(VAR_2, VAR_8 + 0x04);
  VAR_7->ranged = 0;
  break;
 case 0x20:
  VAR_7->type = VAR_0;
  VAR_7->vidmask = FUNC_3(VAR_2, VAR_8 + 0x05);
  VAR_7->ranged = 0;
  break;
 case 0x30:
  VAR_7->type = VAR_0;
  VAR_7->vidmask = FUNC_3(VAR_2, VAR_8 + 0x04);
  VAR_7->ranged = 0;
  break;
 case 0x40:
  VAR_7->type = VAR_0;
  VAR_7->base = FUNC_5(VAR_2, VAR_8 + 0x04);
  VAR_7->step = FUNC_4(VAR_2, VAR_8 + 0x08);
  VAR_7->vidmask = FUNC_3(VAR_2, VAR_8 + 0x0b);
  VAR_7->ranged = 1;
  VAR_7->min = FUNC_2(VAR_7->base,
        VAR_7->base + VAR_7->step * VAR_7->vidmask);
  VAR_7->max = FUNC_5(VAR_2, VAR_8 + 0x0e);
  if (!VAR_7->max)
   VAR_7->max = FUNC_0(VAR_7->base, VAR_7->base + VAR_7->step * VAR_7->vidmask);
  break;
 case 0x50:
  VAR_7->min = FUNC_5(VAR_2, VAR_8 + 0x0a);
  VAR_7->max = FUNC_5(VAR_2, VAR_8 + 0x0e);
  VAR_7->base = FUNC_5(VAR_2, VAR_8 + 0x12) & 0x00ffffff;


  if (FUNC_5(VAR_2, VAR_8 + 0x4) & 1) {
   VAR_7->type = VAR_1;
   VAR_7->pwm_freq = FUNC_5(VAR_2, VAR_8 + 0x5) / 1000;
   VAR_7->pwm_range = FUNC_5(VAR_2, VAR_8 + 0x16);
  } else {
   VAR_7->type = VAR_0;
   VAR_7->vidmask = FUNC_3(VAR_2, VAR_8 + 0x06);
   VAR_7->step = FUNC_4(VAR_2, VAR_8 + 0x16);
   VAR_7->ranged =
    !!(FUNC_3(VAR_2, VAR_8 + 0x4) & 0x2);
  }
  break;
 }
 return VAR_8;
}
