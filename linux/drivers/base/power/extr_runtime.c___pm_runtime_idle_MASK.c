
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int irq_safe; int usage_count; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct device *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (VAR_3 & VAR_1) {
  if (!FUNC_0(&VAR_2->power.usage_count))
   return 0;
 }

 FUNC_1(!(VAR_3 & VAR_0) && !VAR_2->power.irq_safe);

 FUNC_3(&VAR_2->power.lock, VAR_4);
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 FUNC_4(&VAR_2->power.lock, VAR_4);

 return VAR_5;
}
