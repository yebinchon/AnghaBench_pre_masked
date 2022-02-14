
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct bcm_kona_gpio {int dummy; } ;


 int FUNC_0 (struct bcm_kona_gpio*,unsigned int) ;
 struct bcm_kona_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct bcm_kona_gpio *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1);
}
