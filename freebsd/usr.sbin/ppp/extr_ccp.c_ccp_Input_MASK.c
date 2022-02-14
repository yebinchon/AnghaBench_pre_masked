
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_6__ {TYPE_1__* link; } ;
struct TYPE_5__ {TYPE_3__ fsm; } ;
struct link {TYPE_2__ ccp; } ;
struct bundle {int dummy; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct bundle*) ;
 int FUNC_2 (TYPE_3__*,struct mbuf*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int ) ;

extern struct mbuf *
FUNC_6(struct bundle *VAR_3, struct link *VAR_4, struct mbuf *VAR_5)
{

  FUNC_5(VAR_5, VAR_1);
  if (FUNC_0(VAR_3) == VAR_2)
    FUNC_2(&VAR_4->ccp.fsm, VAR_5);
  else {
    if (FUNC_0(VAR_3) < VAR_2)
      FUNC_3(VAR_0, "%s: Error: Unexpected CCP in phase %s (ignored)\n",
                 VAR_4->ccp.fsm.link->name, FUNC_1(VAR_3));
    FUNC_4(VAR_5);
  }
  return ((void*)0);
}
