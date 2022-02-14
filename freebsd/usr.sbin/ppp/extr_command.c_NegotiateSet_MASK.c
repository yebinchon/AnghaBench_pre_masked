
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_18__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_36__ {unsigned int* neg; } ;
struct TYPE_37__ {TYPE_6__ cfg; } ;
struct link {TYPE_7__ ccp; } ;
struct datalink {TYPE_18__* physical; int name; } ;
struct cmdargs {int argn; TYPE_19__* bundle; TYPE_14__* cmd; int * argv; struct datalink* cx; } ;
struct TYPE_38__ {unsigned int negenddisc; unsigned int shortseq; } ;
struct TYPE_39__ {TYPE_8__ cfg; } ;
struct TYPE_33__ {int load; int (* func ) (TYPE_17__*) ;} ;
struct TYPE_34__ {int method; TYPE_3__ timer; } ;
struct TYPE_35__ {TYPE_4__ lqm; } ;
struct TYPE_32__ {int state; } ;
struct TYPE_31__ {unsigned int dns_neg; } ;
struct TYPE_21__ {unsigned int neg; } ;
struct TYPE_22__ {TYPE_10__ vj; TYPE_1__ ns; } ;
struct TYPE_23__ {TYPE_11__ cfg; } ;
struct TYPE_24__ {TYPE_12__ ipcp; TYPE_9__ mp; } ;
struct TYPE_30__ {TYPE_13__ ncp; } ;
struct TYPE_26__ {unsigned int acfcomp; unsigned int chap05; unsigned int chap80nt; unsigned int chap80lm; unsigned int chap81; int echo; int lqrperiod; unsigned int lqr; unsigned int pap; unsigned int protocomp; } ;
struct TYPE_28__ {TYPE_15__ cfg; TYPE_2__ fsm; int want_lqrperiod; } ;
struct TYPE_27__ {TYPE_17__ lcp; } ;
struct TYPE_29__ {TYPE_16__ link; TYPE_5__ hdlc; } ;
struct TYPE_25__ {int lauth; int name; scalar_t__ args; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_19__*) ;
 int FUNC_1 (TYPE_19__*) ;
 struct link* FUNC_2 (struct cmdargs const*) ;
 char* FUNC_3 (int ,unsigned int*,unsigned int*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_18__*) ;
 int FUNC_6 (TYPE_17__*) ;

