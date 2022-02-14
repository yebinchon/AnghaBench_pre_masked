
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ runtime_status; int lock; int usage_count; int irq_safe; } ;
struct device {TYPE_1__ power; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct device *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(!(VAR_4 & VAR_1) && !VAR_3->power.irq_safe &&
   VAR_3->power.runtime_status != VAR_0);

 if (VAR_4 & VAR_2)
  FUNC_0(&VAR_3->power.usage_count);

 FUNC_3(&VAR_3->power.lock, VAR_5);
 VAR_6 = FUNC_2(VAR_3, VAR_4);
 FUNC_4(&VAR_3->power.lock, VAR_5);

 return VAR_6;
}
