
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dln2_gpio_pin_val {unsigned int value; int pin; } ;
struct dln2_gpio {int output_enabled; int pdev; } ;
typedef int req ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,struct dln2_gpio_pin_val*,int) ;
 struct dln2_gpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3,
       unsigned VAR_4)
{
 struct dln2_gpio *VAR_5 = FUNC_3(VAR_2);
 struct dln2_gpio_pin_val VAR_6 = {
  .pin = FUNC_1(VAR_3),
  .value = VAR_4,
 };
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->pdev, VAR_1,
          &VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4 == VAR_0)
  FUNC_4(VAR_3, VAR_5->output_enabled);
 else
  FUNC_0(VAR_3, VAR_5->output_enabled);

 return VAR_7;
}
