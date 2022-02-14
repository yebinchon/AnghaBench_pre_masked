
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

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct rc5t583_gpio *VAR_3 = FUNC_1(VAR_1);
 struct device *VAR_4 = VAR_3->rc5t583->dev;

 FUNC_2(VAR_4, VAR_0, FUNC_0(VAR_2));
}
