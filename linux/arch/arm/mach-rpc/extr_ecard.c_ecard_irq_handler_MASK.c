
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* chip; } ;
struct irq_desc {TYPE_4__ irq_data; } ;
struct TYPE_12__ {int slot_no; int irq; TYPE_1__* ops; int claimed; struct TYPE_12__* next; } ;
typedef TYPE_3__ ecard_t ;
struct TYPE_14__ {int (* irqpending ) (TYPE_3__*) ;} ;
struct TYPE_11__ {int (* irq_unmask ) (TYPE_4__*) ;int (* irq_mask ) (TYPE_4__*) ;} ;
struct TYPE_10__ {int (* irqpending ) (TYPE_3__*) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct irq_desc*) ;
 TYPE_8__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2)
{
 ecard_t *VAR_3;
 int VAR_4 = 0;

 VAR_2->irq_data.chip->irq_mask(&VAR_2->irq_data);
 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next) {
  int VAR_5;

  if (!VAR_3->claimed || !VAR_3->irq || VAR_3->slot_no == 8)
   continue;

  if (VAR_3->ops && VAR_3->ops->irqpending)
   VAR_5 = VAR_3->ops->irqpending(VAR_3);
  else
   VAR_5 = VAR_1.irqpending(VAR_3);

  if (VAR_5) {
   FUNC_1(VAR_3->irq);
   VAR_4 ++;
  }
 }
 VAR_2->irq_data.chip->irq_unmask(&VAR_2->irq_data);

 if (VAR_4 == 0)
  FUNC_0(VAR_2);
}
