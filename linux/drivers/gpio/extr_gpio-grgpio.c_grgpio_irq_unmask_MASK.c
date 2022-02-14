
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int hwirq; } ;
struct TYPE_2__ {int bgpio_lock; } ;
struct grgpio_priv {TYPE_1__ gc; } ;


 int FUNC_0 (struct grgpio_priv*,int,int) ;
 struct grgpio_priv* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct grgpio_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = VAR_0->hwirq;
 unsigned long VAR_3;

 FUNC_2(&VAR_1->gc.bgpio_lock, VAR_3);

 FUNC_0(VAR_1, VAR_2, 1);

 FUNC_3(&VAR_1->gc.bgpio_lock, VAR_3);
}
