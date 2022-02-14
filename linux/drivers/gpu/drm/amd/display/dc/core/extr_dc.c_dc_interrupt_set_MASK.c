
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc {TYPE_1__* res_pool; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
struct TYPE_2__ {int irqs; } ;


 int FUNC_0 (int ,int,int) ;

bool FUNC_1(struct dc *VAR_0, enum dc_irq_source VAR_1, bool VAR_2)
{

 if (VAR_0 == ((void*)0))
  return 0;

 return FUNC_0(VAR_0->res_pool->irqs, VAR_1, VAR_2);
}
