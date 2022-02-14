
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wakeup_source {int dummy; } ;
struct TYPE_2__ {int can_wakeup; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 struct wakeup_source* FUNC_0 (struct device*) ;
 int FUNC_1 (struct wakeup_source*) ;

int FUNC_2(struct device *VAR_1)
{
 struct wakeup_source *VAR_2;

 if (!VAR_1 || !VAR_1->power.can_wakeup)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_2);
 return 0;
}
