
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ runtime_status; int lock; scalar_t__ irq_safe; } ;
struct device {scalar_t__ parent; TYPE_1__ power; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_1)
{
 if (!FUNC_0(VAR_1)) {
  if (VAR_1->power.runtime_status == VAR_0)
   FUNC_2(VAR_1);
  if (VAR_1->power.irq_safe) {
   FUNC_3(&VAR_1->power.lock);
   VAR_1->power.irq_safe = 0;
   FUNC_4(&VAR_1->power.lock);
   if (VAR_1->parent)
    FUNC_1(VAR_1->parent);
  }
 }
}
