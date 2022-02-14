
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disable_depth; scalar_t__ runtime_status; int lock; int usage_count; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct device *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->power.lock, VAR_3);
 VAR_4 = VAR_2->power.disable_depth > 0 ? -VAR_0 :
  VAR_2->power.runtime_status == VAR_1
   && FUNC_0(&VAR_2->power.usage_count);
 FUNC_2(&VAR_2->power.lock, VAR_3);
 return VAR_4;
}
