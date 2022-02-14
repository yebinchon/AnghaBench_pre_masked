
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int can_wakeup; int entry; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

void FUNC_5(struct device *VAR_0, bool VAR_1)
{
 if (!!VAR_0->power.can_wakeup == !!VAR_1)
  return;

 VAR_0->power.can_wakeup = VAR_1;
 if (FUNC_1(VAR_0) && !FUNC_2(&VAR_0->power.entry)) {
  if (VAR_1) {
   int VAR_2 = FUNC_3(VAR_0);

   if (VAR_2)
    FUNC_0(VAR_0, "Wakeup sysfs attributes not added\n");
  } else {
   FUNC_4(VAR_0);
  }
 }
}
