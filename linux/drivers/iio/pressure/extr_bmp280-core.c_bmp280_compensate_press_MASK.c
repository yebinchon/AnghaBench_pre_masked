
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bmp280_calib {scalar_t__ P7; scalar_t__ P8; scalar_t__ P9; scalar_t__ P1; scalar_t__ P2; scalar_t__ P3; scalar_t__ P4; scalar_t__ P5; scalar_t__ P6; } ;
struct TYPE_2__ {struct bmp280_calib bmp280; } ;
struct bmp280_data {scalar_t__ t_fine; TYPE_1__ calib; } ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u32 FUNC_1(struct bmp280_data *VAR_0,
       s32 VAR_1)
{
 s64 VAR_2, VAR_3, VAR_4;
 struct bmp280_calib *VAR_5 = &VAR_0->calib.bmp280;

 VAR_2 = ((s64)VAR_0->t_fine) - 128000;
 VAR_3 = VAR_2 * VAR_2 * (s64)VAR_5->P6;
 VAR_3 += (VAR_2 * (s64)VAR_5->P5) << 17;
 VAR_3 += ((s64)VAR_5->P4) << 35;
 VAR_2 = ((VAR_2 * VAR_2 * (s64)VAR_5->P3) >> 8) +
  ((VAR_2 * (s64)VAR_5->P2) << 12);
 VAR_2 = ((((s64)1) << 47) + VAR_2) * ((s64)VAR_5->P1) >> 33;

 if (VAR_2 == 0)
  return 0;

 VAR_4 = ((((s64)1048576 - VAR_1) << 31) - VAR_3) * 3125;
 VAR_4 = FUNC_0(VAR_4, VAR_2);
 VAR_2 = (((s64)VAR_5->P9) * (VAR_4 >> 13) * (VAR_4 >> 13)) >> 25;
 VAR_3 = ((s64)(VAR_5->P8) * VAR_4) >> 19;
 VAR_4 = ((VAR_4 + VAR_2 + VAR_3) >> 8) + (((s64)VAR_5->P7) << 4);

 return (u32)VAR_4;
}
