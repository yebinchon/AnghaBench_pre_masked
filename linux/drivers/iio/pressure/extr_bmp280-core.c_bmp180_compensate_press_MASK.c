
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bmp180_calib {int B2; int AC2; int AC3; int B1; int AC4; scalar_t__ AC1; } ;
struct TYPE_2__ {struct bmp180_calib bmp180; } ;
struct bmp280_data {int oversampling_press; int t_fine; TYPE_1__ calib; } ;
typedef int s32 ;



__attribute__((used)) static u32 FUNC_0(struct bmp280_data *VAR_0, s32 VAR_1)
{
 s32 VAR_2, VAR_3, VAR_4, VAR_5;
 s32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 s32 VAR_10 = VAR_0->oversampling_press;
 struct bmp180_calib *VAR_11 = &VAR_0->calib.bmp180;

 VAR_7 = VAR_0->t_fine - 4000;
 VAR_2 = (VAR_11->B2 * (VAR_7 * VAR_7 >> 12)) >> 11;
 VAR_3 = VAR_11->AC2 * VAR_7 >> 11;
 VAR_4 = VAR_2 + VAR_3;
 VAR_6 = ((((s32)VAR_11->AC1 * 4 + VAR_4) << VAR_10) + 2) / 4;
 VAR_2 = VAR_11->AC3 * VAR_7 >> 13;
 VAR_3 = (VAR_11->B1 * ((VAR_7 * VAR_7) >> 12)) >> 16;
 VAR_4 = (VAR_2 + VAR_3 + 2) >> 2;
 VAR_8 = VAR_11->AC4 * (u32)(VAR_4 + 32768) >> 15;
 VAR_9 = ((u32)VAR_1 - VAR_6) * (50000 >> VAR_10);
 if (VAR_9 < 0x80000000)
  VAR_5 = (VAR_9 * 2) / VAR_8;
 else
  VAR_5 = (VAR_9 / VAR_8) * 2;

 VAR_2 = (VAR_5 >> 8) * (VAR_5 >> 8);
 VAR_2 = (VAR_2 * 3038) >> 16;
 VAR_3 = (-7357 * VAR_5) >> 16;

 return VAR_5 + ((VAR_2 + VAR_3 + 3791) >> 4);
}
