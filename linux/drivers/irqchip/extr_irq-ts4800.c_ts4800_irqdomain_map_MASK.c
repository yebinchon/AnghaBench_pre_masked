
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts4800_irq_data {int irq_chip; } ;
struct irq_domain {struct ts4800_irq_data* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct ts4800_irq_data*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_1, unsigned int VAR_2,
    irq_hw_number_t VAR_3)
{
 struct ts4800_irq_data *VAR_4 = VAR_1->host_data;

 FUNC_0(VAR_2, &VAR_4->irq_chip, VAR_0);
 FUNC_1(VAR_2, VAR_4);
 FUNC_2(VAR_2);

 return 0;
}
