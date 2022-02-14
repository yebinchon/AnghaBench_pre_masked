
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gpio_chip {int dummy; } ;
struct da9052_gpio {struct da9052* da9052; } ;
struct da9052 {int irq_data; } ;


 scalar_t__ VAR_0 ;
 struct da9052_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, u32 VAR_2)
{
 struct da9052_gpio *VAR_3 = FUNC_0(VAR_1);
 struct da9052 *VAR_4 = VAR_3->da9052;

 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->irq_data, VAR_0 + VAR_2);

 return VAR_5;
}
