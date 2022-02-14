
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_5__ {TYPE_4__* ops; } ;
typedef TYPE_1__ ecard_t ;
struct TYPE_6__ {int (* irqdisable ) (TYPE_1__*,int ) ;} ;


 TYPE_4__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 ecard_t *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2) {
  if (!VAR_2->ops)
   VAR_2->ops = &VAR_0;

  if (VAR_2->ops && VAR_2->ops->irqdisable)
   VAR_2->ops->irqdisable(VAR_2, VAR_1->irq);
 }
}
