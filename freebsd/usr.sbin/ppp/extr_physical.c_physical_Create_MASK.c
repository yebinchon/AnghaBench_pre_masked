
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_21__ {int gather; int * parent; int total; } ;
struct TYPE_15__ {int len; int ccp; int lcp; int proto_out; int proto_in; int Queue; TYPE_5__ stats; int name; int type; } ;
struct TYPE_24__ {scalar_t__ delay; int necessity; } ;
struct TYPE_25__ {TYPE_8__ cd; int ndev; int devlist; int parity; int speed; int rts_cts; } ;
struct TYPE_23__ {char* full; char* base; } ;
struct TYPE_22__ {scalar_t__ sz; } ;
struct physical {int type; int fd; TYPE_10__ link; TYPE_9__ cfg; scalar_t__ session_owner; scalar_t__ Utmp; TYPE_7__ name; TYPE_6__ input; struct datalink* dl; scalar_t__ connect_count; int * out; int async; int hdlc; int * handler; } ;
struct datalink {int fsmp; TYPE_11__* bundle; int name; } ;
typedef scalar_t__ pid_t ;
struct TYPE_17__ {int total; } ;
struct TYPE_18__ {TYPE_1__ stats; } ;
struct TYPE_19__ {TYPE_2__ link; scalar_t__ active; } ;
struct TYPE_20__ {TYPE_3__ mp; } ;
struct TYPE_16__ {TYPE_4__ ncp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_11__*,TYPE_10__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_11__*,TYPE_10__*,int *) ;
 int FUNC_4 (TYPE_10__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,char,int) ;
 int FUNC_8 (struct physical*) ;
 int FUNC_9 (int *,int ) ;

struct physical *
FUNC_10(struct datalink *VAR_8, int VAR_9)
{
  struct physical *VAR_10;

  VAR_10 = (struct physical *)FUNC_5(sizeof(struct physical));
  if (!VAR_10)
    return ((void*)0);

  VAR_10->link.type = VAR_6;
  VAR_10->link.name = VAR_8->name;
  VAR_10->link.len = sizeof *VAR_10;


  FUNC_9(&VAR_10->link.stats.total, VAR_7);
  VAR_10->link.stats.parent = VAR_8->bundle->ncp.mp.active ?
    &VAR_8->bundle->ncp.mp.link.stats.total : ((void*)0);
  VAR_10->link.stats.gather = 1;

  FUNC_7(VAR_10->link.Queue, '\0', sizeof VAR_10->link.Queue);
  FUNC_7(VAR_10->link.proto_in, '\0', sizeof VAR_10->link.proto_in);
  FUNC_7(VAR_10->link.proto_out, '\0', sizeof VAR_10->link.proto_out);
  FUNC_4(&VAR_10->link);

  VAR_10->handler = ((void*)0);
  FUNC_8(VAR_10);
  VAR_10->type = VAR_9;

  FUNC_2(&VAR_10->hdlc, &VAR_10->link.lcp);
  FUNC_0(&VAR_10->async);

  VAR_10->fd = -1;
  VAR_10->out = ((void*)0);
  VAR_10->connect_count = 0;
  VAR_10->dl = VAR_8;
  VAR_10->input.sz = 0;
  *VAR_10->name.full = '\0';
  VAR_10->name.base = VAR_10->name.full;

  VAR_10->Utmp = 0;
  VAR_10->session_owner = (pid_t)-1;

  VAR_10->cfg.rts_cts = VAR_2;
  VAR_10->cfg.speed = VAR_4;
  VAR_10->cfg.parity = VAR_1;
  FUNC_6(VAR_10->cfg.devlist, VAR_3, sizeof VAR_3);
  VAR_10->cfg.ndev = VAR_5;
  VAR_10->cfg.cd.necessity = VAR_0;
  VAR_10->cfg.cd.delay = 0;

  FUNC_3(&VAR_10->link.lcp, VAR_8->bundle, &VAR_10->link, &VAR_8->fsmp);
  FUNC_1(&VAR_10->link.ccp, VAR_8->bundle, &VAR_10->link, &VAR_8->fsmp);

  return VAR_10;
}
