
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; void* arg; int func; scalar_t__ load; } ;
struct fsm {int state; TYPE_2__ StoppedTimer; TYPE_2__ FsmTimer; TYPE_1__* link; int LogLevel; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct fsm *VAR_5, int VAR_6)
{
  FUNC_1(VAR_5->LogLevel, "%s: State change %s --> %s\n",
             VAR_5->link->name, FUNC_0(VAR_5->state), FUNC_0(VAR_6));
  if (VAR_5->state == VAR_2 && VAR_5->StoppedTimer.state == VAR_4)
    FUNC_3(&VAR_5->StoppedTimer);
  VAR_5->state = VAR_6;
  if ((VAR_6 >= VAR_0 && VAR_6 <= VAR_2) || (VAR_6 == VAR_1)) {
    FUNC_3(&VAR_5->FsmTimer);
    if (VAR_6 == VAR_2 && VAR_5->StoppedTimer.load) {
      FUNC_3(&VAR_5->StoppedTimer);
      VAR_5->StoppedTimer.func = VAR_3;
      VAR_5->StoppedTimer.arg = (void *) VAR_5;
      FUNC_2(&VAR_5->StoppedTimer);
    }
  }
}
