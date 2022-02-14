
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2_gpio_data {scalar_t__ mode; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct ps2_gpio_data*) ;
 int FUNC_1 (struct ps2_gpio_data*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_0, void *VAR_1)
{
 struct ps2_gpio_data *VAR_2 = VAR_1;

 return VAR_2->mode ? FUNC_1(VAR_2) :
  FUNC_0(VAR_2);
}
