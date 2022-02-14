
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_13__ {int total; } ;
struct TYPE_14__ {TYPE_6__ stats; int name; } ;
struct cd {scalar_t__ necessity; int delay; } ;
struct TYPE_12__ {char* devlist; int ndev; int parity; struct cd cd; scalar_t__ rts_cts; int speed; } ;
struct TYPE_8__ {char* full; } ;
struct physical {scalar_t__ fd; scalar_t__ type; scalar_t__ session_owner; TYPE_7__ link; TYPE_5__ cfg; TYPE_4__* handler; int connect_count; TYPE_1__ name; } ;
struct cmdargs {int prompt; TYPE_3__* cx; } ;
typedef scalar_t__ pid_t ;
struct TYPE_11__ {struct cd cd; int (* openinfo ) (struct physical*) ;} ;
struct TYPE_9__ {int chosen; } ;
struct TYPE_10__ {struct physical* physical; TYPE_2__ phone; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct physical*) ;
 int FUNC_4 (struct physical*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (struct physical*) ;
 int FUNC_8 (struct physical*) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(struct cmdargs const *VAR_8)
{
  struct physical *VAR_9 = VAR_8->cx->physical;
  struct cd *VAR_10;
  const char *VAR_11;
  int VAR_12, VAR_13;

  FUNC_5(VAR_8->prompt, "Name: %s\n", VAR_9->link.name);
  FUNC_5(VAR_8->prompt, " State:           ");
  if (VAR_9->fd < 0)
    FUNC_5(VAR_8->prompt, "closed\n");
  else {
    VAR_13 = FUNC_4(VAR_9);
    if (VAR_9->handler && VAR_9->handler->openinfo) {
      if (VAR_13 == -1)
        FUNC_5(VAR_8->prompt, "open (%s)\n", (*VAR_9->handler->openinfo)(VAR_9));
      else
        FUNC_5(VAR_8->prompt, "open (%s, port %d)\n",
                      (*VAR_9->handler->openinfo)(VAR_9), VAR_13);
    } else if (VAR_13 == -1)
      FUNC_5(VAR_8->prompt, "open\n");
    else
      FUNC_5(VAR_8->prompt, "open (port %d)\n", VAR_13);
  }

  FUNC_5(VAR_8->prompt, " Device:          %s",
                *VAR_9->name.full ? VAR_9->name.full :
                VAR_9->type == VAR_6 ? "unknown" : "N/A");
  if (VAR_9->session_owner != (pid_t)-1)
    FUNC_5(VAR_8->prompt, " (session owner: %ld)", (long)VAR_9->session_owner);

  FUNC_5(VAR_8->prompt, "\n Link Type:       %s\n", FUNC_2(VAR_9->type));
  FUNC_5(VAR_8->prompt, " Connect Count:   %d\n", VAR_9->connect_count);





  FUNC_5(VAR_8->prompt, " Queued Packets:  %lu\n",
                (u_long)FUNC_1(&VAR_9->link));
  FUNC_5(VAR_8->prompt, " Phone Number:    %s\n", VAR_8->cx->phone.chosen);

  FUNC_5(VAR_8->prompt, "\nDefaults:\n");

  FUNC_5(VAR_8->prompt, " Device List:     ");
  VAR_11 = VAR_9->cfg.devlist;
  for (VAR_12 = 0; VAR_12 < VAR_9->cfg.ndev; VAR_12++) {
    if (VAR_12)
      FUNC_5(VAR_8->prompt, ", ");
    FUNC_5(VAR_8->prompt, "\"%s\"", VAR_11);
    VAR_11 += FUNC_6(VAR_11) + 1;
  }

  FUNC_5(VAR_8->prompt, "\n Characteristics: ");
  if (FUNC_3(VAR_8->cx->physical))
    FUNC_5(VAR_8->prompt, "sync");
  else
    FUNC_5(VAR_8->prompt, "%dbps", VAR_9->cfg.speed);

  switch (VAR_9->cfg.parity & VAR_3) {
  case 129:
    FUNC_5(VAR_8->prompt, ", cs7");
    break;
  case 128:
    FUNC_5(VAR_8->prompt, ", cs8");
    break;
  }
  if (VAR_9->cfg.parity & VAR_4) {
    if (VAR_9->cfg.parity & VAR_5)
      FUNC_5(VAR_8->prompt, ", odd parity");
    else
      FUNC_5(VAR_8->prompt, ", even parity");
  } else
    FUNC_5(VAR_8->prompt, ", no parity");

  FUNC_5(VAR_8->prompt, ", CTS/RTS %s\n", (VAR_9->cfg.rts_cts ? "on" : "off"));

  FUNC_5(VAR_8->prompt, " CD check delay:  ");
  VAR_10 = VAR_9->handler ? &VAR_9->handler->cd : &VAR_9->cfg.cd;
  if (VAR_10->necessity == VAR_1)
    FUNC_5(VAR_8->prompt, "no cd");
  else if (VAR_9->cfg.cd.necessity == VAR_0) {
    FUNC_5(VAR_8->prompt, "device specific");
  } else {
    FUNC_5(VAR_8->prompt, "%d second%s", VAR_9->cfg.cd.delay,
                  VAR_9->cfg.cd.delay == 1 ? "" : "s");
    if (VAR_9->cfg.cd.necessity == VAR_2)
      FUNC_5(VAR_8->prompt, " (required!)");
  }
  FUNC_5(VAR_8->prompt, "\n\n");

  FUNC_9(&VAR_9->link.stats.total, VAR_8->prompt);

  return 0;
}
