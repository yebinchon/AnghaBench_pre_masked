
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_keys_button_data {TYPE_1__* b; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_keys_button_data*,int ,int ) ;
 int FUNC_1 (struct gpio_keys_button_data*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct gpio_keys_button_data *VAR_4 = (struct gpio_keys_button_data *) VAR_3;

 FUNC_0(VAR_4, VAR_4->b->type ?: VAR_0, FUNC_1(VAR_4));

 return VAR_1;
}
