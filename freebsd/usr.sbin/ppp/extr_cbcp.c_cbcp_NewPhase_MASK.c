
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int state; } ;
struct cbcp {TYPE_3__ fsm; TYPE_2__* p; } ;
struct TYPE_5__ {TYPE_1__* dl; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct cbcp *VAR_1, int VAR_2)
{
  if (VAR_1->fsm.state != VAR_2) {
    FUNC_1(VAR_0, "%s: State change %s --> %s\n", VAR_1->p->dl->name,
               FUNC_0(VAR_1->fsm.state), FUNC_0(VAR_2));
    VAR_1->fsm.state = VAR_2;
  }
}
