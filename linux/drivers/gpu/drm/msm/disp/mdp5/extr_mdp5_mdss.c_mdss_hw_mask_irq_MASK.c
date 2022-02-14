
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled_mask; } ;
struct mdp5_mdss {TYPE_1__ irqcontroller; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ,int *) ;
 struct mdp5_mdss* FUNC_1 (struct irq_data*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct mdp5_mdss *VAR_1 = FUNC_1(VAR_0);

 FUNC_3();
 FUNC_0(VAR_0->hwirq, &VAR_1->irqcontroller.enabled_mask);
 FUNC_2();
}
