
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int runtime_auto; int lock; int usage_count; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device *VAR_0)
{
 FUNC_2(&VAR_0->power.lock);
 if (!VAR_0->power.runtime_auto)
  goto out;

 VAR_0->power.runtime_auto = 0;
 FUNC_0(&VAR_0->power.usage_count);
 FUNC_1(VAR_0, 0);

 out:
 FUNC_3(&VAR_0->power.lock);
}
