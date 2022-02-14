
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
 int VAR_1 ;
 struct rc5t583_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_4 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3,
   int VAR_4)
{
 struct rc5t583_gpio *VAR_5 = FUNC_1(VAR_2);
 struct device *VAR_6 = VAR_5->rc5t583->dev;
 int VAR_7;

 FUNC_3(VAR_2, VAR_3, VAR_4);
 VAR_7 = FUNC_4(VAR_6, VAR_0, FUNC_0(VAR_3));
 if (VAR_7 < 0)
  return VAR_7;


 return FUNC_2(VAR_6, VAR_1, FUNC_0(VAR_3));
}
