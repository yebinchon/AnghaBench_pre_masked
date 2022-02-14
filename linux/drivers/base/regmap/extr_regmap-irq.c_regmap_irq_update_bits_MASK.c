
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_irq_chip_data {int map; TYPE_1__* chip; } ;
struct TYPE_2__ {scalar_t__ mask_writeonly; } ;


 int FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regmap_irq_chip_data *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3)
{
 if (VAR_0->chip->mask_writeonly)
  return FUNC_1(VAR_0->map, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_0->map, VAR_1, VAR_2, VAR_3);
}
