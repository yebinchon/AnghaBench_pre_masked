
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int wakeup; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int ,unsigned int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct device *VAR_0, unsigned int VAR_1, bool VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->power.lock, VAR_3);
 FUNC_0(VAR_0->power.wakeup, VAR_1, VAR_2);
 FUNC_2(&VAR_0->power.lock, VAR_3);
}
