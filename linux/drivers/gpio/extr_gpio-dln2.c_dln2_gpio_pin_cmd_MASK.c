
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dln2_gpio_pin {int pin; } ;
struct dln2_gpio {int pdev; } ;
typedef int req ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int,struct dln2_gpio_pin*,int) ;

__attribute__((used)) static int FUNC_2(struct dln2_gpio *VAR_0, int VAR_1, unsigned VAR_2)
{
 struct dln2_gpio_pin VAR_3 = {
  .pin = FUNC_0(VAR_2),
 };

 return FUNC_1(VAR_0->pdev, VAR_1, &VAR_3, sizeof(VAR_3));
}
