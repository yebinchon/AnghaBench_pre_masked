
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;
struct irq_chip {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct irq_data*,int ) ;
 struct irq_data* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,struct irq_chip*,int ) ;
 scalar_t__* VAR_3 ;
 struct irq_chip VAR_4 ;
 struct irq_chip VAR_5 ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_6, unsigned int VAR_7, irq_hw_number_t VAR_8)
{
 struct irq_chip *VAR_9 = &VAR_5;
 struct irq_data *VAR_10;
 int VAR_11;

 if (VAR_8 < VAR_0)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  if (VAR_8 == VAR_3[VAR_11])
   VAR_9 = &VAR_4;

 VAR_10 = FUNC_2(VAR_7);

 FUNC_1(VAR_10, FUNC_0(0));

 FUNC_3(VAR_7, VAR_9, VAR_2);

 return 0;
}
