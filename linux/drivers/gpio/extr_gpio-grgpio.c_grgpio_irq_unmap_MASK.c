
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {struct grgpio_priv* host_data; } ;
struct grgpio_uirq {scalar_t__ refcnt; int uirq; } ;
struct TYPE_2__ {int ngpio; int bgpio_lock; } ;
struct grgpio_priv {TYPE_1__ gc; struct grgpio_uirq* uirqs; struct grgpio_lirq* lirqs; } ;
struct grgpio_lirq {unsigned int irq; int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct grgpio_priv*) ;
 int FUNC_2 (struct grgpio_priv*,int,int ) ;
 int FUNC_3 (unsigned int,int *,int *) ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_domain *VAR_0, unsigned int VAR_1)
{
 struct grgpio_priv *VAR_2 = VAR_0->host_data;
 int VAR_3;
 struct grgpio_lirq *VAR_4;
 struct grgpio_uirq *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = VAR_2->gc.ngpio;
 int VAR_8;

 FUNC_3(VAR_1, ((void*)0), ((void*)0));
 FUNC_4(VAR_1, ((void*)0));

 FUNC_5(&VAR_2->gc.bgpio_lock, VAR_6);


 VAR_3 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_4 = &VAR_2->lirqs[VAR_8];
  if (VAR_4->irq == VAR_1) {
   FUNC_2(VAR_2, VAR_8, 0);
   VAR_4->irq = 0;
   VAR_3 = VAR_4->index;
   break;
  }
 }
 FUNC_0(VAR_3 < 0);

 if (VAR_3 >= 0) {
  VAR_5 = &VAR_2->uirqs[VAR_4->index];
  VAR_5->refcnt--;
  if (VAR_5->refcnt == 0)
   FUNC_1(VAR_5->uirq, VAR_2);
 }

 FUNC_6(&VAR_2->gc.bgpio_lock, VAR_6);
}
