
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wakeup_source {int * wakeirq; } ;
struct TYPE_2__ {struct wakeup_source* wakeup; } ;
struct device {TYPE_1__ power; } ;



void FUNC_0(struct device *VAR_0)
{
 struct wakeup_source *VAR_1;

 VAR_1 = VAR_0->power.wakeup;
 if (VAR_1)
  VAR_1->wakeirq = ((void*)0);
}
