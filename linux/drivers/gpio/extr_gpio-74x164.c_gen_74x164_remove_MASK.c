
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct gen_74x164_chip {int lock; int gpio_chip; int gpiod_oe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 struct gen_74x164_chip* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct gen_74x164_chip *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->gpiod_oe, 0);
 FUNC_0(&VAR_1->gpio_chip);
 FUNC_2(&VAR_1->lock);

 return 0;
}
