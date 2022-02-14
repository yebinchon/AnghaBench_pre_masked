
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;


 struct irq_data* FUNC_0 (struct irq_domain*,unsigned int) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_3(struct irq_domain *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct irq_data *VAR_4 = FUNC_0(VAR_0, VAR_1 + VAR_3);
  FUNC_2(VAR_1 + VAR_3, ((void*)0));
  FUNC_1(VAR_4);
 }
}
