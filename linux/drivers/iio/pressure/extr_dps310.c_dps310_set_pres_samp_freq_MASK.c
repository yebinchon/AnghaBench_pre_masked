
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dps310_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dps310_data *VAR_3, int VAR_4)
{
 u8 VAR_5;

 if (VAR_4 < 0 || VAR_4 > 128)
  return -VAR_2;

 VAR_5 = FUNC_0(VAR_4) << 4;

 return FUNC_1(VAR_3->regmap, VAR_0,
      VAR_1, VAR_5);
}
