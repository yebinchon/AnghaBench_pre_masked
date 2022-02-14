
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct cht_wc_i2c_adap {int irqchip_lock; } ;


 struct cht_wc_i2c_adap* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct cht_wc_i2c_adap *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->irqchip_lock);
}
