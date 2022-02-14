
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int irq; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct regmap_irq_chip_data*) ;

void FUNC_2(struct device *VAR_2, int VAR_3,
         struct regmap_irq_chip_data *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3 != VAR_4->irq);
 VAR_5 = FUNC_1(VAR_2, VAR_1,
       VAR_0, VAR_4);

 if (VAR_5 != 0)
  FUNC_0(VAR_5);
}
