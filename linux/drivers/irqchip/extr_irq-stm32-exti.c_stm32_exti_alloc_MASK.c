
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int * param; } ;
struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (struct irq_domain*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, void *VAR_3)
{
 struct irq_fwspec *VAR_4 = VAR_3;
 irq_hw_number_t VAR_5;

 VAR_5 = VAR_4->param[0];

 FUNC_0(VAR_0, VAR_1, VAR_5);

 return 0;
}
