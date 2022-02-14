
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tangox_irq_chip {scalar_t__ ctl; } ;
struct irq_domain {struct tangox_irq_chip* host_data; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 unsigned int FUNC_2 (struct tangox_irq_chip*,scalar_t__) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct irq_domain* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (struct irq_domain*,unsigned int,int) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2)
{
 struct irq_domain *VAR_3 = FUNC_4(VAR_2);
 struct irq_chip *VAR_4 = FUNC_3(VAR_2);
 struct tangox_irq_chip *VAR_5 = VAR_3->host_data;
 unsigned int VAR_6, VAR_7;

 FUNC_0(VAR_4, VAR_2);

 VAR_6 = FUNC_2(VAR_5, VAR_5->ctl + VAR_1);
 VAR_7 = FUNC_2(VAR_5, VAR_5->ctl + VAR_0 + VAR_1);

 FUNC_5(VAR_3, VAR_6, 0);
 FUNC_5(VAR_3, VAR_7, 32);

 FUNC_1(VAR_4, VAR_2);
}
