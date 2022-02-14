
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int mask; } ;
struct irq_chip_generic {int dummy; } ;


 int VAR_0 ;
 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 int FUNC_3 (struct irq_chip_generic*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(VAR_2);
 FUNC_3(VAR_2, VAR_1->mask, VAR_0);
 FUNC_2(VAR_2);

 return 0;
}
