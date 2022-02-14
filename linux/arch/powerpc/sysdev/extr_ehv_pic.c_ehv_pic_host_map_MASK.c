
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct ehv_pic* host_data; } ;
struct irq_chip {int dummy; } ;
struct ehv_pic {struct irq_chip hc_irq; } ;
typedef size_t irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_chip VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_1 (unsigned int,struct irq_chip*) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_6, unsigned int VAR_7,
    irq_hw_number_t VAR_8)
{
 struct ehv_pic *VAR_9 = VAR_6->host_data;
 struct irq_chip *VAR_10;


 VAR_10 = &VAR_9->hc_irq;

 if (VAR_5)
  if (VAR_4[VAR_8] & VAR_0)
   VAR_10 = &VAR_2;

 FUNC_1(VAR_7, VAR_10);







 FUNC_0(VAR_7, VAR_10, VAR_3);


 FUNC_2(VAR_7, VAR_1);

 return 0;
}
