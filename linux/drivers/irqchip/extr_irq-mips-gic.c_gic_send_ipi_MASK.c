
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1, unsigned int VAR_2)
{
 irq_hw_number_t VAR_3 = FUNC_0(FUNC_1(VAR_1));

 FUNC_2(VAR_0 | VAR_3);
}