__attribute__((used)) static int
FUNC_7(struct cmdargs const *VAR_11)
{
  long VAR_12 = (long)VAR_11->cmd->args;
  struct link *VAR_13 = FUNC_2(VAR_11);
  struct datalink *VAR_14 = VAR_11->cx;
  const char *VAR_15;
  unsigned VAR_16;
  unsigned VAR_17;

  if ((VAR_15 = FUNC_3(VAR_11->argv[VAR_11->argn-2], &VAR_16, &VAR_17)) == ((void*)0))
    return 1;

  if ((VAR_11->cmd->lauth & VAR_5) && !VAR_14) {
    FUNC_4(VAR_8, "%s %s: No context (use the `link' command)\n",
              VAR_15, VAR_11->cmd->name);
    return 2;
  } else if (VAR_14 && !(VAR_11->cmd->lauth & (VAR_5|VAR_6))) {
    FUNC_4(VAR_8, "%s %s: Redundant context (%s) ignored\n",
              VAR_15, VAR_11->cmd->name, VAR_14->name);
    VAR_14 = ((void*)0);
  }

  switch (VAR_12) {
    case 146:
      VAR_14->physical->link.lcp.cfg.acfcomp &= VAR_16;
      VAR_14->physical->link.lcp.cfg.acfcomp |= VAR_17;
      break;
    case 145:
      VAR_14->physical->link.lcp.cfg.chap05 &= VAR_16;
      VAR_14->physical->link.lcp.cfg.chap05 |= VAR_17;
      break;

    case 144:
      VAR_14->physical->link.lcp.cfg.chap80nt &= VAR_16;
      VAR_14->physical->link.lcp.cfg.chap80nt |= VAR_17;
      break;
    case 143:
      VAR_14->physical->link.lcp.cfg.chap80lm &= VAR_16;
      VAR_14->physical->link.lcp.cfg.chap80lm |= VAR_17;
      break;
    case 142:
      VAR_14->physical->link.lcp.cfg.chap81 &= VAR_16;
      VAR_14->physical->link.lcp.cfg.chap81 |= VAR_17;
      break;
    case 136:
      VAR_13->ccp.cfg.neg[VAR_2] &= VAR_16;
      VAR_13->ccp.cfg.neg[VAR_2] |= VAR_17;
      break;

    case 141:
      VAR_13->ccp.cfg.neg[VAR_0] &= VAR_16;
      VAR_13->ccp.cfg.neg[VAR_0] |= VAR_17;
      break;
    case 140:
      VAR_11->bundle->ncp.ipcp.cfg.ns.dns_neg &= VAR_16;
      VAR_11->bundle->ncp.ipcp.cfg.ns.dns_neg |= VAR_17;
      break;
    case 139:
      if (VAR_14->physical->link.lcp.cfg.echo && !VAR_17) {
        VAR_14->physical->link.lcp.cfg.echo = 0;
        VAR_14->physical->hdlc.lqm.method &= ~VAR_7;
        if (VAR_14->physical->hdlc.lqm.method & VAR_7 &&
            !VAR_14->physical->link.lcp.want_lqrperiod &&
            VAR_14->physical->hdlc.lqm.timer.load) {
          VAR_14->physical->hdlc.lqm.timer.load = 0;
          FUNC_5(VAR_14->physical);
        }
      } else if (!VAR_14->physical->link.lcp.cfg.echo && VAR_17) {
        VAR_14->physical->link.lcp.cfg.echo = 1;
        VAR_14->physical->hdlc.lqm.method |= VAR_7;
        VAR_14->physical->hdlc.lqm.timer.load =
     VAR_14->physical->link.lcp.cfg.lqrperiod * VAR_9;
        if (VAR_14->physical->link.lcp.fsm.state == VAR_10)
          (*VAR_14->physical->hdlc.lqm.timer.func)(&VAR_14->physical->link.lcp);
      }
      break;
    case 138:
      VAR_11->bundle->ncp.mp.cfg.negenddisc &= VAR_16;
      VAR_11->bundle->ncp.mp.cfg.negenddisc |= VAR_17;
      break;
    case 137:
      VAR_14->physical->link.lcp.cfg.lqr &= VAR_16;
      VAR_14->physical->link.lcp.cfg.lqr |= VAR_17;
      break;
    case 135:
      VAR_14->physical->link.lcp.cfg.pap &= VAR_16;
      VAR_14->physical->link.lcp.cfg.pap |= VAR_17;
      break;
    case 134:
      VAR_13->ccp.cfg.neg[VAR_1] &= VAR_16;
      VAR_13->ccp.cfg.neg[VAR_1] |= VAR_17;
      break;
    case 133:
      VAR_13->ccp.cfg.neg[VAR_3] &= VAR_16;
      VAR_13->ccp.cfg.neg[VAR_3] |= VAR_17;
      break;
    case 132:
      VAR_14->physical->link.lcp.cfg.protocomp &= VAR_16;
      VAR_14->physical->link.lcp.cfg.protocomp |= VAR_17;
      break;
    case 131:
      switch (FUNC_1(VAR_11->bundle)) {
        case 129:
          break;
        case 128:

          if (FUNC_0(VAR_11->bundle) >= VAR_4) {
            FUNC_4(VAR_8, "shortseq: Only changeable before"
                       " LCP negotiations\n");
            return 1;
          }
          break;
        default:
          FUNC_4(VAR_8, "shortseq: Only changeable at phase"
                     " DEAD/ESTABLISH\n");
          return 1;
      }
      VAR_11->bundle->ncp.mp.cfg.shortseq &= VAR_16;
      VAR_11->bundle->ncp.mp.cfg.shortseq |= VAR_17;
      break;
    case 130:
      VAR_11->bundle->ncp.ipcp.cfg.vj.neg &= VAR_16;
      VAR_11->bundle->ncp.ipcp.cfg.vj.neg |= VAR_17;
      break;
  }

  return 0;
}
