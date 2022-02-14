
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int16_t ;
typedef int u_char ;
struct physical {int dummy; } ;
struct TYPE_10__ {TYPE_4__* dns; } ;
struct TYPE_7__ {int dns_neg; } ;
struct TYPE_8__ {TYPE_2__ ns; } ;
struct compreq {int slots; int compcid; int proto; } ;
struct TYPE_6__ {struct compreq s_addr; } ;
struct ipcp {int my_compproto; TYPE_5__ ns; TYPE_3__ cfg; scalar_t__ heis1172; TYPE_1__ my_ip; } ;
struct fsm_opt {int data; } ;
struct fsm {int reqid; int link; } ;
struct TYPE_9__ {struct compreq s_addr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,struct fsm_opt*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ipcp*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct ipcp* FUNC_3 (struct fsm*) ;
 int FUNC_4 (struct fsm*,int ,int ,int *,int,int ) ;
 int FUNC_5 (int) ;
 struct physical* FUNC_6 (int ) ;
 int FUNC_7 (int ,struct compreq*,int) ;
 int FUNC_8 (struct physical*) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void
FUNC_10(struct fsm *VAR_9)
{

  struct physical *VAR_10 = FUNC_6(VAR_9->link);
  struct ipcp *VAR_11 = FUNC_3(VAR_9);
  u_char VAR_12[VAR_1];
  struct fsm_opt *VAR_13;

  VAR_13 = (struct fsm_opt *)VAR_12;

  if ((VAR_10 && !FUNC_8(VAR_10)) || !FUNC_2(VAR_11, VAR_6)) {
    FUNC_7(VAR_13->data, &VAR_11->my_ip.s_addr, 4);
    FUNC_0(VAR_6, 6, VAR_13);
  }

  if (VAR_11->my_compproto && !FUNC_2(VAR_11, VAR_5)) {
    if (VAR_11->heis1172) {
      u_int16_t VAR_14 = VAR_3;

      FUNC_9(&VAR_14, VAR_13->data);
      FUNC_0(VAR_5, 4, VAR_13);
    } else {
      struct compreq VAR_15;

      VAR_15.proto = FUNC_5(VAR_11->my_compproto >> 16);
      VAR_15.slots = (VAR_11->my_compproto >> 8) & 255;
      VAR_15.compcid = VAR_11->my_compproto & 1;
      FUNC_7(VAR_13->data, &VAR_15, 4);
      FUNC_0(VAR_5, 6, VAR_13);
    }
  }

  if (FUNC_1(VAR_11->cfg.ns.dns_neg)) {
    if (!FUNC_2(VAR_11, VAR_7 - VAR_4)) {
      FUNC_7(VAR_13->data, &VAR_11->ns.dns[0].s_addr, 4);
      FUNC_0(VAR_7, 6, VAR_13);
    }

    if (!FUNC_2(VAR_11, VAR_8 - VAR_4)) {
      FUNC_7(VAR_13->data, &VAR_11->ns.dns[1].s_addr, 4);
      FUNC_0(VAR_8, 6, VAR_13);
    }
  }

  FUNC_4(VAR_9, VAR_0, VAR_9->reqid, VAR_12, (u_char *)VAR_13 - VAR_12,
             VAR_2);
}
