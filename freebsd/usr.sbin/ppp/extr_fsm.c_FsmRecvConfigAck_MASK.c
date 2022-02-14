
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct mbuf {int dummy; } ;
struct fsmheader {int id; int length; } ;
struct fsm_opt_hdr {int dummy; } ;
struct fsm_decode {int rej; int rejend; int nak; int nakend; int ack; int ackend; } ;
struct fsm {int state; TYPE_3__* parent; TYPE_2__* fn; TYPE_1__* link; int LogLevel; } ;
struct TYPE_6__ {int object; int (* LayerDown ) (int ,struct fsm*) ;int (* LayerUp ) (int ,struct fsm*) ;} ;
struct TYPE_5__ {int (* LayerDown ) (struct fsm*) ;int (* LayerUp ) (struct fsm*) ;int (* SendTerminateAck ) (struct fsm*,int ) ;int (* DecodeConfig ) (struct fsm*,int *,int *,int ,struct fsm_decode*) ;} ;
struct TYPE_4__ {int lcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsm*,int ) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*) ;
 int * FUNC_3 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_4 (struct fsm*,int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (struct mbuf*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct fsm*,int *,int *,int ,struct fsm_decode*) ;
 int FUNC_12 (struct fsm*,int ) ;
 int FUNC_13 (struct fsm*) ;
 int FUNC_14 (int ,struct fsm*) ;
 int FUNC_15 (struct fsm*) ;
 int FUNC_16 (struct fsm*) ;
 int FUNC_17 (int ,struct fsm*) ;

__attribute__((used)) static void
FUNC_18(struct fsm *VAR_3, struct fsmheader *VAR_4, struct mbuf *VAR_5)

{
  struct fsm_decode VAR_6;
  int VAR_7, VAR_8;
  u_char *VAR_9;

  VAR_7 = FUNC_8(VAR_5);
  VAR_8 = FUNC_10(VAR_4->length) - sizeof *VAR_4;
  if (VAR_7 < VAR_8) {
    FUNC_7(VAR_5);
    return;
  }

  VAR_5 = FUNC_9(VAR_5);
  VAR_6.ackend = VAR_6.ack;
  VAR_6.nakend = VAR_6.nak;
  VAR_6.rejend = VAR_6.rej;
  VAR_9 = FUNC_3(VAR_5);
  (*VAR_3->fn->DecodeConfig)(VAR_3, VAR_9, VAR_9 + VAR_8, VAR_2, &VAR_6);
  if (VAR_8 < (int)sizeof(struct fsm_opt_hdr))
    FUNC_6(VAR_3->LogLevel, "  [EMPTY]\n");

  switch (VAR_3->state) {
    case 133:
    case 129:
    (*VAR_3->fn->SendTerminateAck)(VAR_3, VAR_4->id);
    break;
  case 132:
  case 128:
    break;
  case 130:
    FUNC_0(VAR_3, VAR_0);
    FUNC_4(VAR_3, 135);
    break;
  case 135:
    FUNC_1(VAR_3);
    FUNC_4(VAR_3, 130);
    break;
  case 134:
    FUNC_0(VAR_3, VAR_0);
    FUNC_4(VAR_3, 131);
    if ((*VAR_3->fn->LayerUp)(VAR_3))
      (*VAR_3->parent->LayerUp)(VAR_3->parent->object, VAR_3);
    else {
      (*VAR_3->fn->LayerDown)(VAR_3);
      FUNC_0(VAR_3, VAR_1);
      FUNC_2(VAR_3);
      FUNC_4(VAR_3, 132);
      FUNC_5(&VAR_3->link->lcp);
    }
    break;
  case 131:
    (*VAR_3->fn->LayerDown)(VAR_3);
    FUNC_1(VAR_3);
    FUNC_4(VAR_3, 130);
    (*VAR_3->parent->LayerDown)(VAR_3->parent->object, VAR_3);
    break;
  }
  FUNC_7(VAR_5);
}
