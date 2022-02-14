
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct ti_sci_intr_irq_domain {int dst_irq; int dst_id; TYPE_4__* sci; scalar_t__ type; } ;
struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct ti_sci_intr_irq_domain* host_data; } ;
struct TYPE_6__ {int (* set_irq ) (TYPE_4__*,scalar_t__,scalar_t__,int ,scalar_t__) ;} ;
struct TYPE_7__ {TYPE_2__ rm_irq_ops; } ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_3 (struct irq_domain*,unsigned int,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct irq_domain *VAR_2,
         unsigned int VAR_3, u32 VAR_4)
{
 struct ti_sci_intr_irq_domain *VAR_5 = VAR_2->host_data;
 struct irq_fwspec VAR_6;
 u16 VAR_7, VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_1(VAR_4);

 VAR_9 = FUNC_5(VAR_5->dst_irq);
 if (VAR_9 == VAR_1)
  return -VAR_0;

 VAR_6.fwnode = VAR_2->parent->fwnode;
 VAR_6.param_count = 3;
 VAR_6.param[0] = 0;
 VAR_6.param[1] = VAR_9 - 32;
 VAR_6.param[2] = VAR_5->type;

 VAR_10 = FUNC_2(VAR_2, VAR_3, 1, &VAR_6);
 if (VAR_10)
  goto err_irqs;

 VAR_10 = VAR_5->sci->ops.rm_irq_ops.set_irq(VAR_5->sci, VAR_7, VAR_8,
      VAR_5->dst_id, VAR_9);
 if (VAR_10)
  goto err_msg;

 return 0;

err_msg:
 FUNC_3(VAR_2, VAR_3, 1);
err_irqs:
 FUNC_6(VAR_5->dst_irq, VAR_9);
 return VAR_10;
}
