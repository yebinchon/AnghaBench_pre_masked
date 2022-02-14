
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dln2_gpio_pin_val {int value; int pin; } ;
struct dln2_gpio {int pdev; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,struct dln2_gpio_pin_val*,int) ;

__attribute__((used)) static int FUNC_2(struct dln2_gpio *VAR_1,
         unsigned int VAR_2, int VAR_3)
{
 struct dln2_gpio_pin_val VAR_4 = {
  .pin = FUNC_0(VAR_2),
  .value = VAR_3,
 };

 return FUNC_1(VAR_1->pdev, VAR_0, &VAR_4,
    sizeof(VAR_4));
}
