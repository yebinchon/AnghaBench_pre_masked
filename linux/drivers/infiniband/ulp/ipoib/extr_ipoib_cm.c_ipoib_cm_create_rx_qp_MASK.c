
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int srq; } ;
struct ipoib_dev_priv {int pd; TYPE_1__ cm; int recv_cq; } ;
struct ipoib_cm_rx {int dummy; } ;
struct TYPE_4__ {int max_send_wr; int max_send_sge; int max_recv_sge; int max_recv_wr; } ;
struct ib_qp_init_attr {TYPE_2__ cap; struct ipoib_cm_rx* qp_context; int qp_type; int sq_sig_type; int srq; int recv_cq; int send_cq; int event_handler; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_qp* FUNC_0 (int ,struct ib_qp_init_attr*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static struct ib_qp *FUNC_3(struct net_device *VAR_5,
        struct ipoib_cm_rx *VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_2(VAR_5);
 struct ib_qp_init_attr VAR_8 = {
  .event_handler = VAR_3,
  .send_cq = VAR_7->recv_cq,
  .recv_cq = VAR_7->recv_cq,
  .srq = VAR_7->cm.srq,
  .cap.max_send_wr = 1,
  .cap.max_send_sge = 1,
  .sq_sig_type = VAR_1,
  .qp_type = VAR_0,
  .qp_context = VAR_6,
 };

 if (!FUNC_1(VAR_5)) {
  VAR_8.cap.max_recv_wr = VAR_4;
  VAR_8.cap.max_recv_sge = VAR_2;
 }

 return FUNC_0(VAR_7->pd, &VAR_8);
}
