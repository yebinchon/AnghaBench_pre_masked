
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
struct dps310_data {int temp_raw; int regmap; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct dps310_data *VAR_1)
{
 int VAR_2;
 u8 VAR_3[3];
 s32 VAR_4;

 VAR_2 = FUNC_0(VAR_1->regmap, VAR_0, VAR_3, sizeof(VAR_3));
 if (VAR_2 < 0)
  return VAR_2;

 VAR_4 = (VAR_3[0] << 16) | (VAR_3[1] << 8) | VAR_3[2];
 VAR_1->temp_raw = FUNC_1(VAR_4, 23);

 return 0;
}
