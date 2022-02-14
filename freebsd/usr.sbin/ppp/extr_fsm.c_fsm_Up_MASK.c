
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsm {int state; TYPE_1__* link; int LogLevel; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*,int ) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*,int ) ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,...) ;

void
FUNC_5(struct fsm *VAR_3)
{
  switch (VAR_3->state) {
  case 129:
    FUNC_4(VAR_3->LogLevel, "FSM: Using \"%s\" as a transport\n",
              VAR_3->link->name);
    FUNC_2(VAR_3, VAR_1);
    break;
  case 128:
    FUNC_0(VAR_3, VAR_0);
    FUNC_1(VAR_3);
    FUNC_2(VAR_3, VAR_2);
    break;
  default:
    FUNC_4(VAR_3->LogLevel, "%s: Oops, Up at %s\n",
              VAR_3->link->name, FUNC_3(VAR_3->state));
    break;
  }
}
