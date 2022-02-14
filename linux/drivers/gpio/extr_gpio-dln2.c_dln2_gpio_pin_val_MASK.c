
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dln2_gpio_pin_val {scalar_t__ pin; int value; } ;
struct dln2_gpio_pin {scalar_t__ pin; } ;
struct dln2_gpio {int pdev; } ;
typedef int rsp ;
typedef int req ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int,struct dln2_gpio_pin*,int,struct dln2_gpio_pin_val*,int*) ;

__attribute__((used)) static int FUNC_2(struct dln2_gpio *VAR_1, int VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 struct dln2_gpio_pin VAR_5 = {
  .pin = FUNC_0(VAR_3),
 };
 struct dln2_gpio_pin_val VAR_6;
 int VAR_7 = sizeof(VAR_6);

 VAR_4 = FUNC_1(VAR_1->pdev, VAR_2, &VAR_5, sizeof(VAR_5), &VAR_6, &VAR_7);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_7 < sizeof(VAR_6) || VAR_5.pin != VAR_6.pin)
  return -VAR_0;

 return VAR_6.value;
}
