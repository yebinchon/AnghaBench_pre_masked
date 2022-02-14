
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dps310_data {int regmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct dps310_data *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0->regmap, 0x32, &VAR_2);
 if (VAR_1 < 0)
  return VAR_1;





 if (VAR_2 & FUNC_0(1))
  return 0;

 VAR_1 = FUNC_2(VAR_0->regmap, 0x0e, 0xA5);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0->regmap, 0x0f, 0x96);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0->regmap, 0x62, 0x02);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0->regmap, 0x0e, 0x00);
 if (VAR_1 < 0)
  return VAR_1;

 return FUNC_2(VAR_0->regmap, 0x0f, 0x00);
}
