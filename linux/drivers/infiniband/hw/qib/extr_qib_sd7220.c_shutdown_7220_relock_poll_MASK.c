
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {int relock_timer; scalar_t__ relock_timer_active; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qib_devdata *VAR_0)
{
 if (VAR_0->cspec->relock_timer_active)
  FUNC_0(&VAR_0->cspec->relock_timer);
}
