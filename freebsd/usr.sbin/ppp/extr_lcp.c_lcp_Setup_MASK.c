
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


struct physical {scalar_t__ type; TYPE_8__* dl; } ;
struct TYPE_11__ {scalar_t__ opmask; } ;
struct TYPE_20__ {int accmap; int lqrperiod; int lqr; int pap; int chap81; int chap80lm; int chap80nt; int chap05; int protocomp; int acfcomp; void* mru; } ;
struct TYPE_17__ {int open_mode; scalar_t__ parent; TYPE_5__* bundle; int link; } ;
struct TYPE_12__ {scalar_t__ opmask; } ;
struct lcp {int want_shortseq; int want_acfcomp; int his_accmap; int want_accmap; int his_protocomp; int want_protocomp; int want_authtype; int want_lqrperiod; scalar_t__ LcpFailedMagic; scalar_t__ auth_ineed; scalar_t__ auth_iwait; scalar_t__ my_reject; scalar_t__ his_reject; TYPE_10__ want_callback; void* want_auth; scalar_t__ want_magic; TYPE_9__ cfg; TYPE_6__ fsm; int want_mrru; void* want_mru; scalar_t__ mru_req; scalar_t__ his_shortseq; TYPE_1__ his_callback; scalar_t__ his_authtype; scalar_t__ his_auth; scalar_t__ his_acfcomp; scalar_t__ his_lqrperiod; scalar_t__ his_magic; scalar_t__ his_mrru; void* his_mru; } ;
struct callback {int dummy; } ;
struct TYPE_18__ {int callback; } ;
struct TYPE_19__ {TYPE_7__ cfg; } ;
struct TYPE_13__ {int shortseq; int mrru; } ;
struct TYPE_14__ {TYPE_2__ cfg; } ;
struct TYPE_15__ {TYPE_3__ mp; } ;
struct TYPE_16__ {TYPE_4__ ncp; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct physical* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_10__*,int *,int) ;

void
FUNC_4(struct lcp *VAR_4, int VAR_5)
{
  struct physical *VAR_6 = FUNC_2(VAR_4->fsm.link);

  VAR_4->fsm.open_mode = VAR_5;

  VAR_4->his_mru = VAR_0;
  VAR_4->his_mrru = 0;
  VAR_4->his_magic = 0;
  VAR_4->his_lqrperiod = 0;
  VAR_4->his_acfcomp = 0;
  VAR_4->his_auth = 0;
  VAR_4->his_authtype = 0;
  VAR_4->his_callback.opmask = 0;
  VAR_4->his_shortseq = 0;
  VAR_4->mru_req = 0;

  if ((VAR_4->want_mru = VAR_4->cfg.mru) == 0)
    VAR_4->want_mru = VAR_0;
  VAR_4->want_mrru = VAR_4->fsm.bundle->ncp.mp.cfg.mrru;
  VAR_4->want_shortseq = FUNC_1(VAR_4->fsm.bundle->ncp.mp.cfg.shortseq) ? 1 : 0;
  VAR_4->want_acfcomp = FUNC_1(VAR_4->cfg.acfcomp) ? 1 : 0;

  if (VAR_4->fsm.parent) {
    VAR_4->his_accmap = 0xffffffff;
    VAR_4->want_accmap = VAR_4->cfg.accmap;
    VAR_4->his_protocomp = 0;
    VAR_4->want_protocomp = FUNC_1(VAR_4->cfg.protocomp) ? 1 : 0;
    VAR_4->want_magic = FUNC_0();

    if (FUNC_1(VAR_4->cfg.chap05)) {
      VAR_4->want_auth = VAR_2;
      VAR_4->want_authtype = 0x05;

    } else if (FUNC_1(VAR_4->cfg.chap80nt) ||
               FUNC_1(VAR_4->cfg.chap80lm)) {
      VAR_4->want_auth = VAR_2;
      VAR_4->want_authtype = 0x80;
    } else if (FUNC_1(VAR_4->cfg.chap81)) {
      VAR_4->want_auth = VAR_2;
      VAR_4->want_authtype = 0x81;

    } else if (FUNC_1(VAR_4->cfg.pap)) {
      VAR_4->want_auth = VAR_3;
      VAR_4->want_authtype = 0;
    } else {
      VAR_4->want_auth = 0;
      VAR_4->want_authtype = 0;
    }

    if (VAR_6->type != VAR_1)
      FUNC_3(&VAR_4->want_callback, &VAR_6->dl->cfg.callback,
             sizeof(struct callback));
    else
      VAR_4->want_callback.opmask = 0;
    VAR_4->want_lqrperiod = FUNC_1(VAR_4->cfg.lqr) ?
                          VAR_4->cfg.lqrperiod * 100 : 0;
  } else {
    VAR_4->his_accmap = VAR_4->want_accmap = 0;
    VAR_4->his_protocomp = VAR_4->want_protocomp = 1;
    VAR_4->want_magic = 0;
    VAR_4->want_auth = 0;
    VAR_4->want_authtype = 0;
    VAR_4->want_callback.opmask = 0;
    VAR_4->want_lqrperiod = 0;
  }

  VAR_4->his_reject = VAR_4->my_reject = 0;
  VAR_4->auth_iwait = VAR_4->auth_ineed = 0;
  VAR_4->LcpFailedMagic = 0;
}
