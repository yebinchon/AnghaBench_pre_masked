
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bme680_calib {int par_gh3; int par_gh1; int par_gh2; int res_heat_range; int res_heat_val; } ;
struct bme680_data {struct bme680_calib bme680; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct bme680_data *VAR_1, u16 VAR_2)
{
 struct bme680_calib *VAR_3 = &VAR_1->bme680;
 s32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 u8 VAR_10;

 if (VAR_2 > 400)
  VAR_2 = 400;

 VAR_4 = (((s32) VAR_0 * VAR_3->par_gh3) / 1000) * 256;
 VAR_5 = (VAR_3->par_gh1 + 784) * (((((VAR_3->par_gh2 + 154009) *
      VAR_2 * 5) / 100)
      + 3276800) / 10);
 VAR_6 = VAR_4 + (VAR_5 / 2);
 VAR_7 = (VAR_6 / (VAR_3->res_heat_range + 4));
 VAR_8 = 131 * VAR_3->res_heat_val + 65536;
 VAR_9 = ((VAR_7 / VAR_8) - 250) * 34;
 VAR_10 = (VAR_9 + 50) / 100;

 return VAR_10;
}
