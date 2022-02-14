
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rza1_irqc_priv {int dummy; } ;
struct irq_data {TYPE_1__* domain; } ;
struct TYPE_2__ {struct rza1_irqc_priv* host_data; } ;



__attribute__((used)) static struct rza1_irqc_priv *FUNC_0(struct irq_data *VAR_0)
{
 return VAR_0->domain->host_data;
}
