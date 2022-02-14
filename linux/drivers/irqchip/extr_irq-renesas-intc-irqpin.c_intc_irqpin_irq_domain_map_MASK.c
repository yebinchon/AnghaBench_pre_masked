
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {struct intc_irqpin_priv* host_data; } ;
struct intc_irqpin_priv {int irq_chip; TYPE_1__* irq; } ;
typedef size_t irq_hw_number_t ;
struct TYPE_2__ {unsigned int domain_irq; size_t hw_irq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct intc_irqpin_priv*) ;
 int FUNC_3 (unsigned int,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_3, unsigned int VAR_4,
          irq_hw_number_t VAR_5)
{
 struct intc_irqpin_priv *VAR_6 = VAR_3->host_data;

 VAR_6->irq[VAR_5].domain_irq = VAR_4;
 VAR_6->irq[VAR_5].hw_irq = VAR_5;

 FUNC_0(&VAR_6->irq[VAR_5], "map");
 FUNC_2(VAR_4, VAR_3->host_data);
 FUNC_3(VAR_4, &VAR_1,
         &VAR_2);
 FUNC_1(VAR_4, &VAR_6->irq_chip, VAR_0);
 return 0;
}
