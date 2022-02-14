
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct em_gio_priv {TYPE_1__ gpio_chip; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct em_gio_priv* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_0)
{
 struct em_gio_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->gpio_chip, FUNC_3(VAR_0));
 if (VAR_2) {
  FUNC_0(VAR_1->gpio_chip.parent,
   "unable to lock HW IRQ %lu for IRQ\n",
   FUNC_3(VAR_0));
  return VAR_2;
 }
 return 0;
}
