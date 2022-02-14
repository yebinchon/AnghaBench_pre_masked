
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc5t583_gpio {TYPE_1__* rc5t583; } ;
struct gpio_chip {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct rc5t583_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct rc5t583_gpio *VAR_4 = FUNC_1(VAR_1);
 struct device *VAR_5 = VAR_4->rc5t583->dev;
 if (VAR_3)
  FUNC_3(VAR_5, VAR_0, FUNC_0(VAR_2));
 else
  FUNC_2(VAR_5, VAR_0, FUNC_0(VAR_2));
}
