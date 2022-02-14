
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct bd70528_gpio {TYPE_1__ chip; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (struct bd70528_gpio*,unsigned int) ;
 int FUNC_2 (struct bd70528_gpio*,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 struct bd70528_gpio* FUNC_4 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 struct bd70528_gpio *VAR_3 = FUNC_4(VAR_0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == 0)
  VAR_2 = FUNC_2(VAR_3, VAR_1);
 else if (VAR_2 == 1)
  VAR_2 = FUNC_1(VAR_3, VAR_1);
 else
  FUNC_3(VAR_3->chip.dev, "failed to read GPIO direction\n");

 return VAR_2;
}
