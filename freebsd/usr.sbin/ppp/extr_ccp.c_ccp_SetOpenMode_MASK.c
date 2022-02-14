
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * neg; } ;
struct TYPE_4__ {scalar_t__ open_mode; } ;
struct ccp {TYPE_1__ cfg; TYPE_2__ fsm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_2(struct ccp *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (FUNC_1(VAR_2->cfg.neg[VAR_3])) {
      VAR_2->fsm.open_mode = 0;
      return 1;
    }

  VAR_2->fsm.open_mode = VAR_1;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (FUNC_0(VAR_2->cfg.neg[VAR_3]))
      return 1;

  return 0;
}
