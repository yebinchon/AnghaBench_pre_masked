
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bme680_calib {int par_p6; int par_p5; int par_p4; int par_p3; int par_p2; int par_p1; int par_p9; int par_p8; int par_p10; int par_p7; } ;
struct bme680_data {int t_fine; struct bme680_calib bme680; } ;
typedef int s32 ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct bme680_data *VAR_1,
       u32 VAR_2)
{
 struct bme680_calib *VAR_3 = &VAR_1->bme680;
 s32 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = (VAR_1->t_fine >> 1) - 64000;
 VAR_5 = ((((VAR_4 >> 2) * (VAR_4 >> 2)) >> 11) * VAR_3->par_p6) >> 2;
 VAR_5 = VAR_5 + (VAR_4 * VAR_3->par_p5 << 1);
 VAR_5 = (VAR_5 >> 2) + (VAR_3->par_p4 << 16);
 VAR_4 = (((((VAR_4 >> 2) * (VAR_4 >> 2)) >> 13) *
   (VAR_3->par_p3 << 5)) >> 3) +
   ((VAR_3->par_p2 * VAR_4) >> 1);
 VAR_4 = VAR_4 >> 18;
 VAR_4 = ((32768 + VAR_4) * VAR_3->par_p1) >> 15;
 VAR_7 = 1048576 - VAR_2;
 VAR_7 = ((VAR_7 - (VAR_5 >> 12)) * 3125);

 if (VAR_7 >= VAR_0)
  VAR_7 = ((VAR_7 / (u32)VAR_4) << 1);
 else
  VAR_7 = ((VAR_7 << 1) / (u32)VAR_4);

 VAR_4 = (VAR_3->par_p9 * (((VAR_7 >> 3) *
   (VAR_7 >> 3)) >> 13)) >> 12;
 VAR_5 = ((VAR_7 >> 2) * VAR_3->par_p8) >> 13;
 VAR_6 = ((VAR_7 >> 8) * (VAR_7 >> 8) *
   (VAR_7 >> 8) * VAR_3->par_p10) >> 17;

 VAR_7 += (VAR_4 + VAR_5 + VAR_6 + (VAR_3->par_p7 << 7)) >> 4;

 return VAR_7;
}
