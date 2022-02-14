
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ngpio; int bgpio_lock; } ;
struct grgpio_priv {int imask; int dev; TYPE_2__ gc; TYPE_1__* uirqs; struct grgpio_lirq* lirqs; } ;
struct grgpio_lirq {size_t index; int irq; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int uirq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct grgpio_priv *VAR_3 = VAR_2;
 int VAR_4 = VAR_3->gc.ngpio;
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_3->gc.bgpio_lock, VAR_5);





 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct grgpio_lirq *VAR_8 = &VAR_3->lirqs[VAR_6];

  if (VAR_3->imask & FUNC_0(VAR_6) && VAR_8->index >= 0 &&
      VAR_3->uirqs[VAR_8->index].uirq == VAR_1) {
   FUNC_2(VAR_8->irq);
   VAR_7 = 1;
  }
 }

 FUNC_4(&VAR_3->gc.bgpio_lock, VAR_5);

 if (!VAR_7)
  FUNC_1(VAR_3->dev, "No gpio line matched irq %d\n", VAR_1);

 return VAR_0;
}
