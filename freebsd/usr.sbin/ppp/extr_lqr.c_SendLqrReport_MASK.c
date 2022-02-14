
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ load; } ;
struct TYPE_10__ {int seq_sent; int seq_recv; } ;
struct TYPE_9__ {int resent; } ;
struct TYPE_12__ {int method; TYPE_6__ timer; TYPE_2__ echo; TYPE_1__ lqr; } ;
struct TYPE_13__ {TYPE_4__ lqm; } ;
struct physical {TYPE_5__ hdlc; int dl; } ;
struct TYPE_11__ {TYPE_8__* link; } ;
struct lcp {TYPE_3__ fsm; } ;
struct TYPE_15__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lcp*) ;
 int FUNC_1 (struct lcp*) ;
 int FUNC_2 (int ,int ) ;
 struct physical* FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
  struct lcp *VAR_6 = (struct lcp *)VAR_5;
  struct physical *VAR_7 = FUNC_3(VAR_6->fsm.link);

  FUNC_6(&VAR_7->hdlc.lqm.timer);

  if (VAR_7->hdlc.lqm.method & VAR_2) {
    if (VAR_7->hdlc.lqm.lqr.resent > 5) {

      FUNC_4(VAR_4, "%s: ** Too many LQR packets lost **\n",
                VAR_6->fsm.link->name);
      FUNC_4(VAR_3, "%s: Too many LQR packets lost\n",
                VAR_6->fsm.link->name);
      VAR_7->hdlc.lqm.method = 0;
      FUNC_2(VAR_7->dl, VAR_0);
    } else {
      FUNC_1(VAR_6);
      VAR_7->hdlc.lqm.lqr.resent++;
    }
  } else if (VAR_7->hdlc.lqm.method & VAR_1) {
    if ((VAR_7->hdlc.lqm.echo.seq_sent > 5 &&
         VAR_7->hdlc.lqm.echo.seq_sent - 5 > VAR_7->hdlc.lqm.echo.seq_recv) ||
        (VAR_7->hdlc.lqm.echo.seq_sent <= 5 &&
         VAR_7->hdlc.lqm.echo.seq_sent > VAR_7->hdlc.lqm.echo.seq_recv + 5)) {
      FUNC_4(VAR_4, "%s: ** Too many LCP ECHO packets lost **\n",
                VAR_6->fsm.link->name);
      FUNC_4(VAR_3, "%s: Too many LCP ECHO packets lost\n",
                VAR_6->fsm.link->name);
      VAR_7->hdlc.lqm.method = 0;
      FUNC_2(VAR_7->dl, VAR_0);
    } else
      FUNC_0(VAR_6);
  }
  if (VAR_7->hdlc.lqm.method && VAR_7->hdlc.lqm.timer.load)
    FUNC_5(&VAR_7->hdlc.lqm.timer);
}
