
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mad_rmpp_recv {int ah; TYPE_1__* agent; } ;
struct ib_rmpp_mad {int dummy; } ;
struct ib_mad_send_buf {int ah; } ;
struct TYPE_8__ {TYPE_5__* mad; } ;
struct ib_mad_recv_wc {TYPE_3__ recv_buf; TYPE_2__* wc; } ;
struct TYPE_9__ {int mgmt_class; } ;
struct TYPE_10__ {TYPE_4__ mad_hdr; } ;
struct TYPE_7__ {int pkey_index; int src_qp; } ;
struct TYPE_6__ {int agent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (struct ib_mad_send_buf*,struct ib_rmpp_mad*,struct mad_rmpp_recv*) ;
 struct ib_mad_send_buf* FUNC_2 (int *,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_3 (struct ib_mad_send_buf*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ib_mad_send_buf*,int *) ;

__attribute__((used)) static void FUNC_6(struct mad_rmpp_recv *VAR_2,
       struct ib_mad_recv_wc *VAR_3)
{
 struct ib_mad_send_buf *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_3->recv_buf.mad->mad_hdr.mgmt_class);
 VAR_4 = FUNC_2(&VAR_2->agent->agent, VAR_3->wc->src_qp,
     VAR_3->wc->pkey_index, 1, VAR_6,
     0, VAR_0,
     VAR_1);
 if (FUNC_0(VAR_4))
  return;

 FUNC_1(VAR_4, (struct ib_rmpp_mad *) VAR_3->recv_buf.mad, VAR_2);
 VAR_4->ah = VAR_2->ah;
 VAR_5 = FUNC_5(VAR_4, ((void*)0));
 if (VAR_5)
  FUNC_3(VAR_4);
}
