
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct irq_chip* host_data; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct irq_chip*,int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_1, unsigned int VAR_2,
       irq_hw_number_t VAR_3)
{
 struct irq_chip *VAR_4 = VAR_1->host_data;

 FUNC_0(VAR_2, VAR_4, VAR_0);

 return 0;
}
