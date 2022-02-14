
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mad_rmpp_recv {int seg_num; int cleanup_work; TYPE_1__* agent; struct ib_mad_recv_wc* rmpp_wc; int timeout_work; } ;
struct ib_mad_recv_wc {int mad_len; } ;
struct TYPE_6__ {TYPE_2__* port_priv; } ;
struct TYPE_5__ {int wq; } ;
struct TYPE_4__ {TYPE_3__* qp_info; } ;


 int FUNC_0 (struct mad_rmpp_recv*,struct ib_mad_recv_wc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mad_rmpp_recv*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static struct ib_mad_recv_wc * FUNC_5(struct mad_rmpp_recv *VAR_0)
{
 struct ib_mad_recv_wc *VAR_1;

 FUNC_0(VAR_0, VAR_0->rmpp_wc);
 if (VAR_0->seg_num > 1)
  FUNC_1(&VAR_0->timeout_work);

 VAR_1 = VAR_0->rmpp_wc;
 VAR_1->mad_len = FUNC_2(VAR_0);

 FUNC_4(VAR_0->agent->qp_info->port_priv->wq,
      &VAR_0->cleanup_work, FUNC_3(10000));
 return VAR_1;
}
