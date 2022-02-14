
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* name; int load; struct cbcp* arg; int func; } ;
struct TYPE_4__ {TYPE_2__ timer; } ;
struct cbcp {TYPE_1__ fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(struct cbcp *VAR_2, int VAR_3)
{
  FUNC_1(&VAR_2->fsm.timer);
  VAR_2->fsm.timer.func = VAR_1;
  VAR_2->fsm.timer.name = "cbcp";
  VAR_2->fsm.timer.load = VAR_3 * VAR_0;
  VAR_2->fsm.timer.arg = VAR_2;
  FUNC_0(&VAR_2->fsm.timer);
}
