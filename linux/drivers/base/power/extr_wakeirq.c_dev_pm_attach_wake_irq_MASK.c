
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wake_irq {int dummy; } ;
struct TYPE_2__ {int lock; struct wake_irq* wakeirq; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*,struct wake_irq*,char*) ;
 int FUNC_1 (struct device*,struct wake_irq*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, int VAR_3,
      struct wake_irq *VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_2 || !VAR_4)
  return -VAR_1;

 FUNC_2(&VAR_2->power.lock, VAR_5);
 if (FUNC_0(VAR_2, VAR_2->power.wakeirq,
     "wake irq already initialized\n")) {
  FUNC_3(&VAR_2->power.lock, VAR_5);
  return -VAR_0;
 }

 VAR_2->power.wakeirq = VAR_4;
 FUNC_1(VAR_2, VAR_4);

 FUNC_3(&VAR_2->power.lock, VAR_5);
 return 0;
}
