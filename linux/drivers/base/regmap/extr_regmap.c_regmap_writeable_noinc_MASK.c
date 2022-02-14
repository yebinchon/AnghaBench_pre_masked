
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int (* writeable_noinc_reg ) (int ,unsigned int) ;scalar_t__ wr_noinc_table; int dev; } ;


 int FUNC_0 (struct regmap*,unsigned int,scalar_t__) ;
 int FUNC_1 (int ,unsigned int) ;

bool FUNC_2(struct regmap *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->writeable_noinc_reg)
  return VAR_0->writeable_noinc_reg(VAR_0->dev, VAR_1);

 if (VAR_0->wr_noinc_table)
  return FUNC_0(VAR_0, VAR_1, VAR_0->wr_noinc_table);

 return 1;
}
