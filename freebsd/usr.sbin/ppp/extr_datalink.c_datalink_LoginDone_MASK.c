
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {int tries; scalar_t__ incs; } ;
struct TYPE_14__ {int logout; } ;
struct TYPE_15__ {TYPE_2__ script; } ;
struct TYPE_13__ {scalar_t__ run; int packetmode; } ;
struct datalink {scalar_t__ state; TYPE_7__* physical; TYPE_4__ dial; TYPE_3__ cfg; int chat; TYPE_1__ script; } ;
struct TYPE_17__ {int openmode; } ;
struct TYPE_12__ {int fsm; TYPE_5__ cfg; } ;
struct TYPE_18__ {TYPE_10__ lcp; int ccp; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_6__ link; int async; int hdlc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (struct datalink*) ;
 int FUNC_5 (struct datalink*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_14(struct datalink *VAR_5)
{
  FUNC_2(&VAR_5->chat);

  if (!VAR_5->script.packetmode) {
    VAR_5->dial.tries = -1;
    VAR_5->dial.incs = 0;
    FUNC_5(VAR_5, VAR_2);
  } else if (!FUNC_12(VAR_5->physical)) {
    VAR_5->dial.tries = 0;
    FUNC_10(VAR_3, "datalink_LoginDone: Not connected.\n");
    if (VAR_5->script.run) {
      FUNC_5(VAR_5, VAR_1);
      if (!FUNC_3(&VAR_5->chat, VAR_5->cfg.script.logout, ((void*)0)))
        FUNC_10(VAR_3, "Invalid logout script\n");
    } else {
      FUNC_13(VAR_5->physical);
      if (VAR_5->physical->type == VAR_4)

        FUNC_11(VAR_5->physical);
      FUNC_4(VAR_5);
    }
  } else {
    VAR_5->dial.tries = -1;
    VAR_5->dial.incs = 0;

    FUNC_8(&VAR_5->physical->hdlc, &VAR_5->physical->link.lcp);
    FUNC_0(&VAR_5->physical->async);

    FUNC_9(&VAR_5->physical->link.lcp, VAR_5->state == VAR_2 ?
              0 : VAR_5->physical->link.lcp.cfg.openmode);
    FUNC_1(&VAR_5->physical->link.ccp);

    FUNC_5(VAR_5, VAR_0);
    FUNC_7(&VAR_5->physical->link.lcp.fsm);
    FUNC_6(&VAR_5->physical->link.lcp.fsm);
  }
}
