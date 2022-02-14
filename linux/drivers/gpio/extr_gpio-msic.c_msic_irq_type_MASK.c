
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ngpio; } ;
struct msic_gpio {int irq_base; int trig_change_mask; unsigned int trig_type; TYPE_1__ chip; } ;
struct irq_data {int irq; } ;


 int VAR_0 ;
 struct msic_gpio* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_1, unsigned VAR_2)
{
 struct msic_gpio *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = VAR_1->irq - VAR_3->irq_base;

 if (VAR_4 >= VAR_3->chip.ngpio)
  return -VAR_0;


 VAR_3->trig_change_mask |= (1 << VAR_4);
 VAR_3->trig_type = VAR_2;

 return 0;
}
