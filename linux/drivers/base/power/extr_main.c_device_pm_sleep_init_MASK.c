
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_prepared; int is_suspended; int is_noirq_suspended; int is_late_suspended; int entry; int * wakeup; int completion; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct device *VAR_0)
{
 VAR_0->power.is_prepared = 0;
 VAR_0->power.is_suspended = 0;
 VAR_0->power.is_noirq_suspended = 0;
 VAR_0->power.is_late_suspended = 0;
 FUNC_2(&VAR_0->power.completion);
 FUNC_1(&VAR_0->power.completion);
 VAR_0->power.wakeup = ((void*)0);
 FUNC_0(&VAR_0->power.entry);
}
