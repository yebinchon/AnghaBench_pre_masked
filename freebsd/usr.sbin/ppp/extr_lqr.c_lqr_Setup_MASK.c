
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


struct TYPE_15__ {int name; } ;
struct TYPE_16__ {char* name; int load; struct lcp* arg; int func; } ;
struct TYPE_11__ {int peer_timeout; int peer; scalar_t__ resent; } ;
struct TYPE_10__ {scalar_t__ seq_recv; scalar_t__ seq_sent; } ;
struct TYPE_13__ {int method; TYPE_8__ timer; TYPE_3__ lqr; TYPE_2__ echo; } ;
struct TYPE_14__ {TYPE_5__ lqm; } ;
struct physical {TYPE_7__ link; TYPE_6__ hdlc; } ;
struct TYPE_12__ {int lqrperiod; int lqr; scalar_t__ echo; } ;
struct TYPE_9__ {int link; } ;
struct lcp {int his_lqrperiod; int want_lqrperiod; TYPE_4__ cfg; TYPE_1__ fsm; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct lcp*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct physical* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int *,char,int) ;
 int FUNC_5 (TYPE_8__*) ;

__attribute__((used)) static void
FUNC_6(struct lcp *VAR_6)
{
  struct physical *VAR_7 = FUNC_2(VAR_6->fsm.link);
  int VAR_8;

  VAR_7->hdlc.lqm.lqr.resent = 0;
  VAR_7->hdlc.lqm.echo.seq_sent = 0;
  VAR_7->hdlc.lqm.echo.seq_recv = 0;
  FUNC_4(&VAR_7->hdlc.lqm.lqr.peer, '\0',
         sizeof VAR_7->hdlc.lqm.lqr.peer);

  VAR_7->hdlc.lqm.method = VAR_6->cfg.echo ? VAR_0 : 0;
  if (FUNC_0(VAR_6->cfg.lqr) && !FUNC_1(VAR_6, VAR_5))
    VAR_7->hdlc.lqm.method |= VAR_1;
  FUNC_5(&VAR_7->hdlc.lqm.timer);

  VAR_7->hdlc.lqm.lqr.peer_timeout = VAR_6->his_lqrperiod;
  if (VAR_6->his_lqrperiod)
    FUNC_3(VAR_2, "%s: Expecting LQR every %d.%02d secs\n",
              VAR_7->link.name, VAR_6->his_lqrperiod / 100,
              VAR_6->his_lqrperiod % 100);

  VAR_8 = VAR_6->want_lqrperiod ?
    VAR_6->want_lqrperiod : VAR_6->cfg.lqrperiod * 100;
  VAR_7->hdlc.lqm.timer.func = VAR_4;
  VAR_7->hdlc.lqm.timer.name = "lqm";
  VAR_7->hdlc.lqm.timer.arg = VAR_6;

  if (VAR_6->want_lqrperiod || VAR_7->hdlc.lqm.method & VAR_0) {
    FUNC_3(VAR_2, "%s: Will send %s every %d.%02d secs\n",
              VAR_7->link.name, VAR_6->want_lqrperiod ? "LQR" : "LCP ECHO",
              VAR_8 / 100, VAR_8 % 100);
    VAR_7->hdlc.lqm.timer.load = VAR_8 * VAR_3 / 100;
  } else {
    VAR_7->hdlc.lqm.timer.load = 0;
    if (!VAR_6->his_lqrperiod)
      FUNC_3(VAR_2, "%s: LQR/LCP ECHO not negotiated\n",
                 VAR_7->link.name);
  }
}
