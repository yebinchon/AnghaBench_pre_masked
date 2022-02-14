
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_perf_fan {int pwm_divisor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvkm_bios*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;

int
FUNC_2(struct nvkm_bios *VAR_1,
        struct nvbios_perf_fan *VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = FUNC_0(VAR_1, &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_3 >= 0x20 && VAR_3 < 0x40 && VAR_4 > 6)
  VAR_2->pwm_divisor = FUNC_1(VAR_1, VAR_9 + 6);
 else
  VAR_2->pwm_divisor = 0;

 return 0;
}
