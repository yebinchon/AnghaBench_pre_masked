
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int) ;
 struct irq_data* FUNC_1 (struct irq_domain*,unsigned int) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_4(struct irq_domain *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2)
{
 struct irq_data *VAR_3;

 FUNC_0(VAR_2 != 1);

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_1, ((void*)0));
 FUNC_2(VAR_3);
}
