
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ format_write; } ;
struct regmap {unsigned int max_register; int (* readable_reg ) (int ,unsigned int) ;scalar_t__ rd_table; int dev; TYPE_1__ format; int reg_read; } ;


 int FUNC_0 (struct regmap*,unsigned int,scalar_t__) ;
 int FUNC_1 (int ,unsigned int) ;

bool FUNC_2(struct regmap *VAR_0, unsigned int VAR_1)
{
 if (!VAR_0->reg_read)
  return 0;

 if (VAR_0->max_register && VAR_1 > VAR_0->max_register)
  return 0;

 if (VAR_0->format.format_write)
  return 0;

 if (VAR_0->readable_reg)
  return VAR_0->readable_reg(VAR_0->dev, VAR_1);

 if (VAR_0->rd_table)
  return FUNC_0(VAR_0, VAR_1, VAR_0->rd_table);

 return 1;
}
