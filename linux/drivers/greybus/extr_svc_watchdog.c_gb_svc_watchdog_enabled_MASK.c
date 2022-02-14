
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_svc {TYPE_1__* watchdog; } ;
struct TYPE_2__ {int enabled; } ;



bool FUNC_0(struct gb_svc *VAR_0)
{
 if (!VAR_0 || !VAR_0->watchdog)
  return 0;
 return VAR_0->watchdog->enabled;
}
