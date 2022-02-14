
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {struct gpio_desc* gpiod_rst; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct gpio_desc*) ;

__attribute__((used)) static void FUNC_7(struct i2c_client *VAR_3,
         struct sx9500_data *VAR_4)
{
 struct gpio_desc *VAR_5;
 struct device *VAR_6;
 int VAR_7;

 if (!VAR_3)
  return;

 VAR_6 = &VAR_3->dev;

 VAR_7 = FUNC_4(VAR_6, VAR_2);
 if (VAR_7)
  FUNC_1(VAR_6, "Unable to add GPIO mapping table\n");

 if (VAR_3->irq <= 0) {
  VAR_5 = FUNC_5(VAR_6, "interrupt", VAR_0);
  if (FUNC_0(VAR_5))
   FUNC_2(VAR_6, "gpio get irq failed\n");
  else
   VAR_3->irq = FUNC_6(VAR_5);
 }

 VAR_4->gpiod_rst = FUNC_5(VAR_6, "reset", VAR_1);
 if (FUNC_0(VAR_4->gpiod_rst)) {
  FUNC_3(VAR_6, "gpio get reset pin failed\n");
  VAR_4->gpiod_rst = ((void*)0);
 }
}
