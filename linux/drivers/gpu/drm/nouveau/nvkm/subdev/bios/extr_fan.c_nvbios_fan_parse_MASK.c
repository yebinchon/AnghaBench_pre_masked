
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_therm_fan {int pwm_freq; void* max_duty; void* min_duty; int fan_mode; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nvkm_bios*,int ,int*,int*,int*,int*) ;
 void* FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_3(struct nvkm_bios *VAR_4, struct nvbios_therm_fan *VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8, VAR_9;

 u32 VAR_10 = FUNC_0(VAR_4, 0, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_10) {
  u8 VAR_11 = FUNC_1(VAR_4, VAR_10 + 0x00);
  switch (VAR_11) {
  case 0:
   VAR_5->type = VAR_2;
   break;
  case 1:
  case 2:

   VAR_5->type = VAR_1;
   break;
  default:
   VAR_5->type = VAR_3;
  }

  VAR_5->fan_mode = VAR_0;
  VAR_5->min_duty = FUNC_1(VAR_4, VAR_10 + 0x02);
  VAR_5->max_duty = FUNC_1(VAR_4, VAR_10 + 0x03);

  VAR_5->pwm_freq = FUNC_2(VAR_4, VAR_10 + 0x0b) & 0xffffff;
 }

 return VAR_10;
}
