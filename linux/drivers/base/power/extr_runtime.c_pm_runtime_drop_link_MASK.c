
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ links_count; int lock; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct device *VAR_0)
{
 FUNC_1(&VAR_0->power.lock);
 FUNC_0(VAR_0->power.links_count == 0);
 VAR_0->power.links_count--;
 FUNC_2(&VAR_0->power.lock);
}
