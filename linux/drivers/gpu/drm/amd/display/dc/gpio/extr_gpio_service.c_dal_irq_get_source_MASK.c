
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio {int dummy; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_0 (struct gpio const*) ;
 int FUNC_1 (struct gpio const*) ;

enum dc_irq_source FUNC_2(
 const struct gpio *VAR_3)
{
 enum gpio_id VAR_4 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  return (enum dc_irq_source)(VAR_1 +
   FUNC_0(VAR_3));
 case 129:
  return (enum dc_irq_source)(VAR_0 +
   FUNC_0(VAR_3));
 default:
  return VAR_2;
 }
}
