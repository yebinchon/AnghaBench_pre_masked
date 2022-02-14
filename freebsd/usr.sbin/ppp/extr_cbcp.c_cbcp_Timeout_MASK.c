
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; scalar_t__ restart; int timer; } ;
struct cbcp {TYPE_2__* p; TYPE_1__ fsm; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_3__* dl; } ;







 int VAR_0 ;
 int FUNC_0 (struct cbcp*) ;
 int FUNC_1 (struct cbcp*) ;
 int FUNC_2 (struct cbcp*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
  struct cbcp *VAR_2 = (struct cbcp *)VAR_1;

  FUNC_5(&VAR_2->fsm.timer);
  if (VAR_2->fsm.restart) {
    switch (VAR_2->fsm.state) {
      case 131:
      case 128:
        FUNC_4(VAR_0, "%s: Urk - unexpected CBCP timeout !\n",
                   VAR_2->p->dl->name);
        break;

      case 130:
        FUNC_1(VAR_2);
        break;
      case 129:
        FUNC_2(VAR_2);
        break;
      case 132:
        FUNC_0(VAR_2);
        break;
    }
  } else {
    const char *VAR_3;

    switch (VAR_2->fsm.state) {
      case 128:
        VAR_3 = "REQ";
        break;
      case 130:
        VAR_3 = "RESPONSE";
        break;
      case 129:
        VAR_3 = "ACK";
        break;
      case 132:
        VAR_3 = "Terminate REQ";
        break;
      default:
        FUNC_4(VAR_0, "%s: Urk - unexpected CBCP timeout !\n",
                   VAR_2->p->dl->name);
        VAR_3 = ((void*)0);
        break;
    }
    if (VAR_3)
      FUNC_4(VAR_0, "%s: Timeout waiting for peer %s\n",
                 VAR_2->p->dl->name, VAR_3);
    FUNC_3(VAR_2->p->dl);
  }
}
