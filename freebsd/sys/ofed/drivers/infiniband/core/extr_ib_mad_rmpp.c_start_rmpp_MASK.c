
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mad_rmpp_recv {int newwin; int timeout_work; int state; int refcount; } ;
struct ib_mad_recv_wc {int recv_buf; } ;
struct ib_mad_agent_private {TYPE_2__* qp_info; int lock; } ;
struct TYPE_4__ {TYPE_1__* port_priv; } ;
struct TYPE_3__ {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (struct mad_rmpp_recv*,struct ib_mad_recv_wc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mad_rmpp_recv*) ;
 struct ib_mad_recv_wc* FUNC_3 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 struct mad_rmpp_recv* FUNC_4 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_5 (struct mad_rmpp_recv*) ;
 int FUNC_6 (struct mad_rmpp_recv*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct ib_mad_recv_wc*) ;
 scalar_t__ FUNC_9 (struct ib_mad_agent_private*,struct mad_rmpp_recv*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (struct ib_mad_agent_private*) ;

__attribute__((used)) static struct ib_mad_recv_wc *
FUNC_15(struct ib_mad_agent_private *VAR_1,
    struct ib_mad_recv_wc *VAR_2)
{
 struct mad_rmpp_recv *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_8(VAR_2);
  return ((void*)0);
 }

 FUNC_12(&VAR_1->lock, VAR_4);
 if (FUNC_9(VAR_1, VAR_3)) {
  FUNC_13(&VAR_1->lock, VAR_4);

  FUNC_6(VAR_3);
  return FUNC_3(VAR_1, VAR_2);
 }
 FUNC_1(&VAR_3->refcount);

 if (FUNC_7(&VAR_2->recv_buf)) {
  VAR_3->state = VAR_0;
  FUNC_13(&VAR_1->lock, VAR_4);
  FUNC_2(VAR_3);
 } else {
  FUNC_13(&VAR_1->lock, VAR_4);

  FUNC_11(VAR_1->qp_info->port_priv->wq,
       &VAR_3->timeout_work,
       FUNC_10(40000));
  VAR_3->newwin += FUNC_14(VAR_1);
  FUNC_0(VAR_3, VAR_2);
  VAR_2 = ((void*)0);
 }
 FUNC_5(VAR_3);
 return VAR_2;
}
