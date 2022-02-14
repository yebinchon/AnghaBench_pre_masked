
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_safe; int lock; } ;
struct device {TYPE_1__ power; scalar_t__ parent; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct device *VAR_0)
{
 if (VAR_0->parent)
  FUNC_0(VAR_0->parent);
 FUNC_1(&VAR_0->power.lock);
 VAR_0->power.irq_safe = 1;
 FUNC_2(&VAR_0->power.lock);
}
