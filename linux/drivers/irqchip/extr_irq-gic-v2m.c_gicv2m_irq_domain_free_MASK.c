
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v2m_data {int dummy; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (struct v2m_data*,int ,unsigned int) ;
 struct v2m_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct irq_domain *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_3(VAR_0, VAR_1);
 struct v2m_data *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, VAR_3->hwirq, VAR_2);
 FUNC_2(VAR_0, VAR_1, VAR_2);
}
