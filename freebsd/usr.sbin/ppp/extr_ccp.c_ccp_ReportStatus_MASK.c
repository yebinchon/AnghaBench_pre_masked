
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_19__ {char* keybits; int state; scalar_t__ required; } ;
struct TYPE_17__ {char* winsize; } ;
struct TYPE_16__ {char* winsize; } ;
struct TYPE_18__ {TYPE_6__ out; TYPE_5__ in; } ;
struct TYPE_15__ {int maxreq; int maxtrm; int timeout; } ;
struct TYPE_20__ {int * neg; TYPE_8__ mppe; TYPE_7__ deflate; TYPE_4__ fsm; } ;
struct TYPE_14__ {int algorithm; struct ccp_opt* opt; } ;
struct TYPE_13__ {int algorithm; int opt; } ;
struct TYPE_12__ {scalar_t__ state; int name; } ;
struct ccp {TYPE_9__ cfg; TYPE_3__ out; TYPE_2__ in; int uncompin; int compin; int compout; int uncompout; int his_proto; int my_proto; TYPE_1__ fsm; } ;
struct link {int name; struct ccp ccp; } ;
struct cmdargs {int prompt; } ;
struct ccp_opt {int val; struct ccp_opt* next; } ;
struct TYPE_11__ {char* (* Disp ) (int *) ;size_t Neg; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;



 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_10__** VAR_5 ;
 struct link* FUNC_2 (struct cmdargs const*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;

int
FUNC_8(struct cmdargs const *VAR_6)
{
  struct ccp_opt **VAR_7;
  struct link *VAR_8;
  struct ccp *VAR_9;
  int VAR_10;

  VAR_8 = FUNC_2(VAR_6);
  VAR_9 = &VAR_8->ccp;

  FUNC_4(VAR_6->prompt, "%s: %s [%s]\n", VAR_8->name, VAR_9->fsm.name,
                FUNC_1(VAR_9->fsm.state));
  if (VAR_9->fsm.state == VAR_4) {
    FUNC_4(VAR_6->prompt, " My protocol = %s, His protocol = %s\n",
                  FUNC_5(VAR_9->my_proto), FUNC_5(VAR_9->his_proto));
    FUNC_4(VAR_6->prompt, " Output: %ld --> %ld,  Input: %ld --> %ld\n",
                  VAR_9->uncompout, VAR_9->compout,
                  VAR_9->compin, VAR_9->uncompin);
  }

  if (VAR_9->in.algorithm != -1)
    FUNC_4(VAR_6->prompt, "\n Input Options:  %s\n",
                  (*VAR_5[VAR_9->in.algorithm]->Disp)(&VAR_9->in.opt));

  if (VAR_9->out.algorithm != -1) {
    VAR_7 = &VAR_9->out.opt;
    for (VAR_10 = 0; VAR_10 < VAR_9->out.algorithm; VAR_10++)
      if (FUNC_0(VAR_9->cfg.neg[VAR_5[VAR_10]->Neg]))
        VAR_7 = &(*VAR_7)->next;
    FUNC_4(VAR_6->prompt, " Output Options: %s\n",
                  (*VAR_5[VAR_9->out.algorithm]->Disp)(&(*VAR_7)->val));
  }

  FUNC_4(VAR_6->prompt, "\n Defaults: ");
  FUNC_4(VAR_6->prompt, "FSM retry = %us, max %u Config"
                " REQ%s, %u Term REQ%s\n", VAR_9->cfg.fsm.timeout,
                VAR_9->cfg.fsm.maxreq, VAR_9->cfg.fsm.maxreq == 1 ? "" : "s",
                VAR_9->cfg.fsm.maxtrm, VAR_9->cfg.fsm.maxtrm == 1 ? "" : "s");
  FUNC_4(VAR_6->prompt, "           deflate windows: ");
  FUNC_4(VAR_6->prompt, "incoming = %d, ", VAR_9->cfg.deflate.in.winsize);
  FUNC_4(VAR_6->prompt, "outgoing = %d\n", VAR_9->cfg.deflate.out.winsize);

  FUNC_4(VAR_6->prompt, "           MPPE: ");
  if (VAR_9->cfg.mppe.keybits)
    FUNC_4(VAR_6->prompt, "%d bits, ", VAR_9->cfg.mppe.keybits);
  else
    FUNC_4(VAR_6->prompt, "any bits, ");
  switch (VAR_9->cfg.mppe.state) {
  case 129:
    FUNC_4(VAR_6->prompt, "stateful");
    break;
  case 128:
    FUNC_4(VAR_6->prompt, "stateless");
    break;
  case 130:
    FUNC_4(VAR_6->prompt, "any state");
    break;
  }
  FUNC_4(VAR_6->prompt, "%s\n",
                VAR_9->cfg.mppe.required ? ", required" : "");


  FUNC_4(VAR_6->prompt, "\n           DEFLATE:    %s\n",
                FUNC_3(VAR_9->cfg.neg[VAR_0]));
  FUNC_4(VAR_6->prompt, "           PREDICTOR1: %s\n",
                FUNC_3(VAR_9->cfg.neg[VAR_3]));
  FUNC_4(VAR_6->prompt, "           DEFLATE24:  %s\n",
                FUNC_3(VAR_9->cfg.neg[VAR_1]));

  FUNC_4(VAR_6->prompt, "           MPPE:       %s\n",
                FUNC_3(VAR_9->cfg.neg[VAR_2]));

  return 0;
}
