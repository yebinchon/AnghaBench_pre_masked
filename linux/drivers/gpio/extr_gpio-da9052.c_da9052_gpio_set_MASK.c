
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct da9052_gpio {TYPE_1__* da9052; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 struct da9052_gpio* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_5, unsigned VAR_6, int VAR_7)
{
 struct da9052_gpio *VAR_8 = FUNC_3(VAR_5);
 int VAR_9;

 if (FUNC_0(VAR_6)) {
   VAR_9 = FUNC_1(VAR_8->da9052, (VAR_6 >> 1) +
      VAR_0,
      VAR_3,
      VAR_7 << VAR_4);
   if (VAR_9 != 0)
    FUNC_2(VAR_8->da9052->dev,
     "Failed to updated gpio odd reg,%d",
     VAR_9);
 } else {
   VAR_9 = FUNC_1(VAR_8->da9052, (VAR_6 >> 1) +
      VAR_0,
      VAR_1,
      VAR_7 << VAR_2);
   if (VAR_9 != 0)
    FUNC_2(VAR_8->da9052->dev,
     "Failed to updated gpio even reg,%d",
     VAR_9);
 }
}
