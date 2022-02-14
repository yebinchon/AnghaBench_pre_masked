
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wakeup_source {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ wakeirq; struct wakeup_source* wakeup; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct wakeup_source *VAR_2)
{
 FUNC_1(&VAR_1->power.lock);
 if (VAR_1->power.wakeup) {
  FUNC_2(&VAR_1->power.lock);
  return -VAR_0;
 }
 VAR_1->power.wakeup = VAR_2;
 if (VAR_1->power.wakeirq)
  FUNC_0(VAR_1, VAR_1->power.wakeirq);
 FUNC_2(&VAR_1->power.lock);
 return 0;
}
