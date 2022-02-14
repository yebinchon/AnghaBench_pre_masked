
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bme680_calib {int par_h4; int par_h5; int par_h6; int par_h7; scalar_t__ par_h2; scalar_t__ par_h3; scalar_t__ par_h1; } ;
struct bme680_data {int t_fine; struct bme680_calib bme680; } ;
typedef int s32 ;


 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static u32 FUNC_1(struct bme680_data *VAR_0,
       u16 VAR_1)
{
 struct bme680_calib *VAR_2 = &VAR_0->bme680;
 s32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = (VAR_0->t_fine * 5 + 128) >> 8;
 VAR_3 = (VAR_1 - ((s32) ((s32) VAR_2->par_h1 * 16))) -
  (((VAR_9 * (s32) VAR_2->par_h3) / 100) >> 1);
 VAR_4 = ((s32) VAR_2->par_h2 *
  (((VAR_9 * VAR_2->par_h4) / 100) +
   (((VAR_9 * ((VAR_9 * VAR_2->par_h5) / 100))
     >> 6) / 100) + (1 << 14))) >> 10;
 VAR_5 = VAR_3 * VAR_4;
 VAR_6 = VAR_2->par_h6 << 7;
 VAR_6 = (VAR_6 + ((VAR_9 * VAR_2->par_h7) / 100)) >> 4;
 VAR_7 = ((VAR_5 >> 14) * (VAR_5 >> 14)) >> 10;
 VAR_8 = (VAR_6 * VAR_7) >> 1;
 VAR_10 = (((VAR_5 + VAR_8) >> 10) * 1000) >> 12;

 VAR_10 = FUNC_0(VAR_10, 0, 100000);

 return VAR_10;
}
