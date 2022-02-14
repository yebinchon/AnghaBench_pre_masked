
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_gpio_priv {int irq_chip; } ;
struct irq_fwspec {int param_count; int* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct uniphier_gpio_priv* host_data; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int ,int *,struct uniphier_gpio_priv*) ;
 int FUNC_3 (struct irq_domain*,void*,int *,unsigned int*) ;
 int FUNC_4 (struct uniphier_gpio_priv*,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5, void *VAR_6)
{
 struct uniphier_gpio_priv *VAR_7 = VAR_3->host_data;
 struct irq_fwspec VAR_8;
 irq_hw_number_t VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_5 != 1))
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_3, VAR_6, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_7, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_8.fwnode = VAR_3->parent->fwnode;
 VAR_8.param_count = 2;
 VAR_8.param[0] = VAR_11;
 VAR_8.param[1] = (VAR_10 == VAR_1) ?
      VAR_2 : VAR_10;

 VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_9,
         &VAR_7->irq_chip, VAR_7);
 if (VAR_11)
  return VAR_11;

 return FUNC_1(VAR_3, VAR_4, 1, &VAR_8);
}
