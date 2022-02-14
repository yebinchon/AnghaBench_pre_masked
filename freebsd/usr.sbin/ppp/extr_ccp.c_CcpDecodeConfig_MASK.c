
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_15__ {int id; int len; } ;
struct fsm_opt {TYPE_4__ hdr; } ;
struct fsm_decode {scalar_t__ rejend; scalar_t__ rej; scalar_t__ nakend; scalar_t__ nak; } ;
struct fsm {TYPE_6__* link; int bundle; } ;
struct ccp_opt {struct fsm_opt val; struct ccp_opt* next; } ;
struct TYPE_18__ {int algorithm; int * state; struct fsm_opt opt; } ;
struct TYPE_19__ {int * neg; } ;
struct TYPE_13__ {struct ccp_opt* opt; } ;
struct ccp {int my_reject; int his_proto; int my_proto; int his_reject; TYPE_7__ in; TYPE_8__ cfg; TYPE_2__ out; } ;
struct TYPE_16__ {int fsm; } ;
struct TYPE_17__ {TYPE_5__ lcp; int name; } ;
struct TYPE_14__ {int const (* Set ) (int ,struct fsm_opt*,TYPE_8__*) ;} ;
struct TYPE_12__ {int (* Set ) (int ,struct fsm_opt*,TYPE_8__*) ;} ;
struct TYPE_11__ {int id; char* (* Disp ) (struct fsm_opt*) ;size_t Neg; int (* Required ) (struct fsm*) ;TYPE_3__ o; TYPE_1__ i; int (* Usable ) (struct fsm*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;
 TYPE_10__** VAR_4 ;
 struct ccp* FUNC_1 (struct fsm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fsm_decode*,struct fsm_opt*) ;
 int FUNC_4 (struct fsm_decode*,struct fsm_opt*) ;
 int FUNC_5 (struct fsm_decode*) ;
 struct fsm_opt* FUNC_6 (int **) ;
 int FUNC_7 (struct fsm_decode*,struct fsm_opt*) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (struct fsm_opt*,struct fsm_opt*,int ) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (struct fsm_opt*) ;
 int FUNC_12 (struct fsm*) ;
 int FUNC_13 (int ,struct fsm_opt*,TYPE_8__*) ;
 int const FUNC_14 (int ,struct fsm_opt*,TYPE_8__*) ;
 int FUNC_15 (struct fsm*) ;
 int FUNC_16 (struct fsm*) ;

__attribute__((used)) static void
FUNC_17(struct fsm *VAR_5, u_char *VAR_6, u_char *VAR_7, int VAR_8,
                struct fsm_decode *VAR_9)
{

  struct ccp *VAR_10 = FUNC_1(VAR_5);
  int VAR_11;
  const char *VAR_12;
  struct fsm_opt *VAR_13;

  if (VAR_8 == 128)
    VAR_10->in.algorithm = -1;

  while (VAR_7 >= VAR_6 + sizeof(VAR_13->hdr)) {
    if ((VAR_13 = FUNC_6(&VAR_6)) == ((void*)0))
      break;

    for (VAR_11 = VAR_3-1; VAR_11 > -1; VAR_11--)
      if (VAR_4[VAR_11]->id == VAR_13->hdr.id)
        break;

    VAR_12 = VAR_11 == -1 ? "" : (*VAR_4[VAR_11]->Disp)(VAR_13);
    if (VAR_12 == ((void*)0))
      VAR_12 = "";

    FUNC_8(VAR_0, " %s[%d] %s\n", FUNC_10(VAR_13->hdr.id),
               VAR_13->hdr.len, VAR_12);

    if (VAR_11 == -1) {

      if (VAR_8 == 128) {
        VAR_10->my_reject |= (1 << VAR_13->hdr.id);
        FUNC_7(VAR_9, VAR_13);
      }
    } else {
      struct ccp_opt *VAR_14;

      switch (VAR_8) {
      case 128:
        if (FUNC_0(VAR_10->cfg.neg[VAR_4[VAR_11]->Neg]) &&
            (*VAR_4[VAR_11]->Usable)(VAR_5) &&
            VAR_10->in.algorithm == -1) {
          FUNC_9(&VAR_10->in.opt, VAR_13, VAR_13->hdr.len);
          switch ((*VAR_4[VAR_11]->i.Set)(VAR_5->bundle, &VAR_10->in.opt, &VAR_10->cfg)) {
          case 129:
            FUNC_7(VAR_9, &VAR_10->in.opt);
            break;
          case 130:
            FUNC_4(VAR_9, &VAR_10->in.opt);
            break;
          case 131:
            FUNC_3(VAR_9, &VAR_10->in.opt);
            VAR_10->his_proto = VAR_13->hdr.id;
            VAR_10->in.algorithm = (int)VAR_11;
            break;
          }
        } else {
          FUNC_7(VAR_9, VAR_13);
        }
        break;
      case 130:
        for (VAR_14 = VAR_10->out.opt; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
          if (VAR_14->val.hdr.id == VAR_13->hdr.id)
            break;
        if (VAR_14 == ((void*)0))
          FUNC_8(VAR_0, "%s: Warning: Ignoring peer NAK of unsent"
                     " option\n", VAR_5->link->name);
        else {
          FUNC_9(&VAR_14->val, VAR_13, VAR_13->hdr.len);
          if ((*VAR_4[VAR_11]->o.Set)(VAR_5->bundle, &VAR_14->val, &VAR_10->cfg) ==
              131)
            VAR_10->my_proto = VAR_4[VAR_11]->id;
          else {
            VAR_10->his_reject |= (1 << VAR_13->hdr.id);
            VAR_10->my_proto = -1;
            if (VAR_4[VAR_11]->Required(VAR_5)) {
              FUNC_8(VAR_1, "%s: Cannot understand peers (required)"
                         " %s negotiation\n", VAR_5->link->name,
                         FUNC_10(VAR_4[VAR_11]->id));
              FUNC_2(&VAR_5->link->lcp.fsm);
            }
          }
        }
        break;
      case 129:
        VAR_10->his_reject |= (1 << VAR_13->hdr.id);
        VAR_10->my_proto = -1;
        if (VAR_4[VAR_11]->Required(VAR_5)) {
          FUNC_8(VAR_1, "%s: Peer rejected (required) %s negotiation\n",
                     VAR_5->link->name, FUNC_10(VAR_4[VAR_11]->id));
          FUNC_2(&VAR_5->link->lcp.fsm);
        }
        break;
      }
    }
  }

  if (VAR_8 != VAR_2) {
    FUNC_5(VAR_9);
    if (VAR_9->rejend != VAR_9->rej || VAR_9->nakend != VAR_9->nak) {
      if (VAR_10->in.state == ((void*)0)) {
        VAR_10->his_proto = -1;
        VAR_10->in.algorithm = -1;
      }
    }
  }
}
