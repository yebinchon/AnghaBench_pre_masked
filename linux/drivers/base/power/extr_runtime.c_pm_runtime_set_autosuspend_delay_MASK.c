
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autosuspend_delay; int use_autosuspend; int lock; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,int,int) ;

void FUNC_3(struct device *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(&VAR_0->power.lock);
 VAR_2 = VAR_0->power.autosuspend_delay;
 VAR_3 = VAR_0->power.use_autosuspend;
 VAR_0->power.autosuspend_delay = VAR_1;
 FUNC_2(VAR_0, VAR_2, VAR_3);
 FUNC_1(&VAR_0->power.lock);
}
