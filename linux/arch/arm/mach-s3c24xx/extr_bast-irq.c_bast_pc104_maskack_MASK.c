
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct irq_data {int dummy; } ;
struct TYPE_3__ {int (* irq_ack ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*) ;
 struct irq_desc* VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(struct irq_data *VAR_2)
{
 struct irq_desc *VAR_3 = VAR_1 + VAR_0;

 FUNC_0(VAR_2);
 VAR_3->irq_data.chip->irq_ack(&VAR_3->irq_data);
}
