
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int dummy; } ;
struct TYPE_2__ {char* phone; int timer; scalar_t__ delay; scalar_t__ id; int state; } ;
struct cbcp {struct physical* p; TYPE_1__ fsm; scalar_t__ required; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char,int) ;

void
FUNC_1(struct cbcp *VAR_1, struct physical *VAR_2)
{
  VAR_1->required = 0;
  VAR_1->fsm.state = VAR_0;
  VAR_1->fsm.id = 0;
  VAR_1->fsm.delay = 0;
  *VAR_1->fsm.phone = '\0';
  FUNC_0(&VAR_1->fsm.timer, '\0', sizeof VAR_1->fsm.timer);
  VAR_1->p = VAR_2;
}
