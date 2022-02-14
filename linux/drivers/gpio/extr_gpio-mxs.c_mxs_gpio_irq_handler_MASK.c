
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mxs_gpio_port {int both_edges; int domain; scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_3__ {int (* irq_ack ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (struct mxs_gpio_port*) ;
 scalar_t__ FUNC_1 (struct mxs_gpio_port*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct mxs_gpio_port* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct mxs_gpio_port*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_0)
{
 u32 VAR_1;
 struct mxs_gpio_port *VAR_2 = FUNC_4(VAR_0);

 VAR_0->irq_data.chip->irq_ack(&VAR_0->irq_data);

 VAR_1 = FUNC_7(VAR_2->base + FUNC_1(VAR_2)) &
   FUNC_7(VAR_2->base + FUNC_0(VAR_2));

 while (VAR_1 != 0) {
  int VAR_3 = FUNC_2(VAR_1) - 1;
  if (VAR_2->both_edges & (1 << VAR_3))
   FUNC_6(VAR_2, VAR_3);

  FUNC_3(FUNC_5(VAR_2->domain, VAR_3));
  VAR_1 &= ~(1 << VAR_3);
 }
}
