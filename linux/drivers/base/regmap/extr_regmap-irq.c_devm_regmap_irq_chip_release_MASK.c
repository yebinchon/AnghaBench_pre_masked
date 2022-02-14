
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int irq; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,struct regmap_irq_chip_data*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct regmap_irq_chip_data *VAR_2 = *(struct regmap_irq_chip_data **)VAR_1;

 FUNC_0(VAR_2->irq, VAR_2);
}
