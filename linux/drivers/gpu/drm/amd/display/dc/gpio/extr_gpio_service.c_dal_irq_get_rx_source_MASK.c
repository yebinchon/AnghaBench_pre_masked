
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio {int dummy; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (struct gpio const*) ;
 int FUNC_1 (struct gpio const*) ;

enum dc_irq_source FUNC_2(
 const struct gpio *VAR_2)
{
 enum gpio_id VAR_3 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 128:
  return (enum dc_irq_source)(VAR_0 +
   FUNC_0(VAR_2));
 default:
  return VAR_1;
 }
}
