
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bmp280_calib {int H4; int H5; int H6; int H2; scalar_t__ H1; scalar_t__ H3; } ;
struct TYPE_2__ {struct bmp280_calib bmp280; } ;
struct bmp280_data {scalar_t__ t_fine; TYPE_1__ calib; } ;
typedef int s32 ;



__attribute__((used)) static u32 FUNC_0(struct bmp280_data *VAR_0,
          s32 VAR_1)
{
 s32 VAR_2;
 struct bmp280_calib *VAR_3 = &VAR_0->calib.bmp280;

 VAR_2 = ((s32)VAR_0->t_fine) - (s32)76800;
 VAR_2 = ((((VAR_1 << 14) - (VAR_3->H4 << 20) - (VAR_3->H5 * VAR_2))
  + (s32)16384) >> 15) * (((((((VAR_2 * VAR_3->H6) >> 10)
  * (((VAR_2 * (s32)VAR_3->H3) >> 11) + (s32)32768)) >> 10)
  + (s32)2097152) * VAR_3->H2 + 8192) >> 14);
 VAR_2 -= ((((VAR_2 >> 15) * (VAR_2 >> 15)) >> 7) * (s32)VAR_3->H1) >> 4;

 return VAR_2 >> 12;
}
