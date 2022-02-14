
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_callbacks; int lock; } ;
struct device {TYPE_1__ power; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device *VAR_0)
{
 FUNC_2(&VAR_0->power.lock);
 VAR_0->power.no_callbacks = 1;
 FUNC_3(&VAR_0->power.lock);
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0);
}
