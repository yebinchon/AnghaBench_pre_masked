
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct cmdargs {TYPE_11__* cx; int prompt; } ;
struct TYPE_22__ {int opmask; char* msg; } ;
struct TYPE_21__ {int type; } ;
struct TYPE_20__ {char* max; char* timeout; } ;
struct TYPE_19__ {char* max; char* next_timeout; char* timeout; } ;
struct TYPE_18__ {char* list; } ;
struct TYPE_16__ {int len; int address; int class; } ;
struct TYPE_17__ {char* authname; TYPE_3__ enddisc; } ;
struct TYPE_15__ {char* dial; char* login; char* logout; char* hangup; } ;
struct TYPE_14__ {char* delay; char* phone; char* fsmretry; } ;
struct TYPE_12__ {TYPE_2__ script; TYPE_1__ cbcp; TYPE_9__ callback; TYPE_7__ reconnect; TYPE_6__ dial; TYPE_5__ phone; } ;
struct TYPE_13__ {char* name; scalar_t__ state; TYPE_10__ cfg; TYPE_8__* physical; TYPE_4__ peer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (TYPE_11__*) ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(struct cmdargs const *VAR_6)
{
  FUNC_3(VAR_6->prompt, "Name: %s\n", VAR_6->cx->name);
  FUNC_3(VAR_6->prompt, " State:              %s\n",
                FUNC_1(VAR_6->cx));
  FUNC_3(VAR_6->prompt, " Peer name:          ");
  if (*VAR_6->cx->peer.authname)
    FUNC_3(VAR_6->prompt, "%s\n", VAR_6->cx->peer.authname);
  else if (VAR_6->cx->state == VAR_4)
    FUNC_3(VAR_6->prompt, "None requested\n");
  else
    FUNC_3(VAR_6->prompt, "N/A\n");
  FUNC_3(VAR_6->prompt, " Discriminator:      %s\n",
                FUNC_2(VAR_6->cx->peer.enddisc.class,
                           VAR_6->cx->peer.enddisc.address,
                           VAR_6->cx->peer.enddisc.len));

  FUNC_3(VAR_6->prompt, "\nDefaults:\n");
  FUNC_3(VAR_6->prompt, " Phone List:         %s\n",
                VAR_6->cx->cfg.phone.list);
  if (VAR_6->cx->cfg.dial.max)
    FUNC_3(VAR_6->prompt, " Dial tries:         %d, delay ",
                  VAR_6->cx->cfg.dial.max);
  else
    FUNC_3(VAR_6->prompt, " Dial tries:         infinite, delay ");
  if (VAR_6->cx->cfg.dial.next_timeout >= 0)
    FUNC_3(VAR_6->prompt, "%ds/", VAR_6->cx->cfg.dial.next_timeout);
  else
    FUNC_3(VAR_6->prompt, "random/");
  if (VAR_6->cx->cfg.dial.timeout >= 0)
    FUNC_3(VAR_6->prompt, "%ds\n", VAR_6->cx->cfg.dial.timeout);
  else
    FUNC_3(VAR_6->prompt, "random\n");
  FUNC_3(VAR_6->prompt, " Reconnect tries:    %d, delay ",
                VAR_6->cx->cfg.reconnect.max);
  if (VAR_6->cx->cfg.reconnect.timeout > 0)
    FUNC_3(VAR_6->prompt, "%ds\n", VAR_6->cx->cfg.reconnect.timeout);
  else
    FUNC_3(VAR_6->prompt, "random\n");
  FUNC_3(VAR_6->prompt, " Callback %s ", VAR_6->cx->physical->type ==
                VAR_5 ? "accepted: " : "requested:");
  if (!VAR_6->cx->cfg.callback.opmask)
    FUNC_3(VAR_6->prompt, "none\n");
  else {
    int VAR_7 = 0;

    if (VAR_6->cx->cfg.callback.opmask & FUNC_0(VAR_3)) {
      FUNC_3(VAR_6->prompt, "none");
      VAR_7 = 1;
    }
    if (VAR_6->cx->cfg.callback.opmask & FUNC_0(VAR_0)) {
      FUNC_3(VAR_6->prompt, "%sauth", VAR_7 ? ", " : "");
      VAR_7 = 1;
    }
    if (VAR_6->cx->cfg.callback.opmask & FUNC_0(VAR_2)) {
      FUNC_3(VAR_6->prompt, "%sE.164", VAR_7 ? ", " : "");
      if (VAR_6->cx->physical->type != VAR_5)
        FUNC_3(VAR_6->prompt, " (%s)", VAR_6->cx->cfg.callback.msg);
      VAR_7 = 1;
    }
    if (VAR_6->cx->cfg.callback.opmask & FUNC_0(VAR_1)) {
      FUNC_3(VAR_6->prompt, "%scbcp\n", VAR_7 ? ", " : "");
      FUNC_3(VAR_6->prompt, " CBCP:               delay: %ds\n",
                    VAR_6->cx->cfg.cbcp.delay);
      FUNC_3(VAR_6->prompt, "                     phone: ");
      if (!FUNC_4(VAR_6->cx->cfg.cbcp.phone, "*")) {
        if (VAR_6->cx->physical->type & VAR_5)
          FUNC_3(VAR_6->prompt, "Caller decides\n");
        else
          FUNC_3(VAR_6->prompt, "Dialback server decides\n");
      } else
        FUNC_3(VAR_6->prompt, "%s\n", VAR_6->cx->cfg.cbcp.phone);
      FUNC_3(VAR_6->prompt, "                     timeout: %lds\n",
                    VAR_6->cx->cfg.cbcp.fsmretry);
    } else
      FUNC_3(VAR_6->prompt, "\n");
  }

  FUNC_3(VAR_6->prompt, " Dial Script:        %s\n",
                VAR_6->cx->cfg.script.dial);
  FUNC_3(VAR_6->prompt, " Login Script:       %s\n",
                VAR_6->cx->cfg.script.login);
  FUNC_3(VAR_6->prompt, " Logout Script:      %s\n",
                VAR_6->cx->cfg.script.logout);
  FUNC_3(VAR_6->prompt, " Hangup Script:      %s\n",
                VAR_6->cx->cfg.script.hangup);
  return 0;
}
