
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct opa_vnic_vema_port {int lock; } ;
struct TYPE_10__ {scalar_t__ status; int method; } ;
struct opa_vnic_vema_mad {TYPE_4__ mad_hdr; } ;
struct ib_mad_send_buf {struct opa_vnic_vema_mad* mad; struct ib_mad_send_buf* ah; } ;
struct TYPE_9__ {TYPE_5__* mad; int grh; } ;
struct ib_mad_recv_wc {TYPE_3__ recv_buf; TYPE_6__* wc; } ;
struct ib_mad_agent {int port_num; TYPE_1__* qp; struct opa_vnic_vema_port* context; } ;
struct ib_ah {struct opa_vnic_vema_mad* mad; struct ib_ah* ah; } ;
struct TYPE_12__ {int pkey_index; int src_qp; } ;
struct TYPE_8__ {int method; } ;
struct TYPE_11__ {TYPE_2__ mad_hdr; } ;
struct TYPE_7__ {int pd; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct ib_mad_send_buf* FUNC_1 (int ,TYPE_6__*,int ,int ) ;
 struct ib_mad_send_buf* FUNC_2 (struct ib_mad_agent*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct ib_mad_recv_wc*) ;
 int FUNC_4 (struct ib_mad_send_buf*) ;
 int FUNC_5 (struct ib_mad_send_buf*,int *) ;
 int FUNC_6 (struct opa_vnic_vema_mad*,TYPE_5__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ib_mad_send_buf*,int ) ;
 int FUNC_10 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;
 int FUNC_11 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;

__attribute__((used)) static void FUNC_12(struct ib_mad_agent *VAR_7,
        struct ib_mad_send_buf *VAR_8,
        struct ib_mad_recv_wc *VAR_9)
{
 struct opa_vnic_vema_port *VAR_10;
 struct ib_ah *VAR_11;
 struct ib_mad_send_buf *VAR_12;
 struct opa_vnic_vema_mad *VAR_13;

 if (!VAR_9 || !VAR_9->recv_buf.mad)
  return;

 VAR_10 = VAR_7->context;
 VAR_11 = FUNC_1(VAR_7->qp->pd, VAR_9->wc,
      VAR_9->recv_buf.grh, VAR_7->port_num);
 if (FUNC_0(VAR_11))
  goto free_recv_mad;

 VAR_12 = FUNC_2(VAR_7, VAR_9->wc->src_qp,
     VAR_9->wc->pkey_index, 0,
     VAR_2, VAR_4,
     VAR_0, VAR_3);
 if (FUNC_0(VAR_12))
  goto err_rsp;

 VAR_12->ah = VAR_11;
 VAR_13 = VAR_12->mad;
 FUNC_6(VAR_13, VAR_9->recv_buf.mad, VAR_2);
 VAR_13->mad_hdr.method = VAR_1;
 VAR_13->mad_hdr.status = 0;


 FUNC_7(&VAR_10->lock);

 switch (VAR_9->recv_buf.mad->mad_hdr.method) {
 case 129:
  FUNC_10(VAR_10, (struct opa_vnic_vema_mad *)VAR_9->recv_buf.mad,
    VAR_13);
  break;
 case 128:
  FUNC_11(VAR_10, (struct opa_vnic_vema_mad *)VAR_9->recv_buf.mad,
    VAR_13);
  break;
 default:
  VAR_13->mad_hdr.status = VAR_5;
  break;
 }
 FUNC_8(&VAR_10->lock);

 if (!FUNC_5(VAR_12, ((void*)0))) {




  goto free_recv_mad;
 }

 FUNC_4(VAR_12);

err_rsp:
 FUNC_9(VAR_11, VAR_6);
free_recv_mad:
 FUNC_3(VAR_9);
}
