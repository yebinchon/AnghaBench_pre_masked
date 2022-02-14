
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {struct datalink* object; int LayerFinish; int LayerDown; int LayerUp; int LayerStart; } ;
struct TYPE_13__ {char* phone; int fsmretry; scalar_t__ delay; } ;
struct TYPE_24__ {scalar_t__ opmask; } ;
struct TYPE_23__ {int timeout; scalar_t__ max; } ;
struct TYPE_22__ {int max; int maxinc; scalar_t__ inc; int timeout; int next_timeout; } ;
struct TYPE_18__ {char* list; } ;
struct TYPE_17__ {char* dial; char* login; char* logout; char* hangup; } ;
struct TYPE_14__ {TYPE_10__ cbcp; TYPE_9__ callback; TYPE_8__ reconnect; TYPE_7__ dial; TYPE_3__ phone; TYPE_2__ script; } ;
struct TYPE_21__ {scalar_t__ tries; int timer; } ;
struct TYPE_20__ {int run; int packetmode; } ;
struct TYPE_19__ {char* list; char* chosen; int * alt; int * next; } ;
struct TYPE_16__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct datalink {struct datalink* name; int * physical; int chat; int cbcp; int chap; int pap; TYPE_12__ fsmp; int * parent; int peer; TYPE_11__ cfg; scalar_t__ reconnect_tries; TYPE_6__ dial; int * next; struct bundle* bundle; int mp; TYPE_5__ script; scalar_t__ stayonline; TYPE_4__ phone; int state; TYPE_1__ desc; } ;
struct bundle {int fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct datalink*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct datalink*) ;
 int FUNC_5 (int ,char*,struct datalink*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,char,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (struct datalink*,int) ;
 struct datalink* FUNC_12 (char const*) ;

struct datalink *
FUNC_13(const char *VAR_15, struct bundle *VAR_16, int VAR_17)
{
  struct datalink *VAR_18;

  VAR_18 = (struct datalink *)FUNC_6(sizeof(struct datalink));
  if (VAR_18 == ((void*)0))
    return VAR_18;

  VAR_18->desc.type = VAR_1;
  VAR_18->desc.UpdateSet = VAR_13;
  VAR_18->desc.IsSet = VAR_7;
  VAR_18->desc.Read = VAR_12;
  VAR_18->desc.Write = VAR_14;

  VAR_18->state = VAR_0;

  *VAR_18->cfg.script.dial = '\0';
  *VAR_18->cfg.script.login = '\0';
  *VAR_18->cfg.script.logout = '\0';
  *VAR_18->cfg.script.hangup = '\0';
  *VAR_18->cfg.phone.list = '\0';
  *VAR_18->phone.list = '\0';
  VAR_18->phone.next = ((void*)0);
  VAR_18->phone.alt = ((void*)0);
  VAR_18->phone.chosen = "N/A";
  VAR_18->stayonline = 0;
  VAR_18->script.run = 1;
  VAR_18->script.packetmode = 1;
  FUNC_8(&VAR_18->mp);

  VAR_18->bundle = VAR_16;
  VAR_18->next = ((void*)0);

  FUNC_7(&VAR_18->dial.timer, '\0', sizeof VAR_18->dial.timer);

  VAR_18->dial.tries = 0;
  VAR_18->cfg.dial.max = 1;
  VAR_18->cfg.dial.next_timeout = VAR_3;
  VAR_18->cfg.dial.timeout = VAR_4;
  VAR_18->cfg.dial.inc = 0;
  VAR_18->cfg.dial.maxinc = 10;

  VAR_18->reconnect_tries = 0;
  VAR_18->cfg.reconnect.max = 0;
  VAR_18->cfg.reconnect.timeout = VAR_6;

  VAR_18->cfg.callback.opmask = 0;
  VAR_18->cfg.cbcp.delay = 0;
  *VAR_18->cfg.cbcp.phone = '\0';
  VAR_18->cfg.cbcp.fsmretry = VAR_2;

  VAR_18->name = FUNC_12(VAR_15);
  FUNC_10(&VAR_18->peer);
  VAR_18->parent = &VAR_16->fsm;
  VAR_18->fsmp.LayerStart = VAR_10;
  VAR_18->fsmp.LayerUp = VAR_11;
  VAR_18->fsmp.LayerDown = VAR_8;
  VAR_18->fsmp.LayerFinish = VAR_9;
  VAR_18->fsmp.object = VAR_18;

  if ((VAR_18->physical = FUNC_11(VAR_18, VAR_17)) == ((void*)0)) {
    FUNC_4(VAR_18->name);
    FUNC_4(VAR_18);
    return ((void*)0);
  }

  FUNC_9(&VAR_18->pap, VAR_18->physical);
  FUNC_1(&VAR_18->chap, VAR_18->physical);
  FUNC_0(&VAR_18->cbcp, VAR_18->physical);

  FUNC_7(&VAR_18->chat, '\0', sizeof VAR_18->chat);
  FUNC_2(&VAR_18->chat, VAR_18->physical);

  FUNC_5(VAR_5, "%s: Created in %s state\n",
             VAR_18->name, FUNC_3(VAR_18));

  return VAR_18;
}
