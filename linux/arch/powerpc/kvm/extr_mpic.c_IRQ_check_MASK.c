
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct openpic {int max_irq; TYPE_1__* src; } ;
struct irq_queue {int next; int priority; int queue; } ;
struct TYPE_2__ {int ivpr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct openpic *VAR_0, struct irq_queue *VAR_1)
{
 int VAR_2 = -1;
 int VAR_3 = -1;
 int VAR_4 = -1;

 for (;;) {
  VAR_2 = FUNC_1(VAR_1->queue, VAR_0->max_irq, VAR_2 + 1);
  if (VAR_2 == VAR_0->max_irq)
   break;

  FUNC_2("IRQ_check: irq %d set ivpr_pr=%d pr=%d\n",
   VAR_2, FUNC_0(VAR_0->src[VAR_2].ivpr), VAR_4);

  if (FUNC_0(VAR_0->src[VAR_2].ivpr) > VAR_4) {
   VAR_3 = VAR_2;
   VAR_4 = FUNC_0(VAR_0->src[VAR_2].ivpr);
  }
 }

 VAR_1->next = VAR_3;
 VAR_1->priority = VAR_4;
}
