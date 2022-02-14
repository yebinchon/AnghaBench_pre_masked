
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct brcmstb_gpio_bank {TYPE_2__* parent_priv; TYPE_1__ gc; } ;
typedef int irq_hw_number_t ;
struct TYPE_4__ {int gpio_base; } ;



__attribute__((used)) static int FUNC_0(irq_hw_number_t VAR_0,
     struct brcmstb_gpio_bank *VAR_1)
{
 return VAR_0 - (VAR_1->gc.base - VAR_1->parent_priv->gpio_base);
}
