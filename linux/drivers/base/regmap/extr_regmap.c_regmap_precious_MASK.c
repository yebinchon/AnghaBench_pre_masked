
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int (* precious_reg ) (int ,unsigned int) ;scalar_t__ precious_table; int dev; } ;


 int FUNC_0 (struct regmap*,unsigned int,scalar_t__) ;
 int FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

bool FUNC_3(struct regmap *VAR_0, unsigned int VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

 if (VAR_0->precious_reg)
  return VAR_0->precious_reg(VAR_0->dev, VAR_1);

 if (VAR_0->precious_table)
  return FUNC_0(VAR_0, VAR_1, VAR_0->precious_table);

 return 0;
}
