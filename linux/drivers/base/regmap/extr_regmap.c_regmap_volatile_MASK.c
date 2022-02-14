
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format_write; } ;
struct regmap {int (* volatile_reg ) (int ,unsigned int) ;scalar_t__ cache_ops; scalar_t__ volatile_table; int dev; TYPE_1__ format; } ;


 int FUNC_0 (struct regmap*,unsigned int,scalar_t__) ;
 int FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

bool FUNC_3(struct regmap *VAR_0, unsigned int VAR_1)
{
 if (!VAR_0->format.format_write && !FUNC_1(VAR_0, VAR_1))
  return 0;

 if (VAR_0->volatile_reg)
  return VAR_0->volatile_reg(VAR_0->dev, VAR_1);

 if (VAR_0->volatile_table)
  return FUNC_0(VAR_0, VAR_1, VAR_0->volatile_table);

 if (VAR_0->cache_ops)
  return 0;
 else
  return 1;
}
