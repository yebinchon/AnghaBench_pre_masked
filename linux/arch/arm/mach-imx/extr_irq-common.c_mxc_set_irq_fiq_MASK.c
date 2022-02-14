
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc_extra_irq {int (* set_irq_fiq ) (int ,unsigned int) ;} ;
struct irq_data {int dummy; } ;
struct irq_chip_generic {struct mxc_extra_irq* private; } ;


 int VAR_0 ;
 struct irq_chip_generic* FUNC_0 (unsigned int) ;
 struct irq_data* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,unsigned int) ;

int FUNC_4(unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_chip_generic *VAR_3;
 struct mxc_extra_irq *VAR_4;
 int VAR_5;

 VAR_5 = -VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 && VAR_3->private) {
  VAR_4 = VAR_3->private;
  if (VAR_4->set_irq_fiq) {
   struct irq_data *VAR_6 = FUNC_1(VAR_1);
   VAR_5 = VAR_4->set_irq_fiq(FUNC_2(VAR_6), VAR_2);
  }
 }

 return VAR_5;
}
