
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct irq_chip_generic {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*,unsigned int,unsigned int*) ;
 struct irq_chip_generic* FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (struct irq_chip_generic*,int ) ;
 int FUNC_4 (struct irq_chip_generic*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_0, unsigned VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2, FUNC_0(VAR_0->hwirq));
 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_2, VAR_3, FUNC_0(VAR_0->hwirq));

 return 0;
}
