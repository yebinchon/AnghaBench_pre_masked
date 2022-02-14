
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
struct fsm {int state; TYPE_3__* parent; TYPE_2__* fn; int LogLevel; TYPE_1__* link; } ;
struct TYPE_6__ {int object; int (* LayerDown ) (int ,struct fsm*) ;} ;
struct TYPE_5__ {int (* LayerDown ) (struct fsm*) ;int (* DecodeConfig ) (struct fsm*,int *,int *,int ,struct fsm_decode*) ;int (* SendTerminateAck ) (struct fsm*,int ) ;} ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*,int ) ;
 int FUNC_1 (struct fsm*) ;
 int * FUNC_2 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_3 (struct fsm*,int const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*) ;
 struct mbuf* FUNC_8 (struct mbuf*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct fsm*,int ) ;
 int FUNC_11 (struct fsm*,int *,int *,int ,struct fsm_decode*) ;
 int FUNC_12 (struct fsm*) ;
 int FUNC_13 (int ,struct fsm*) ;

__attribute__((used)) static void
FUNC_14(struct fsm *VAR_2, struct fsmheader *VAR_3, struct mbuf *VAR_4)

{
  struct fsm_decode VAR_5;
  int VAR_6, VAR_7;
  u_char *VAR_8;

  VAR_6 = FUNC_7(VAR_4);
  VAR_7 = FUNC_9(VAR_3->length) - sizeof *VAR_3;
  if (VAR_6 < VAR_7) {
    FUNC_6(VAR_4);
    return;
  }




  switch (VAR_2->state) {
  case 133:
  case 130:
    FUNC_5(VAR_2->LogLevel, "%s: Oops, RCN in %s.\n",
              VAR_2->link->name, FUNC_4(VAR_2->state));
    FUNC_6(VAR_4);
    return;
  case 135:
  case 129:
    (*VAR_2->fn->SendTerminateAck)(VAR_2, VAR_3->id);
    FUNC_6(VAR_4);
    return;
  case 134:
  case 128:
    FUNC_6(VAR_4);
    return;
  }

  VAR_4 = FUNC_8(VAR_4);
  VAR_5.ackend = VAR_5.ack;
  VAR_5.nakend = VAR_5.nak;
  VAR_5.rejend = VAR_5.rej;
  VAR_8 = FUNC_2(VAR_4);
  (*VAR_2->fn->DecodeConfig)(VAR_2, VAR_8, VAR_8 + VAR_7, VAR_1, &VAR_5);
  if (VAR_7 < (int)sizeof(struct fsm_opt_hdr))
    FUNC_5(VAR_2->LogLevel, "  [EMPTY]\n");

  switch (VAR_2->state) {
  case 131:
  case 136:
    FUNC_0(VAR_2, VAR_0);
    FUNC_1(VAR_2);
    break;
  case 132:
    (*VAR_2->fn->LayerDown)(VAR_2);
    FUNC_1(VAR_2);
    FUNC_3(VAR_2, 131);
    (*VAR_2->parent->LayerDown)(VAR_2->parent->object, VAR_2);
    break;
  case 137:
    FUNC_1(VAR_2);
    FUNC_3(VAR_2, 131);
    break;
  }

  FUNC_6(VAR_4);
}
