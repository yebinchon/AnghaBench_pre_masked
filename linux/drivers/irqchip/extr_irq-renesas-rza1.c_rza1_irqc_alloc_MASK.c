
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rza1_irqc_priv {TYPE_3__* map; TYPE_2__* dev; int chip; } ;
struct irq_fwspec {unsigned int* param; unsigned int param_count; int * fwnode; } ;
struct irq_domain {struct rza1_irqc_priv* host_data; } ;
struct TYPE_6__ {unsigned int args_count; unsigned int* args; } ;
struct TYPE_5__ {TYPE_1__* of_node; } ;
struct TYPE_4__ {int fwnode; } ;


 int FUNC_0 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int,int *,struct rza1_irqc_priv*) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, void *VAR_3)
{
 struct rza1_irqc_priv *VAR_4 = VAR_0->host_data;
 struct irq_fwspec *VAR_5 = VAR_3;
 unsigned int VAR_6 = VAR_5->param[0];
 struct irq_fwspec VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_6, &VAR_4->chip,
         VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_7.fwnode = &VAR_4->dev->of_node->fwnode;
 VAR_7.param_count = VAR_4->map[VAR_6].args_count;
 for (VAR_8 = 0; VAR_8 < VAR_7.param_count; VAR_8++)
  VAR_7.param[VAR_8] = VAR_4->map[VAR_6].args[VAR_8];

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_7);
}
