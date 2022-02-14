
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_mad_send_buf {struct ib_ah* ah; } ;
struct TYPE_6__ {int grh; } ;
struct ib_mad_recv_wc {TYPE_3__ recv_buf; int wc; } ;
struct ib_ah {int dummy; } ;
struct cm_port {int port_num; TYPE_2__* mad_agent; } ;
struct TYPE_5__ {TYPE_1__* qp; } ;
struct TYPE_4__ {int pd; } ;


 scalar_t__ FUNC_0 (struct ib_ah*) ;
 int FUNC_1 (struct ib_ah*) ;
 struct ib_ah* FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cm_port *VAR_0,
         struct ib_mad_recv_wc *VAR_1,
         struct ib_mad_send_buf *VAR_2)
{
 struct ib_ah *VAR_3;

 VAR_3 = FUNC_2(VAR_0->mad_agent->qp->pd, VAR_1->wc,
      VAR_1->recv_buf.grh, VAR_0->port_num);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2->ah = VAR_3;
 return 0;
}
