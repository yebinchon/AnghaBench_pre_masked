
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct ts5500_priv {int hwirq; int lock; TYPE_1__ gpio_chip; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct ts5500_priv *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->lock, VAR_1);
 if (VAR_0->hwirq == 7)
  FUNC_4(FUNC_0(7), 0x7a);
 else if (VAR_0->hwirq == 6)
  FUNC_4(FUNC_0(7), 0x7d);
 else if (VAR_0->hwirq == 1)
  FUNC_4(FUNC_0(6), 0x7d);
 else
  FUNC_1(VAR_0->gpio_chip.parent, "invalid hwirq %d\n",
   VAR_0->hwirq);
 FUNC_3(&VAR_0->lock, VAR_1);
}
