
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_2 (struct irq_domain*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_domain *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6)
{
 struct irq_data *VAR_7 = FUNC_2(VAR_4, VAR_5);

 if (VAR_7->hwirq >= VAR_3 * VAR_0) {
  FUNC_3("Failed to teardown msi. Invalid hwirq %lu\n", VAR_7->hwirq);
  return;
 }

 FUNC_1(VAR_4, VAR_5, VAR_6);


 FUNC_4(&VAR_2);
 FUNC_0(VAR_7->hwirq, VAR_1);
 FUNC_5(&VAR_2);
}
