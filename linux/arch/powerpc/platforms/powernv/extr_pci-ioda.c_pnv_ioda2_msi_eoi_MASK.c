
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_chip {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 struct irq_chip* FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_chip*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 int64_t VAR_1;
 unsigned int VAR_2 = (unsigned int)FUNC_3(VAR_0);
 struct irq_chip *VAR_3 = FUNC_2(VAR_0);

 VAR_1 = FUNC_4(VAR_3, VAR_2);
 FUNC_0(VAR_1);

 FUNC_1(VAR_0);
}
