
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_24__ {int cfg; } ;
struct TYPE_20__ {TYPE_4__ auth; } ;
struct TYPE_18__ {int cfg; } ;
struct TYPE_19__ {struct datalink* object; } ;
struct TYPE_23__ {scalar_t__ tries; int timer; } ;
struct TYPE_22__ {char* list; char* chosen; int * alt; int * next; } ;
struct TYPE_21__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct datalink {struct datalink* name; TYPE_9__* physical; int chat; int cbcp; TYPE_15__ chap; TYPE_10__ pap; TYPE_12__ fsmp; int parent; int peer; scalar_t__ reconnect_tries; TYPE_3__ dial; int * next; int bundle; TYPE_2__ phone; int mp; TYPE_12__ cfg; int state; TYPE_1__ desc; } ;
struct TYPE_28__ {TYPE_12__ cfg; } ;
struct TYPE_26__ {TYPE_12__ cfg; } ;
struct TYPE_25__ {TYPE_12__ cfg; } ;
struct TYPE_27__ {TYPE_6__ ccp; TYPE_5__ lcp; } ;
struct TYPE_29__ {TYPE_8__ async; TYPE_7__ link; TYPE_12__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_9__*) ;
 int FUNC_1 (TYPE_15__*,TYPE_9__*) ;
 int FUNC_2 (int *,TYPE_9__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct datalink*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct datalink*) ;
 int FUNC_5 (int ,char*,struct datalink*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_12__*,TYPE_12__*,int) ;
 int FUNC_8 (int *,char,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_10__*,TYPE_9__*) ;
 int FUNC_11 (int *) ;
 TYPE_9__* FUNC_12 (struct datalink*,int ) ;
 struct datalink* FUNC_13 (char const*) ;

struct datalink *
FUNC_14(struct datalink *VAR_8, const char *VAR_9)
{
  struct datalink *VAR_10;

  VAR_10 = (struct datalink *)FUNC_6(sizeof(struct datalink));
  if (VAR_10 == ((void*)0))
    return VAR_10;

  VAR_10->desc.type = VAR_1;
  VAR_10->desc.UpdateSet = VAR_6;
  VAR_10->desc.IsSet = VAR_4;
  VAR_10->desc.Read = VAR_5;
  VAR_10->desc.Write = VAR_7;

  VAR_10->state = VAR_0;

  FUNC_7(&VAR_10->cfg, &VAR_8->cfg, sizeof VAR_10->cfg);
  FUNC_9(&VAR_10->mp);
  *VAR_10->phone.list = '\0';
  VAR_10->phone.next = ((void*)0);
  VAR_10->phone.alt = ((void*)0);
  VAR_10->phone.chosen = "N/A";
  VAR_10->bundle = VAR_8->bundle;
  VAR_10->next = ((void*)0);
  FUNC_8(&VAR_10->dial.timer, '\0', sizeof VAR_10->dial.timer);
  VAR_10->dial.tries = 0;
  VAR_10->reconnect_tries = 0;
  VAR_10->name = FUNC_13(VAR_9);
  FUNC_11(&VAR_10->peer);
  VAR_10->parent = VAR_8->parent;
  FUNC_7(&VAR_10->fsmp, &VAR_8->fsmp, sizeof VAR_10->fsmp);
  VAR_10->fsmp.object = VAR_10;

  if ((VAR_10->physical = FUNC_12(VAR_10, VAR_3)) == ((void*)0)) {
    FUNC_4(VAR_10->name);
    FUNC_4(VAR_10);
    return ((void*)0);
  }
  FUNC_10(&VAR_10->pap, VAR_10->physical);
  VAR_10->pap.cfg = VAR_8->pap.cfg;

  FUNC_1(&VAR_10->chap, VAR_10->physical);
  VAR_10->chap.auth.cfg = VAR_8->chap.auth.cfg;

  FUNC_7(&VAR_10->physical->cfg, &VAR_8->physical->cfg, sizeof VAR_10->physical->cfg);
  FUNC_7(&VAR_10->physical->link.lcp.cfg, &VAR_8->physical->link.lcp.cfg,
         sizeof VAR_10->physical->link.lcp.cfg);
  FUNC_7(&VAR_10->physical->link.ccp.cfg, &VAR_8->physical->link.ccp.cfg,
         sizeof VAR_10->physical->link.ccp.cfg);
  FUNC_7(&VAR_10->physical->async.cfg, &VAR_8->physical->async.cfg,
         sizeof VAR_10->physical->async.cfg);

  FUNC_0(&VAR_10->cbcp, VAR_10->physical);

  FUNC_8(&VAR_10->chat, '\0', sizeof VAR_10->chat);
  FUNC_2(&VAR_10->chat, VAR_10->physical);

  FUNC_5(VAR_2, "%s: Cloned in %s state\n",
             VAR_10->name, FUNC_3(VAR_10));

  return VAR_10;
}
