
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_4)
{
 irq_hw_number_t VAR_5 = FUNC_0(VAR_4);

 if (!FUNC_1(VAR_5))
  FUNC_2(VAR_5, VAR_2 +
    VAR_1);
 else
  FUNC_2(VAR_5, VAR_3 +
    VAR_0);
}
