
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int runtime_auto; int lock; int usage_count; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device *VAR_2)
{
 FUNC_2(&VAR_2->power.lock);
 if (VAR_2->power.runtime_auto)
  goto out;

 VAR_2->power.runtime_auto = 1;
 if (FUNC_0(&VAR_2->power.usage_count))
  FUNC_1(VAR_2, VAR_1 | VAR_0);

 out:
 FUNC_3(&VAR_2->power.lock);
}
