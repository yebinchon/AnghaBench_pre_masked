
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct ft010_irq_data* host_data; } ;
struct ft010_irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct ft010_irq_data*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_2, unsigned int VAR_3,
    irq_hw_number_t VAR_4)
{
 struct ft010_irq_data *VAR_5 = VAR_2->host_data;

 FUNC_1(VAR_3, VAR_5);

 FUNC_0(VAR_3, &VAR_0, VAR_1);
 FUNC_2(VAR_3);

 return 0;
}
