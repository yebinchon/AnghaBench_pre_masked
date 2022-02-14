
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_5__ {int srq; } ;
struct ipoib_dev_priv {int pd; TYPE_3__* ca; TYPE_1__ cm; int recv_cq; int send_cq; } ;
struct ipoib_cm_tx {int max_send_sge; } ;
struct TYPE_8__ {int max_send_sge; int max_send_wr; } ;
struct ib_qp_init_attr {TYPE_4__ cap; int create_flags; struct ipoib_cm_tx* qp_context; int qp_type; int sq_sig_type; int srq; int recv_cq; int send_cq; } ;
struct ib_qp {int dummy; } ;
struct TYPE_6__ {int max_send_sge; } ;
struct TYPE_7__ {TYPE_2__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ib_qp* FUNC_0 (int ,struct ib_qp_init_attr*) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static struct ib_qp *FUNC_3(struct net_device *VAR_6, struct ipoib_cm_tx *VAR_7)
{
 struct ipoib_dev_priv *VAR_8 = FUNC_1(VAR_6);
 struct ib_qp_init_attr VAR_9 = {
  .send_cq = VAR_8->send_cq,
  .recv_cq = VAR_8->recv_cq,
  .srq = VAR_8->cm.srq,
  .cap.max_send_wr = VAR_4,
  .cap.max_send_sge = 1,
  .sq_sig_type = VAR_1,
  .qp_type = VAR_0,
  .qp_context = VAR_7,
  .create_flags = 0
 };
 struct ib_qp *VAR_10;

 if (VAR_6->features & VAR_3)
  VAR_9.cap.max_send_sge = FUNC_2(VAR_5, VAR_8->ca->attrs.max_send_sge,
           VAR_2 + 1);

 VAR_10 = FUNC_0(VAR_8->pd, &VAR_9);
 VAR_7->max_send_sge = VAR_9.cap.max_send_sge;
 return VAR_10;
}
