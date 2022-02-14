
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int irq_data; } ;
struct TYPE_2__ {int (* irq_ack ) (int *) ;} ;


 int FUNC_0 (struct irq_desc*) ;
 TYPE_1__* FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_0)
{
 FUNC_1(VAR_0)->irq_ack(&VAR_0->irq_data);
 FUNC_0(VAR_0);
}
