
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


typedef int u_short ;
typedef int u_int16_t ;
typedef int u_char ;
struct physical {int dummy; } ;
struct TYPE_14__ {scalar_t__ class; size_t len; int address; } ;
struct TYPE_15__ {TYPE_6__ enddisc; int negenddisc; } ;
struct mp {TYPE_7__ cfg; } ;
struct TYPE_13__ {TYPE_4__* bundle; } ;
struct TYPE_10__ {int opmask; int msg; } ;
struct TYPE_9__ {int max_mru; } ;
struct lcp {int want_mru; int want_auth; scalar_t__ want_authtype; int want_mrru; TYPE_5__ fsm; scalar_t__ want_shortseq; TYPE_2__ want_callback; scalar_t__ want_lqrperiod; scalar_t__ want_magic; TYPE_1__ cfg; scalar_t__ want_accmap; scalar_t__ want_protocomp; scalar_t__ want_acfcomp; } ;
struct fsm_opt {scalar_t__* data; } ;
struct fsm {int reqid; TYPE_8__* link; } ;
struct TYPE_16__ {size_t name; } ;
struct TYPE_11__ {struct mp mp; } ;
struct TYPE_12__ {TYPE_3__ ncp; } ;


 void* VAR_0 ;
 int FUNC_0 (void*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,struct fsm_opt*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int FUNC_3 (struct lcp*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct lcp* FUNC_4 (struct fsm*) ;
 int FUNC_5 (struct fsm*,int ,int ,int *,int,int ) ;
 struct physical* FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ,char*,size_t,...) ;
 int FUNC_8 (scalar_t__*,int ,size_t) ;
 int FUNC_9 (struct physical*) ;
 int FUNC_10 (struct physical*) ;
 size_t FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__*,scalar_t__*) ;
 int FUNC_13 (int*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_14(struct fsm *VAR_19)
{

  struct physical *VAR_20 = FUNC_6(VAR_19->link);
  struct lcp *VAR_21 = FUNC_4(VAR_19);
  u_char VAR_22[200];
  struct fsm_opt *VAR_23;
  struct mp *VAR_24;
  u_int16_t VAR_25;
  u_short VAR_26;

  if (!VAR_20) {
    FUNC_7(VAR_4, "%s: LcpSendConfigReq: Not a physical link !\n",
              VAR_19->link->name);
    return;
  }

  VAR_23 = (struct fsm_opt *)VAR_22;
  if (!FUNC_10(VAR_20)) {
    if (VAR_21->want_acfcomp && !FUNC_3(VAR_21, VAR_9))
      FUNC_1(VAR_9, 2, VAR_23);

    if (VAR_21->want_protocomp && !FUNC_3(VAR_21, VAR_16))
      FUNC_1(VAR_16, 2, VAR_23);

    if (!FUNC_3(VAR_21, VAR_8)) {
      FUNC_12(&VAR_21->want_accmap, VAR_23->data);
      FUNC_1(VAR_8, 6, VAR_23);
    }
  }

  VAR_26 = VAR_20 ? FUNC_9(VAR_20) : 0;
  if (VAR_21->cfg.max_mru && (!VAR_26 || VAR_26 > VAR_21->cfg.max_mru))
    VAR_26 = VAR_21->cfg.max_mru;
  if (VAR_26 && VAR_21->want_mru > VAR_26) {
    FUNC_7(VAR_5, "%s: Reducing configured MRU from %u to %u\n",
               VAR_19->link->name, VAR_21->want_mru, VAR_26);
    VAR_21->want_mru = VAR_26;
  }
  if (!FUNC_3(VAR_21, VAR_15)) {
    FUNC_13(&VAR_21->want_mru, VAR_23->data);
    FUNC_1(VAR_15, 4, VAR_23);
  }

  if (VAR_21->want_magic && !FUNC_3(VAR_21, VAR_13)) {
    FUNC_12(&VAR_21->want_magic, VAR_23->data);
    FUNC_1(VAR_13, 6, VAR_23);
  }

  if (VAR_21->want_lqrperiod && !FUNC_3(VAR_21, VAR_17)) {
    VAR_25 = VAR_7;
    FUNC_13(&VAR_25, VAR_23->data);
    FUNC_12(&VAR_21->want_lqrperiod, VAR_23->data + 2);
    FUNC_1(VAR_17, 8, VAR_23);
  }

  switch (VAR_21->want_auth) {
  case 128:
    VAR_25 = 128;
    FUNC_13(&VAR_25, VAR_23->data);
    FUNC_1(VAR_10, 4, VAR_23);
    break;

  case 129:
    VAR_25 = 129;
    FUNC_13(&VAR_25, VAR_23->data);
    VAR_23->data[2] = VAR_21->want_authtype;
    FUNC_1(VAR_10, 5, VAR_23);
    break;
  }

  if (!FUNC_3(VAR_21, VAR_11)) {
    if (VAR_21->want_callback.opmask & FUNC_0(VAR_0)) {
      *VAR_23->data = VAR_0;
      FUNC_1(VAR_11, 3, VAR_23);
    } else if (VAR_21->want_callback.opmask & FUNC_0(VAR_1)) {
      *VAR_23->data = VAR_1;
      FUNC_1(VAR_11, 3, VAR_23);
    } else if (VAR_21->want_callback.opmask & FUNC_0(VAR_2)) {
      size_t VAR_27 = FUNC_11(VAR_21->want_callback.msg);

      if (VAR_27 > sizeof VAR_23->data - 1) {
        VAR_27 = sizeof VAR_23->data - 1;
        FUNC_7(VAR_5, "Truncating E164 data to %zu octets (oops!)\n",
     VAR_27);
      }
      *VAR_23->data = VAR_2;
      FUNC_8(VAR_23->data + 1, VAR_21->want_callback.msg, VAR_27);
      FUNC_1(VAR_11, VAR_27 + 3, VAR_23);
    }
  }

  if (VAR_21->want_mrru && !FUNC_3(VAR_21, VAR_14)) {
    FUNC_13(&VAR_21->want_mrru, VAR_23->data);
    FUNC_1(VAR_14, 4, VAR_23);

    if (VAR_21->want_shortseq && !FUNC_3(VAR_21, VAR_18))
      FUNC_1(VAR_18, 2, VAR_23);
  }

  VAR_24 = &VAR_21->fsm.bundle->ncp.mp;
  if (VAR_24->cfg.enddisc.class != 0 && FUNC_2(VAR_24->cfg.negenddisc) &&
      !FUNC_3(VAR_21, VAR_12)) {
    *VAR_23->data = VAR_24->cfg.enddisc.class;
    FUNC_8(VAR_23->data+1, VAR_24->cfg.enddisc.address, VAR_24->cfg.enddisc.len);
    FUNC_1(VAR_12, VAR_24->cfg.enddisc.len + 3, VAR_23);
  }

  FUNC_5(VAR_19, VAR_3, VAR_19->reqid, VAR_22, (u_char *)VAR_23 - VAR_22,
             VAR_6);
}
