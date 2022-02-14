
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_handler_data {int iclr; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 struct irq_handler_data* FUNC_0 (struct irq_data*) ;
 scalar_t__ FUNC_1 (struct irq_handler_data*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct irq_handler_data *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (FUNC_1(VAR_2))
  FUNC_2(VAR_0, VAR_2->iclr);
}
