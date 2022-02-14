
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bmp180_calib {int AC6; int AC5; int MC; int MD; } ;
struct TYPE_2__ {struct bmp180_calib bmp180; } ;
struct bmp280_data {int t_fine; TYPE_1__ calib; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(struct bmp280_data *VAR_0, s32 VAR_1)
{
 s32 VAR_2, VAR_3;
 struct bmp180_calib *VAR_4 = &VAR_0->calib.bmp180;

 VAR_2 = ((VAR_1 - VAR_4->AC6) * VAR_4->AC5) >> 15;
 VAR_3 = (VAR_4->MC << 11) / (VAR_2 + VAR_4->MD);
 VAR_0->t_fine = VAR_2 + VAR_3;

 return (VAR_0->t_fine + 8) >> 4;
}
