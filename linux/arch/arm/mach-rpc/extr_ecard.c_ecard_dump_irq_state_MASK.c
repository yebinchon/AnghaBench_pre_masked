
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int slot_no; int irqaddr; int irqmask; TYPE_3__* ops; int claimed; struct TYPE_5__* next; } ;
typedef TYPE_1__ ecard_t ;
struct TYPE_6__ {scalar_t__ (* irqpending ) (TYPE_1__*) ;} ;


 TYPE_1__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void)
{
 ecard_t *VAR_2;

 FUNC_0("Expansion card IRQ state:\n");

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  const char *VAR_3;

  if (VAR_2->slot_no == 8)
   continue;

  VAR_3 = VAR_2->claimed ? "" : "not ";

  if (VAR_2->ops && VAR_2->ops->irqpending &&
      VAR_2->ops != &VAR_1)
   FUNC_0("  %d: %sclaimed irq %spending\n",
          VAR_2->slot_no, VAR_3,
          VAR_2->ops->irqpending(VAR_2) ? "" : "not ");
  else
   FUNC_0("  %d: %sclaimed irqaddr %p, mask = %02X, status = %02X\n",
          VAR_2->slot_no, VAR_3,
          VAR_2->irqaddr, VAR_2->irqmask, FUNC_1(VAR_2->irqaddr));
 }
}
