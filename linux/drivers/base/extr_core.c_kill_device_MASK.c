
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* p; int mutex; } ;
struct TYPE_2__ {int dead; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct device *VAR_0)
{







 FUNC_0(&VAR_0->mutex);

 if (VAR_0->p->dead)
  return 0;
 VAR_0->p->dead = 1;
 return 1;
}
