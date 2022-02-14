
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct fsm {scalar_t__ state; TYPE_2__ OpenTimer; int name; TYPE_1__* link; int LogLevel; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fsm*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
  struct fsm *VAR_4 = (struct fsm *)VAR_3;

  FUNC_1(VAR_4->LogLevel, "%s: Stopped timer expired\n", VAR_4->link->name);
  if (VAR_4->OpenTimer.state == VAR_2) {
    FUNC_1(VAR_0, "%s: %s: aborting open delay due to stopped timer\n",
              VAR_4->link->name, VAR_4->name);
    FUNC_2(&VAR_4->OpenTimer);
  }
  if (VAR_4->state == VAR_1)
    FUNC_0(VAR_4);
}
