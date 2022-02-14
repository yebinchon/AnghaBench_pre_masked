
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct cht_wc_i2c_adap {int irq_mask; } ;


 int VAR_0 ;
 struct cht_wc_i2c_adap* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 struct cht_wc_i2c_adap *VAR_2 = FUNC_0(VAR_1);

 VAR_2->irq_mask |= VAR_0;
}
