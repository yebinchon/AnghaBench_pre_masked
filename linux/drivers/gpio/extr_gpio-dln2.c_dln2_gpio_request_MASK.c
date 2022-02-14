
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dln2_gpio_pin_val {scalar_t__ pin; int value; } ;
struct dln2_gpio_pin {scalar_t__ pin; } ;
struct dln2_gpio {int output_enabled; int pdev; } ;
typedef int rsp ;
typedef int req ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dln2_gpio*,int ,unsigned int) ;
 int FUNC_3 (int ,int ,struct dln2_gpio_pin*,int,struct dln2_gpio_pin_val*,int*) ;
 struct dln2_gpio* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_4, unsigned VAR_5)
{
 struct dln2_gpio *VAR_6 = FUNC_4(VAR_4);
 struct dln2_gpio_pin VAR_7 = {
  .pin = FUNC_1(VAR_5),
 };
 struct dln2_gpio_pin_val VAR_8;
 int VAR_9 = sizeof(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_1, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_6->pdev, VAR_2,
       &VAR_7, sizeof(VAR_7), &VAR_8, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_9 < sizeof(VAR_8) || VAR_7.pin != VAR_8.pin) {
  VAR_10 = -VAR_3;
  goto out_disable;
 }

 switch (VAR_8.value) {
 case 129:
  FUNC_0(VAR_5, VAR_6->output_enabled);
  return 0;
 case 128:
  FUNC_5(VAR_5, VAR_6->output_enabled);
  return 0;
 default:
  VAR_10 = -VAR_3;
  goto out_disable;
 }

out_disable:
 FUNC_2(VAR_6, VAR_0, VAR_5);
 return VAR_10;
}
