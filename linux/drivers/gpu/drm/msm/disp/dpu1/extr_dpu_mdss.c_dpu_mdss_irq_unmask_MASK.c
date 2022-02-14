
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int hwirq; } ;
struct TYPE_2__ {int enabled_mask; } ;
struct dpu_mdss {TYPE_1__ irq_controller; } ;


 struct dpu_mdss* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct dpu_mdss *VAR_1 = FUNC_0(VAR_0);


 FUNC_3();
 FUNC_1(VAR_0->hwirq, &VAR_1->irq_controller.enabled_mask);

 FUNC_2();
}
