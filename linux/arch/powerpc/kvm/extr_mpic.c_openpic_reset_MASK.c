
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct openpic {int frr; int nb_irqs; int vid; int spve; int vector_mask; int max_irq; int ivpr_reset; scalar_t__ gcr; TYPE_3__* timers; TYPE_2__* dst; int idr_reset; TYPE_1__* src; int tfrr_reset; int tfrr; scalar_t__ pir; } ;
struct irq_queue {int dummy; } ;
struct TYPE_8__ {int next; } ;
struct TYPE_7__ {int tbcr; scalar_t__ tccr; } ;
struct TYPE_6__ {int ctpr; TYPE_4__ servicing; TYPE_4__ raised; } ;
struct TYPE_5__ {int ivpr; int type; int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (struct openpic*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct openpic *VAR_8)
{
 int VAR_9;

 VAR_8->gcr = VAR_2;

 VAR_8->frr = ((VAR_8->nb_irqs - 1) << VAR_0) |
     (VAR_8->vid << VAR_1);

 VAR_8->pir = 0;
 VAR_8->spve = -1 & VAR_8->vector_mask;
 VAR_8->tfrr = VAR_8->tfrr_reset;

 for (VAR_9 = 0; VAR_9 < VAR_8->max_irq; VAR_9++) {
  VAR_8->src[VAR_9].ivpr = VAR_8->ivpr_reset;

  switch (VAR_8->src[VAR_9].type) {
  case 128:
   VAR_8->src[VAR_9].level =
       !!(VAR_8->ivpr_reset & VAR_4);
   break;

  case 130:
   VAR_8->src[VAR_9].ivpr |= VAR_3;
   break;

  case 129:
   break;
  }

  FUNC_1(VAR_8, VAR_9, VAR_8->idr_reset);
 }

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8->dst[VAR_9].ctpr = 15;
  FUNC_0(&VAR_8->dst[VAR_9].raised, 0, sizeof(struct irq_queue));
  VAR_8->dst[VAR_9].raised.next = -1;
  FUNC_0(&VAR_8->dst[VAR_9].servicing, 0, sizeof(struct irq_queue));
  VAR_8->dst[VAR_9].servicing.next = -1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8->timers[VAR_9].tccr = 0;
  VAR_8->timers[VAR_9].tbcr = VAR_7;
 }

 VAR_8->gcr = 0;
}
