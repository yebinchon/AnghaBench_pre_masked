
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvebu_sei {int dev; TYPE_2__* caps; } ;
struct irq_domain {struct mvebu_sei* host_data; } ;
struct irq_data {scalar_t__ hwirq; } ;
struct TYPE_3__ {scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ cp_range; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct irq_domain*,unsigned int,int) ;
 struct irq_data* FUNC_2 (struct irq_domain*,unsigned int) ;
 int FUNC_3 (struct mvebu_sei*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_domain *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 struct mvebu_sei *VAR_3 = VAR_0->host_data;
 struct irq_data *VAR_4 = FUNC_2(VAR_0, VAR_1);

 if (VAR_2 != 1 || VAR_4->hwirq >= VAR_3->caps->cp_range.size) {
  FUNC_0(VAR_3->dev, "Invalid hwirq %lu\n", VAR_4->hwirq);
  return;
 }

 FUNC_3(VAR_3, VAR_4->hwirq);
 FUNC_1(VAR_0, VAR_1, 1);
}
