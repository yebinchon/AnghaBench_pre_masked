
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ opmask; } ;
struct lcp {TYPE_7__ want_callback; } ;
struct TYPE_16__ {int delay; char* phone; int restart; void* type; } ;
struct cbcp {TYPE_8__ fsm; TYPE_6__* p; } ;
struct TYPE_9__ {struct lcp lcp; } ;
struct TYPE_14__ {TYPE_5__* dl; TYPE_1__ link; } ;
struct TYPE_11__ {int delay; int phone; } ;
struct TYPE_12__ {TYPE_3__ cbcp; } ;
struct TYPE_10__ {char* authname; } ;
struct TYPE_13__ {TYPE_4__ cfg; TYPE_2__ peer; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct cbcp*,int ) ;
 int FUNC_2 (struct cbcp*) ;
 int FUNC_3 (struct cbcp*,int) ;
 scalar_t__ FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ,int) ;

void
FUNC_7(struct cbcp *VAR_6)
{
  struct lcp *VAR_7 = &VAR_6->p->link.lcp;

  VAR_6->fsm.delay = VAR_6->p->dl->cfg.cbcp.delay;
  if (*VAR_6->p->dl->peer.authname == '\0' ||
      !FUNC_0(VAR_6->p->dl->peer.authname, VAR_6->fsm.phone,
                         sizeof VAR_6->fsm.phone)) {
    FUNC_6(VAR_6->fsm.phone, VAR_6->p->dl->cfg.cbcp.phone,
            sizeof VAR_6->fsm.phone - 1);
    VAR_6->fsm.phone[sizeof VAR_6->fsm.phone - 1] = '\0';
  }

  if (VAR_7->want_callback.opmask) {
    if (*VAR_6->fsm.phone == '\0')
      VAR_6->fsm.type = VAR_2;
    else if (!FUNC_5(VAR_6->fsm.phone, "*")) {
      VAR_6->fsm.type = VAR_3;
      *VAR_6->fsm.phone = '\0';
    } else
      VAR_6->fsm.type = VAR_0;
    FUNC_1(VAR_6, VAR_4);
    FUNC_3(VAR_6, VAR_6->fsm.delay * VAR_5);
  } else {
    if (*VAR_6->fsm.phone == '\0')
      VAR_6->fsm.type = VAR_2;
    else if (!FUNC_5(VAR_6->fsm.phone, "*")) {
      VAR_6->fsm.type = VAR_0;
      *VAR_6->fsm.phone = '\0';
    } else if (FUNC_4(VAR_6->fsm.phone, ','))
      VAR_6->fsm.type = VAR_1;
    else
      VAR_6->fsm.type = VAR_3;
    VAR_6->fsm.restart = VAR_5;
    FUNC_2(VAR_6);
  }
}
