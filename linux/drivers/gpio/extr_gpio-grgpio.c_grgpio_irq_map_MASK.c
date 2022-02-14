
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {struct grgpio_priv* host_data; } ;
struct grgpio_uirq {scalar_t__ refcnt; int uirq; } ;
struct TYPE_2__ {int bgpio_lock; } ;
struct grgpio_priv {TYPE_1__ gc; int dev; struct grgpio_uirq* uirqs; struct grgpio_lirq* lirqs; } ;
struct grgpio_lirq {size_t index; unsigned int irq; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned int,int *,int ) ;
 int FUNC_4 (unsigned int,struct grgpio_priv*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ,int ,int ,int ,struct grgpio_priv*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct irq_domain *VAR_4, unsigned int VAR_5,
     irq_hw_number_t VAR_6)
{
 struct grgpio_priv *VAR_7 = VAR_4->host_data;
 struct grgpio_lirq *VAR_8;
 struct grgpio_uirq *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = VAR_6;
 int VAR_12 = 0;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = &VAR_7->lirqs[VAR_11];
 if (VAR_8->index < 0)
  return -VAR_0;

 FUNC_0(VAR_7->dev, "Mapping irq %d for gpio line %d\n",
  VAR_5, VAR_11);

 FUNC_7(&VAR_7->gc.bgpio_lock, VAR_10);


 VAR_8->irq = VAR_5;
 VAR_9 = &VAR_7->uirqs[VAR_8->index];
 if (VAR_9->refcnt == 0) {
  VAR_12 = FUNC_6(VAR_9->uirq, VAR_2, 0,
      FUNC_2(VAR_7->dev), VAR_7);
  if (VAR_12) {
   FUNC_1(VAR_7->dev,
    "Could not request underlying irq %d\n",
    VAR_9->uirq);

   FUNC_8(&VAR_7->gc.bgpio_lock, VAR_10);

   return VAR_12;
  }
 }
 VAR_9->refcnt++;

 FUNC_8(&VAR_7->gc.bgpio_lock, VAR_10);


 FUNC_4(VAR_5, VAR_7);
 FUNC_3(VAR_5, &VAR_1,
     VAR_3);
 FUNC_5(VAR_5);

 return VAR_12;
}
