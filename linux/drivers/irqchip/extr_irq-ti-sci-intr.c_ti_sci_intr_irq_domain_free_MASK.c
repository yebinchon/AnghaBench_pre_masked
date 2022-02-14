
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ti_sci_intr_irq_domain {int dst_irq; int dst_id; TYPE_3__* sci; } ;
struct irq_domain {struct irq_domain* parent; struct ti_sci_intr_irq_domain* host_data; } ;
struct irq_data {int hwirq; } ;
struct TYPE_4__ {int (* free_irq ) (TYPE_3__*,int ,int ,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ rm_irq_ops; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct irq_domain *VAR_0,
     unsigned int VAR_1, unsigned int VAR_2)
{
 struct ti_sci_intr_irq_domain *VAR_3 = VAR_0->host_data;
 struct irq_data *VAR_4, *VAR_5;
 u16 VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_0->parent, VAR_1);
 VAR_4 = FUNC_3(VAR_0, VAR_1);
 VAR_7 = FUNC_1(VAR_4->hwirq);
 VAR_6 = FUNC_0(VAR_4->hwirq);

 VAR_3->sci->ops.rm_irq_ops.free_irq(VAR_3->sci, VAR_6, VAR_7,
        VAR_3->dst_id, VAR_5->hwirq);
 FUNC_6(VAR_3->dst_irq, VAR_5->hwirq);
 FUNC_2(VAR_0, VAR_1, 1);
 FUNC_4(VAR_4);
}
