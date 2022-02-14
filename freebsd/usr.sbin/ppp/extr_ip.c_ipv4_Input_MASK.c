
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct link {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_6__ {TYPE_1__ fsm; } ;
struct TYPE_5__ {TYPE_3__ ipcp; } ;
struct bundle {TYPE_2__ ncp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bundle*,struct link*,struct mbuf*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int ) ;

struct mbuf *
FUNC_5(struct bundle *VAR_4, struct link *VAR_5, struct mbuf *VAR_6)
{
  int VAR_7;

  if (VAR_4->ncp.ipcp.fsm.state != VAR_3) {
    FUNC_2(VAR_1, "ipv4_Input: IPCP not open - packet dropped\n");
    FUNC_3(VAR_6);
    return ((void*)0);
  }

  FUNC_4(VAR_6, VAR_2);

  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_0);
  FUNC_1(&VAR_4->ncp.ipcp, VAR_7);

  return ((void*)0);
}
