
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsm {int reqid; } ;
struct ccp {int last_reset; int reset_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ccp* FUNC_0 (struct fsm*) ;
 int FUNC_1 (struct fsm*,int ,int ,int *,int ,int ) ;

void
FUNC_2(struct fsm *VAR_2)
{

  struct ccp *VAR_3 = FUNC_0(VAR_2);

  VAR_3->reset_sent = VAR_2->reqid;
  VAR_3->last_reset = -1;
  FUNC_1(VAR_2, VAR_0, VAR_2->reqid, ((void*)0), 0, VAR_1);
}
