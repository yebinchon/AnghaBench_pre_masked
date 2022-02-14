
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bmp280_calib {scalar_t__ T3; scalar_t__ T1; scalar_t__ T2; } ;
struct TYPE_2__ {struct bmp280_calib bmp280; } ;
struct bmp280_data {int t_fine; TYPE_1__ calib; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(struct bmp280_data *VAR_0,
      s32 VAR_1)
{
 s32 VAR_2, VAR_3;
 struct bmp280_calib *VAR_4 = &VAR_0->calib.bmp280;

 VAR_2 = (((VAR_1 >> 3) - ((s32)VAR_4->T1 << 1)) *
  ((s32)VAR_4->T2)) >> 11;
 VAR_3 = (((((VAR_1 >> 4) - ((s32)VAR_4->T1)) *
    ((VAR_1 >> 4) - ((s32)VAR_4->T1))) >> 12) *
  ((s32)VAR_4->T3)) >> 14;
 VAR_0->t_fine = VAR_2 + VAR_3;

 return (VAR_0->t_fine * 5 + 128) >> 8;
}
